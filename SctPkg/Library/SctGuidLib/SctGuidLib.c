/*++
  The material contained herein is not a license, either
  expressly or impliedly, to any intellectual property owned
  or controlled by any of the authors or developers of this
  material or to any contribution thereto. The material
  contained herein is provided on an "AS IS" basis and, to the
  maximum extent permitted by applicable law, this information
  is provided AS IS AND WITH ALL FAULTS, and the authors and
  developers of this material hereby disclaim all other
  warranties and conditions, either express, implied or
  statutory, including, but not limited to, any (if any)
  implied warranties, duties or conditions of merchantability,
  of fitness for a particular purpose, of accuracy or
  completeness of responses, of results, of workmanlike
  effort, of lack of viruses and of lack of negligence, all
  with regard to this material and any contribution thereto.
  Designers must not rely on the absence or characteristics of
  any features or instructions marked "reserved" or
  "undefined." The Unified EFI Forum, Inc. reserves any
  features or instructions so marked for future definition and
  shall have no responsibility whatsoever for conflicts or
  incompatibilities arising from future changes to them. ALSO,
  THERE IS NO WARRANTY OR CONDITION OF TITLE, QUIET ENJOYMENT,
  QUIET POSSESSION, CORRESPONDENCE TO DESCRIPTION OR
  NON-INFRINGEMENT WITH REGARD TO THE TEST SUITE AND ANY
  CONTRIBUTION THERETO.

  IN NO EVENT WILL ANY AUTHOR OR DEVELOPER OF THIS MATERIAL OR
  ANY CONTRIBUTION THERETO BE LIABLE TO ANY OTHER PARTY FOR
  THE COST OF PROCURING SUBSTITUTE GOODS OR SERVICES, LOST
  PROFITS, LOSS OF USE, LOSS OF DATA, OR ANY INCIDENTAL,
  CONSEQUENTIAL, DIRECT, INDIRECT, OR SPECIAL DAMAGES WHETHER
  UNDER CONTRACT, TORT, WARRANTY, OR OTHERWISE, ARISING IN ANY
  WAY OUT OF THIS OR ANY OTHER AGREEMENT RELATING TO THIS
  DOCUMENT, WHETHER OR NOT SUCH PARTY HAD ADVANCE NOTICE OF
  THE POSSIBILITY OF SUCH DAMAGES.

  Copyright 2006 - 2015 Unified EFI, Inc. All
  Rights Reserved, subject to all existing rights in all
  matters included within this Test Suite, to which United
  EFI, Inc. makes no claim of right.

  Copyright (c) 2013-2014, ARM Ltd. All rights reserved.
  Copyright (c) 2015, Intel Corporation. All rights reserved.

--*/

#include <Uefi.h>

