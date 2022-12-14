/* Copyright (c) 2017 - 2022 LiteSpeed Technologies Inc.  See LICENSE. */
/* Copyright (c) 2015 The Chromium Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE.chrome file.
 */

/* Updated for C style, David Shue */
/*
 * Replace "kDERCert"  to "der_cert3_"
 * 
 */
#if 1 // hezhiwen
#include <stdint.h>
#endif

#include "common_cert_set_3a.inc"
#include "common_cert_set_3b.inc"

#define common_certs3_num 52
static const unsigned char* const common_certs3[common_certs3_num] = {
  der_cert3_0,
  der_cert3_1,
  der_cert3_2,
  der_cert3_3,
  der_cert3_4,
  der_cert3_5,
  der_cert3_6,
  der_cert3_7,
  der_cert3_8,
  der_cert3_9,
  der_cert3_10,
  der_cert3_11,
  der_cert3_12,
  der_cert3_13,
  der_cert3_14,
  der_cert3_15,
  der_cert3_16,
  der_cert3_17,
  der_cert3_18,
  der_cert3_19,
  der_cert3_20,
  der_cert3_21,
  der_cert3_22,
  der_cert3_23,
  der_cert3_24,
  der_cert3_25,
  der_cert3_26,
  der_cert3_27,
  der_cert3_28,
  der_cert3_29,
  der_cert3_30,
  der_cert3_31,
  der_cert3_32,
  der_cert3_33,
  der_cert3_34,
  der_cert3_35,
  der_cert3_36,
  der_cert3_37,
  der_cert3_38,
  der_cert3_39,
  der_cert3_40,
  der_cert3_41,
  der_cert3_42,
  der_cert3_43,
  der_cert3_44,
  der_cert3_45,
  der_cert3_46,
  der_cert3_47,
  der_cert3_48,
  der_cert3_49,
  der_cert3_50,
  der_cert3_51,
};

static const size_t common_certs3_lens[common_certs3_num] = {
  897,
  911,
  1012,
  1049,
  1065,
  1096,
  1097,
  1101,
  1105,
  1105,
  1107,
  1117,
  1127,
  1133,
  1136,
  1138,
  1139,
  1145,
  1149,
  1153,
  1167,
  1172,
  1174,
  1174,
  1176,
  1188,
  1194,
  1196,
  1203,
  1205,
  1206,
  1208,
  1209,
  1210,
  1222,
  1227,
  1236,
  1236,
  1238,
  1283,
  1284,
  1287,
  1298,
  1315,
  1327,
  1340,
  1357,
  1418,
  1447,
  1509,
  1513,
  1632,
};

#define common_certs3_hash UINT64_C(0x918215a28680ed7e)
