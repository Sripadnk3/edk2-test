# 
#  Copyright 2006 - 2010 Unified EFI, Inc.<BR> 
#  Copyright (c) 2010, Intel Corporation. All rights reserved.<BR>
# 
#  This program and the accompanying materials
#  are licensed and made available under the terms and conditions of the BSD License
#  which accompanies this distribution.  The full text of the license may be found at 
#  http://opensource.org/licenses/bsd-license.php
# 
#  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
#  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
# 
################################################################################
CaseLevel         CONFORMANCE
CaseAttribute     AUTO
CaseVerboseLevel  DEFAULT
set reportfile    report.csv

#
# test case Name, category, description, GUID...
#
CaseGuid          48DBDE48-3312-4dab-B70F-AB7B233E1359
CaseName          GetInfo.Conf1.Case1
CaseCategory      MTFTP6
CaseDescription   {Test GetInfo Conformance of MTFTP6 - Invoke GetInfo() \
                   when the instance has not been configured.       \
                   EFI_NOT_STARTED should be returned.}
################################################################################

Include MTFTP6/include/Mtftp6.inc.tcl

#
# Begin log ...
#
BeginLog

BeginScope _MTFTP6_GETINFO_CONFORMANCE1_CASE1_

#
# Parameter Definition
# R_ represents "Remote EFI Side Parameter"
# L_ represents "Local OS Side Parameter"
#
UINTN                            R_Status
UINTN                            R_Handle

Mtftp6ServiceBinding->CreateChild "&@R_Handle, &@R_Status"
GetAck
set assert [VerifyReturnStatus R_Status $EFI_SUCCESS]
RecordAssertion $assert $GenericAssertionGuid                   \
                "Mtftp6SB.CreateChild - Create Child "                    \
                "ReturnStatus - $R_Status, ExpectedStatus - $EFI_SUCCESS"
SetVar     [subst $ENTS_CUR_CHILD]  @R_Handle

#
# check point: Call GetInfo function when the instance hasn't been configured. \
#              EFI_NOT_STARTED should be returned.
#
EFI_MTFTP6_OVERRIDE_DATA         R_OverrideData

SetIpv6Address    R_OverrideData.ServerIp       "2002::2"
SetVar            R_OverrideData.ServerPort     1780
SetVar            R_OverrideData.TryCount       3
SetVar            R_OverrideData.TimeoutValue   3

CHAR8                            R_Filename(20)
SetVar R_Filename                "Shell.efi"

UINT8                            R_OptionCount
SetVar R_OptionCount             1

EFI_MTFTP6_OPTION                R_OptionList(8)

CHAR8                            R_OptionStr0(10)
CHAR8                            R_ValueStr0(10)
SetVar R_OptionStr0                          "tsize"
SetVar R_ValueStr0                           "0"
SetVar R_OptionList(0).OptionStr             &@R_OptionStr0
SetVar R_OptionList(0).ValueStr              &@R_ValueStr0

UINT32                           R_PacketLength
POINTER                          R_Packet

Mtftp6->GetInfo "&@R_OverrideData, &@R_Filename, NULL, @R_OptionCount, \
                                     &@R_OptionList, &@R_PacketLength, &@R_Packet, &@R_Status"
GetAck
set assert [VerifyReturnStatus R_Status $EFI_NOT_STARTED]
RecordAssertion $assert $Mtftp6GetInfoConf1AssertionGuid001               \
                "Mtftp6.GetInfo -conf- Call GetInfo when the instance hasn't been configured."  \
                "ReturnStatus - $R_Status, ExpectedStatus - $EFI_NOT_STARTED"

#
# Destroy Child 
#
Mtftp6ServiceBinding->DestroyChild "@R_Handle, &@R_Status"
GetAck
set assert [VerifyReturnStatus R_Status $EFI_SUCCESS]
RecordAssertion $assert $GenericAssertionGuid                  \
                "Mtftp6SB.DestroyChild - Destroy Child "                  \
                "ReturnStatus - $R_Status, ExpectedStatus - $EFI_SUCCESS"

EndScope _MTFTP6_GETINFO_CONFORMANCE1_CASE1_

#
# End Log
#
EndLog