EFI_GUID gEfiDriverBindingProtocolGuid = { 0x18A031AB, 0xB443, 0x4D1A, { 0xA5, 0xC0, 0x0C, 0x09, 0x26, 0x1E, 0x9F, 0x71 }};
EFI_GUID gEfiDriverConfigurationProtocolGuid = { 0x107A772B, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiDriverConfiguration2ProtocolGuid = { 0xBFD7DC1D, 0x24F1, 0x40D9, { 0x82, 0xE7, 0x2E, 0x09, 0xBB, 0x6B, 0x4E, 0xBE }};
EFI_GUID gEfiDriverDiagnosticsProtocolGuid = { 0x0784924F, 0xE296, 0x11D4, { 0x9A, 0x49, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiDriverDiagnostics2ProtocolGuid = { 0x4D330321, 0x025F, 0x4AAC, { 0x90, 0xD8, 0x5E, 0xD9, 0x00, 0x17, 0x3B, 0x63 }};
EFI_GUID gEfiComponentNameProtocolGuid = { 0x107A772C, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiComponentName2ProtocolGuid = { 0x6A7A5CFF, 0xE8D9, 0x4F70, { 0xBA, 0xDA, 0x75, 0xAB, 0x30, 0x25, 0xCE, 0x14 }};
EFI_GUID gEfiPlatformDriverOverrideProtocolGuid = { 0x6b30c738, 0xa391, 0x11d4, {0x9a, 0x3b, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d }};
EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
EFI_GUID gEfiHobListGuid = { 0x7739F24C, 0x93D7, 0x11D4, { 0x9A, 0x3A, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiGlobalVariableGuid = { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }};
EFI_GUID gEfiDevicePathProtocolGuid = { 0x09576E91, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiLoadedImageProtocolGuid = { 0x5B1B31A1, 0x9562, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiSimpleTextInProtocolGuid = { 0x387477C1, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiSimpleTextOutProtocolGuid = { 0x387477C2, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiBlockIoProtocolGuid = { 0x964E5B21, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiDiskIoProtocolGuid = { 0xCE345171, 0xBA0B, 0x11D2, { 0x8E, 0x4F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiSimpleFileSystemProtocolGuid = { 0x964E5B22, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiLoadFileProtocolGuid = { 0x56EC3091, 0x954C, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiDeviceIoProtocolGuid = { 0xAF6AC311, 0x84C3, 0x11D2, { 0x8E, 0x3C, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiFileInfoGuid = { 0x09576E92, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiFileSystemInfoGuid = { 0x09576E93, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiUnicodeCollationProtocolGuid = { 0x1D85CD7F, 0xF43D, 0x11D2, { 0x9A, 0x0C, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiSerialIoProtocolGuid = { 0xBB25CF6F, 0xF1D4, 0x11D2, { 0x9A, 0x0C, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0xFD }};
EFI_GUID gEfiSimpleNetworkProtocolGuid = { 0xA19832B9, 0xAC25, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiNetworkInterfaceIdentifierProtocolGuid = { 0xE18541CD, 0xF755, 0x4F73, { 0x92, 0x8D, 0x64, 0x3C, 0x8A, 0x79, 0xB2, 0x29 }};
EFI_GUID gEfiPxeBaseCodeProtocolGuid = { 0x03C4E603, 0xAC28, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiPxeBaseCodeCallbackProtocolGuid = { 0x245DCA21, 0xFB7B, 0x11D3, { 0x8F, 0x01, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiPartTypeSystemPartGuid = { 0xC12A7328, 0xF81F, 0x11D2, { 0xBA, 0x4B, 0x00, 0xA0, 0xC9, 0x3E, 0xC9, 0x3B }};
EFI_GUID gEfiPartTypeLegacyMbrGuid = { 0x024DEE41, 0x33E7, 0x11D3, { 0x9D, 0x69, 0x00, 0x08, 0xC7, 0x81, 0xF3, 0x9F }};
EFI_GUID gEfiDxeServicesTableGuid = { 0x05AD34BA, 0x6F02, 0x4214, { 0x95, 0x2E, 0x4D, 0xA0, 0x39, 0x8E, 0x2B, 0xB9 }};
EFI_GUID gEfiManagedNetworkProtocolGuid = { 0x7ab33a91, 0xace5, 0x4326, { 0xb5, 0x72, 0xe7, 0xee, 0x33, 0xd3, 0x9f, 0x16 }};
EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid = { 0xF36FF770, 0xA7E1, 0x42CF, { 0x9E, 0xD2, 0x56, 0xF0, 0xF2, 0x71, 0xF4, 0x4C }};

EFI_GUID gBlackBoxEfiPcAnsiGuid = { 0xE0C14753, 0xF9BE, 0x11D2, { 0x9A, 0x0C, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gBlackBoxEfiVT100Guid = { 0xDFA66065, 0xB419, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gBlackBoxEfiVT100PlusGuid = { 0x7BAEC70B, 0x57E0, 0x4C76, { 0x8E, 0x87, 0x2F, 0x9E, 0x28, 0x08, 0x83, 0x43 }};
EFI_GUID gBlackBoxEfiVTUTF8Guid = { 0xAD15A0D6, 0x8BEC, 0x4ACF, { 0xA0, 0x73, 0xD0, 0x1D, 0xE7, 0x7E, 0x2D, 0x88 }};

EFI_GUID gBlackBoxEfiBlockIoProtocolGuid = { 0x964E5B21, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gBlackBoxEfiDebugPortProtocolGuid = { 0xEBA4E8D2, 0x3858, 0x41EC, { 0xA2, 0x81, 0x26, 0x47, 0xBA, 0x96, 0x60, 0xD0 }};
EFI_GUID gBlackBoxEfiDevicePathProtocolGuid = { 0x9576e91, 0x6d3f, 0x11d2, { 0x8e, 0x39, 0x0, 0xa0, 0xc9, 0x69, 0x72, 0x3b }};
EFI_GUID gBlackBoxEfiDevicePathUtilitiesProtocolGuid = { 0x379be4e, 0xd706, 0x437d, { 0xb0, 0x37, 0xed, 0xb8, 0x2f, 0xb7, 0x72, 0xa4 }};
EFI_GUID gBlackBoxEfiDevicePathToTextProtocolGuid = { 0x8b843e20, 0x8132, 0x4852, { 0x90, 0xcc, 0x55, 0x1a, 0x4e, 0x4a, 0x7f, 0x1c }};
EFI_GUID gBlackBoxEfiSimpleFileSystemProtocolGuid = { 0x964e5b22, 0x6459, 0x11d2, { 0x8e, 0x39, 0x0, 0xa0, 0xc9, 0x69, 0x72, 0x3b }};
EFI_GUID gBlackBoxEfiLoadedImageProtocolGuid = { 0x5B1B31A1, 0x9562, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gBlackBoxEfiEbcDriverProtocolGuid = { 0xf01547c5, 0x6f06, 0x4c6d, { 0xb6, 0x10, 0x88, 0x91, 0xe7, 0x74, 0x36, 0x45 }};
EFI_GUID gBlackBoxEfiSimpleTextInProtocolGuid = { 0x387477c1, 0x69c7, 0x11d2, { 0x8e, 0x39, 0x0, 0xa0, 0xc9, 0x69, 0x72, 0x3b }};
EFI_GUID gBlackBoxEfiSimpleTextOutProtocolGuid = { 0x387477C2, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gBlackBoxEfiSimpleTextInputExProtocolGuid = {0xdd9e7534, 0x7762, 0x4698, { 0x8c, 0x14, 0xf5, 0x85, 0x17, 0xa6, 0x25, 0xaa }};
EFI_GUID gBlackBoxEfiGraphicsOutputProtocolGuid = {0x9042a9de, 0x23dc, 0x4a38, { 0x96, 0xfb, 0x7a, 0xde, 0xd0, 0x80, 0x51, 0x6a }};
EFI_GUID gBlackBoxEfiHIIDatabaseProtocolGuid = { 0xef9fc172, 0xa1b2, 0x4693, { 0xb3, 0x27, 0x6d, 0x32, 0xfc, 0x41, 0x60, 0x42 }};
EFI_GUID gBlackBoxEfiHIIPackageListProtocolGuid = { 0x6a1ee763, 0xd47a, 0x43b4, { 0xaa, 0xbe, 0xef, 0x1d, 0xe2, 0xab, 0x56, 0xfc }};
EFI_GUID gBlackBoxEfiHIIStringProtocolGuid = {0xfd96974, 0x23aa, 0x4cdc, { 0xb9, 0xcb, 0x98, 0xd1, 0x77, 0x50, 0x32, 0x2a }};
EFI_GUID gBlackBoxEfiHIIConfigAccessProtocolGuid = { 0x330d4706, 0xf2a0, 0x4e4f, { 0xa3, 0x69, 0xb6, 0x6f, 0xa8, 0xd5, 0x43, 0x85 }};
EFI_GUID gBlackBoxEfiHIIConfigRoutingProtocolGuid = { 0x587e72d7, 0xcc50, 0x4f79, { 0x82, 0x09, 0xca, 0x29, 0x1f, 0xc1, 0xa1, 0x0f }};
EFI_GUID gBlackBoxEfiSimpleNetworkProtocolGuid  = { 0xA19832B9, 0xAC25, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gBlackBoxEfiPxeBaseCodeProtocolGuid = { 0x03C4E603, 0xAC28, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gBlackBoxEfiIp4ProtocolGuid = { 0x41D94CD2, 0x35B6, 0x455A, { 0x82, 0x58, 0xD4, 0xE5, 0x13, 0x34, 0xAA, 0xDD }};
EFI_GUID gBlackBoxEfiIp4ConfigProtocolGuid = { 0x3B95AA31, 0x3793, 0x434B, { 0x86, 0x67, 0xC8, 0x07, 0x08, 0x92, 0xE0, 0x5E }};
EFI_GUID gBlackBoxEfiIp4ServiceBindingProtocolGuid = { 0xC51711E7, 0xB4BF, 0x404A, { 0xBF, 0xB8, 0x0A, 0x04, 0x8E, 0xF1, 0xFF, 0xE4 }};
EFI_GUID gBlackBoxEfiIp6ProtocolGuid = { 0x2c8759d5, 0x5c2d, 0x66ef, { 0x92, 0x5f, 0xb6, 0x6c, 0x10, 0x19, 0x57, 0xe2 }};
EFI_GUID gBlackBoxEfiIp6ConfigProtocolGuid = { 0x937fe521, 0x95ae, 0x4d1a, { 0x89, 0x29, 0x48, 0xbc, 0xd9, 0x0a, 0xd3, 0x1a }};
EFI_GUID gBlackBoxEfiIp6ServiceBindingProtocolGuid = { 0xec835dd3, 0xfe0f, 0x617b, { 0xa6, 0x21, 0xb3, 0x50, 0xc3, 0xe1, 0x33, 0x88 }};
EFI_GUID gBlackBoxEfiTcp4ProtocolGuid = { 0x65530BC7, 0xA359, 0x410F, { 0xB0, 0x10, 0x5A, 0xAD, 0xC7, 0xEC, 0x2B, 0x62 }};
EFI_GUID gBlackBoxEfiTcp4ServiceBindingProtocolGuid = { 0x00720665, 0x67EB, 0x4A99, { 0xBA, 0xF7, 0xD3, 0xC3, 0x3A, 0x1C, 0x7C, 0xC9 }};
EFI_GUID gBlackBoxEfiTcp6ProtocolGuid = { 0x46e44855, 0xbd60, 0x4ab7, { 0xab, 0x0d, 0xa6, 0x79, 0xb9, 0x44, 0x7d, 0x77 }};
EFI_GUID gBlackBoxEfiTcp6ServiceBindingProtocolGuid = { 0xec20eb79, 0x6c1a, 0x4664, { 0x9a, 0x0d, 0xd2, 0xe4, 0xcc, 0x16, 0xd6, 0x64 }};
EFI_GUID gBlackBoxEfiUdp4ProtocolGuid = { 0x3AD9DF29, 0x4501, 0x478D, { 0xB1, 0xF8, 0x7F, 0x7F, 0xE7, 0x0E, 0x50, 0xF3 }};
EFI_GUID gBlackBoxEfiUdp4ServiceBindingProtocolGuid = { 0x83F01464, 0x99BD, 0x45E5, { 0xB3, 0x83, 0xAF, 0x63, 0x05, 0xD8, 0xE9, 0xE6 }};
EFI_GUID gBlackBoxEfiUdp6ServiceBindingProtocolGuid = { 0x66ed4721, 0x3c98, 0x4d3e, { 0x81, 0xe3, 0xd0, 0x3d, 0xd3, 0x9a, 0x72, 0x54 }};
EFI_GUID gBlackBoxEfiUdp6ProtocolGuid = { 0x4f948815, 0xb4b9, 0x43cb, { 0x8a, 0x33, 0x90, 0xe0, 0x60, 0xb3, 0x49, 0x55 }};
EFI_GUID gBlackBoxEfiMtftp4ProtocolGuid = { 0x78247C57, 0x63DB, 0x4708, { 0x99, 0xC2, 0xA8, 0xB4, 0xA9, 0xA6, 0x1F, 0x6B }};
EFI_GUID gBlackBoxEfiMtftp6ProtocolGuid = { 0xbf0a78ba, 0xec29, 0x49cf, { 0xa1, 0xc9, 0x7a, 0xe5, 0x4e, 0xab, 0x6a, 0x51 }};
EFI_GUID gBlackBoxEfiMtftp4ServiceBindingProtocolGuid = { 0x2FE800BE, 0x8F01, 0x4AA6, { 0x94, 0x6B, 0xD7, 0x13, 0x88, 0xE1, 0x83, 0x3F }};
EFI_GUID gBlackBoxEfiMtftp6ServiceBindingProtocolGuid = { 0xd9760ff3, 0x3cca, 0x4267, { 0x80, 0xf9, 0x75, 0x27, 0xfa, 0xfa, 0x42, 0x23 }};
EFI_GUID gBlackBoxEfiManagedNetworkProtocolGuid = { 0x7ab33a91, 0xace5, 0x4326, { 0xb5, 0x72, 0xe7, 0xee, 0x33, 0xd3, 0x9f, 0x16 }};
EFI_GUID gBlackBoxEfiManagedNetworkServiceBindingProtocolGuid = { 0xF36FF770, 0xA7E1, 0x42CF, { 0x9E, 0xD2, 0x56, 0xF0, 0xF2, 0x71, 0xF4, 0x4C }};
EFI_GUID gBlackBoxEfiArpServiceBindingProtocolGuid = { 0xF44C00EE, 0x1F2C, 0x4A00, { 0xAA, 0x09, 0x1C, 0x9F, 0x3E, 0x08, 0x00, 0xA3 }};
EFI_GUID gBlackBoxEfiDhcp4ServiceBindingProtocolGuid = { 0x9D9A39D8, 0xBD42, 0x4A73, { 0xA4, 0xD5, 0x8E, 0xE9, 0x4B, 0xE1, 0x13, 0x80 }};
EFI_GUID gBlackBoxEfiDhcp4ProtocolGuid = { 0x8A219718, 0x4EF5, 0x4761, { 0x91, 0xC8, 0xC0, 0xF0, 0x4B, 0xDA, 0x9E, 0x56 }};
EFI_GUID gBlackBoxEfiDhcp6ServiceBindingProtocolGuid = { 0x9fb9a8a1, 0x2f4a, 0x43a6, {0x88, 0x9c, 0xd0, 0xf7, 0xb6, 0xc4, 0x7a, 0xd5 }};
EFI_GUID gBlackBoxEfiDhcp6ProtocolGuid = { 0x87c8bad7, 0x595, 0x4053, { 0x82, 0x97, 0xde, 0xde, 0x39, 0x5f, 0x5d, 0x5b }};
EFI_GUID gBlackBoxEfiArpProtocolGuid = { 0xF4B427BB, 0xBA21, 0x4F16, { 0xBC, 0x4E, 0x43, 0xE4, 0x16, 0xAB, 0x61, 0x9C }};

EFI_GUID gBlackBoxEfiFileSystemVolumeLabelInfoIdGuid = { 0xDB47D7D3,0xFE81, 0x11d3, { 0x9A, 0x35, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gBlackBoxEfiFileSystemInfoGuid = { 0x09576E93, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gBlackBoxEfiFileInfoGuid = { 0x9576e92, 0x6d3f, 0x11d2, { 0x8e, 0x39, 0x0, 0xa0, 0xc9, 0x69, 0x72, 0x3b }};

EFI_GUID gEfiStandardTestLibraryGuid = { 0x1f9c2ae7, 0xf147, 0x4d19, { 0xa5, 0xe8, 0x25, 0x5a, 0xd0, 0x05, 0xeb, 0x3e }};
EFI_GUID gEfiTestProfileLibraryGuid = { 0x832c9023, 0x8e67, 0x453f, { 0x83, 0xea, 0xdf, 0x71, 0x05, 0xfa, 0x74, 0x66 }};
EFI_GUID gEfiIHVBbTestGuid = { 0x27e36cde, 0xa7e7, 0x4a4a, { 0x9b, 0x5f, 0xa3, 0x9a, 0x56, 0x75, 0xcb, 0x80 }};
EFI_GUID gEfiWbTestGuid = { 0x0B486CED, 0x25EB, 0x448a, { 0xB2, 0xB2, 0x22, 0x4E, 0x7A, 0x20, 0xCF, 0x57 }};
EFI_GUID gEfiBbTestGuid = { 0x8C41CE3E, 0xB255, 0x4966, { 0xB5, 0x3C, 0x39, 0x76, 0x5A, 0xE1, 0x11, 0xD0 }};
EFI_GUID gEfiNullGuid = { 0x00000000, 0x0000, 0x0000, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }};

EFI_GUID gEfiEntsProtocolGuid = { 0x5bfcffb2, 0x84c0, 0x49f0, { 0x9a, 0x3a, 0x0, 0x71, 0x5f, 0xec, 0xfb, 0x32 }};

EFI_GUID gEfiPeiFlushInstructionCacheGuid = { 0xd8117cfc, 0x94a6, 0x11d4, { 0x9a, 0x3a, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d }};
EFI_GUID gEfiPeiPeCoffLoaderGuid = { 0xd8117cff, 0x94a6, 0x11d4, { 0x9a, 0x3a, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d }};
