/*
* This file is part of the Head Tracker distribution (https://github.com/dlktdr/headtracker)
* Copyright (c) 2022 Cliff Blackburn
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, version 3.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

/**********************************************
 *
 *  !!! THIS FILE IS AUTOMATICALLY GENERATED, DO NOT EDIT DIRECTLY !!!
 *
 *  Modify /utils/settings.csv and execute buildsettings.py to generate this source file
 *
 ***********************************************/

/* This file contains the settings which are be adjustable via Bluetooth Web App
 */

#include "blechars.h"
#include "trackersettings.h"
#include "log.h"

uint16_t bt_rll_min;
uint16_t bt_rll_max;
uint16_t bt_rll_cnt;
uint16_t bt_rll_gain;
uint16_t bt_tlt_min;
uint16_t bt_tlt_max;
uint16_t bt_tlt_cnt;
uint16_t bt_tlt_gain;
uint16_t bt_pan_min;
uint16_t bt_pan_max;
uint16_t bt_pan_cnt;
uint16_t bt_pan_gain;
int8_t bt_tltch;
int8_t bt_rllch;
int8_t bt_panch;
int8_t bt_alertch;
int8_t bt_pwm0;
int8_t bt_pwm1;
int8_t bt_pwm2;
int8_t bt_pwm3;
int8_t bt_an0ch;
int8_t bt_an1ch;
int8_t bt_an2ch;
int8_t bt_an3ch;
int8_t bt_aux0ch;
int8_t bt_aux1ch;
int8_t bt_aux2ch;
int8_t bt_rstppm;

struct bt_uuid_16 bt_uuid_rll_min = BT_UUID_INIT_16(0xF000);
struct bt_uuid_16 bt_uuid_rll_max = BT_UUID_INIT_16(0xF001);
struct bt_uuid_16 bt_uuid_rll_cnt = BT_UUID_INIT_16(0xF002);
struct bt_uuid_16 bt_uuid_rll_gain = BT_UUID_INIT_16(0xF003);
struct bt_uuid_16 bt_uuid_tlt_min = BT_UUID_INIT_16(0xF004);
struct bt_uuid_16 bt_uuid_tlt_max = BT_UUID_INIT_16(0xF005);
struct bt_uuid_16 bt_uuid_tlt_cnt = BT_UUID_INIT_16(0xF006);
struct bt_uuid_16 bt_uuid_tlt_gain = BT_UUID_INIT_16(0xF007);
struct bt_uuid_16 bt_uuid_pan_min = BT_UUID_INIT_16(0xF008);
struct bt_uuid_16 bt_uuid_pan_max = BT_UUID_INIT_16(0xF009);
struct bt_uuid_16 bt_uuid_pan_cnt = BT_UUID_INIT_16(0xF010);
struct bt_uuid_16 bt_uuid_pan_gain = BT_UUID_INIT_16(0xF011);
struct bt_uuid_16 bt_uuid_tltch = BT_UUID_INIT_16(0xF100);
struct bt_uuid_16 bt_uuid_rllch = BT_UUID_INIT_16(0xF101);
struct bt_uuid_16 bt_uuid_panch = BT_UUID_INIT_16(0xF102);
struct bt_uuid_16 bt_uuid_alertch = BT_UUID_INIT_16(0xF103);
struct bt_uuid_16 bt_uuid_pwm0 = BT_UUID_INIT_16(0xF104);
struct bt_uuid_16 bt_uuid_pwm1 = BT_UUID_INIT_16(0xF105);
struct bt_uuid_16 bt_uuid_pwm2 = BT_UUID_INIT_16(0xF106);
struct bt_uuid_16 bt_uuid_pwm3 = BT_UUID_INIT_16(0xF107);
struct bt_uuid_16 bt_uuid_an0ch = BT_UUID_INIT_16(0xF108);
struct bt_uuid_16 bt_uuid_an1ch = BT_UUID_INIT_16(0xF109);
struct bt_uuid_16 bt_uuid_an2ch = BT_UUID_INIT_16(0xF10A);
struct bt_uuid_16 bt_uuid_an3ch = BT_UUID_INIT_16(0xF10B);
struct bt_uuid_16 bt_uuid_aux0ch = BT_UUID_INIT_16(0xF10C);
struct bt_uuid_16 bt_uuid_aux1ch = BT_UUID_INIT_16(0xF10D);
struct bt_uuid_16 bt_uuid_aux2ch = BT_UUID_INIT_16(0xF10E);
struct bt_uuid_16 bt_uuid_rstppm = BT_UUID_INIT_16(0xF10F);

ssize_t btwr_rll_min(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Rll_Min (0xF000)");
    trkset.setRll_Min(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_rll_min(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Rll_Min (0xF000)");
  bt_rll_min = trkset.getRll_Min();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_rll_max(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Rll_Max (0xF001)");
    trkset.setRll_Max(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_rll_max(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Rll_Max (0xF001)");
  bt_rll_max = trkset.getRll_Max();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_rll_cnt(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Rll_Cnt (0xF002)");
    trkset.setRll_Cnt(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_rll_cnt(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Rll_Cnt (0xF002)");
  bt_rll_cnt = trkset.getRll_Cnt();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_rll_gain(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Rll_Gain (0xF003)");
    trkset.setRll_Gain(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_rll_gain(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Rll_Gain (0xF003)");
  bt_rll_gain = trkset.getRll_Gain();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_tlt_min(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Tlt_Min (0xF004)");
    trkset.setTlt_Min(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_tlt_min(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Tlt_Min (0xF004)");
  bt_tlt_min = trkset.getTlt_Min();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_tlt_max(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Tlt_Max (0xF005)");
    trkset.setTlt_Max(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_tlt_max(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Tlt_Max (0xF005)");
  bt_tlt_max = trkset.getTlt_Max();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_tlt_cnt(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Tlt_Cnt (0xF006)");
    trkset.setTlt_Cnt(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_tlt_cnt(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Tlt_Cnt (0xF006)");
  bt_tlt_cnt = trkset.getTlt_Cnt();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_tlt_gain(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Tlt_Gain (0xF007)");
    trkset.setTlt_Gain(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_tlt_gain(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Tlt_Gain (0xF007)");
  bt_tlt_gain = trkset.getTlt_Gain();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_pan_min(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Pan_Min (0xF008)");
    trkset.setPan_Min(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_pan_min(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Pan_Min (0xF008)");
  bt_pan_min = trkset.getPan_Min();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_pan_max(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Pan_Max (0xF009)");
    trkset.setPan_Max(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_pan_max(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Pan_Max (0xF009)");
  bt_pan_max = trkset.getPan_Max();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_pan_cnt(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Pan_Cnt (0xF010)");
    trkset.setPan_Cnt(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_pan_cnt(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Pan_Cnt (0xF010)");
  bt_pan_cnt = trkset.getPan_Cnt();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_pan_gain(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(uint16_t)) {
    LOGD("BT_Wr Pan_Gain (0xF011)");
    trkset.setPan_Gain(*(uint16_t*)buf);
  }
  return len;
}
ssize_t btrd_pan_gain(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Pan_Gain (0xF011)");
  bt_pan_gain = trkset.getPan_Gain();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(uint16_t));
}

ssize_t btwr_tltch(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr TltCh (0xF100)");
    trkset.setTltCh(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_tltch(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd TltCh (0xF100)");
  bt_tltch = trkset.getTltCh();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_rllch(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr RllCh (0xF101)");
    trkset.setRllCh(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_rllch(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd RllCh (0xF101)");
  bt_rllch = trkset.getRllCh();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_panch(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr PanCh (0xF102)");
    trkset.setPanCh(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_panch(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd PanCh (0xF102)");
  bt_panch = trkset.getPanCh();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_alertch(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr AlertCh (0xF103)");
    trkset.setAlertCh(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_alertch(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd AlertCh (0xF103)");
  bt_alertch = trkset.getAlertCh();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_pwm0(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr Pwm0 (0xF104)");
    trkset.setPwm0(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_pwm0(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Pwm0 (0xF104)");
  bt_pwm0 = trkset.getPwm0();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_pwm1(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr Pwm1 (0xF105)");
    trkset.setPwm1(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_pwm1(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Pwm1 (0xF105)");
  bt_pwm1 = trkset.getPwm1();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_pwm2(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr Pwm2 (0xF106)");
    trkset.setPwm2(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_pwm2(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Pwm2 (0xF106)");
  bt_pwm2 = trkset.getPwm2();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_pwm3(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr Pwm3 (0xF107)");
    trkset.setPwm3(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_pwm3(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Pwm3 (0xF107)");
  bt_pwm3 = trkset.getPwm3();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_an0ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr An0Ch (0xF108)");
    trkset.setAn0Ch(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_an0ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd An0Ch (0xF108)");
  bt_an0ch = trkset.getAn0Ch();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_an1ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr An1Ch (0xF109)");
    trkset.setAn1Ch(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_an1ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd An1Ch (0xF109)");
  bt_an1ch = trkset.getAn1Ch();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_an2ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr An2Ch (0xF10A)");
    trkset.setAn2Ch(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_an2ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd An2Ch (0xF10A)");
  bt_an2ch = trkset.getAn2Ch();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_an3ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr An3Ch (0xF10B)");
    trkset.setAn3Ch(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_an3ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd An3Ch (0xF10B)");
  bt_an3ch = trkset.getAn3Ch();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_aux0ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr Aux0Ch (0xF10C)");
    trkset.setAux0Ch(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_aux0ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Aux0Ch (0xF10C)");
  bt_aux0ch = trkset.getAux0Ch();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_aux1ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr Aux1Ch (0xF10D)");
    trkset.setAux1Ch(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_aux1ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Aux1Ch (0xF10D)");
  bt_aux1ch = trkset.getAux1Ch();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_aux2ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr Aux2Ch (0xF10E)");
    trkset.setAux2Ch(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_aux2ch(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd Aux2Ch (0xF10E)");
  bt_aux2ch = trkset.getAux2Ch();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

ssize_t btwr_rstppm(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint16_t len, uint16_t offset, uint8_t flags)
{
  if(len == sizeof(int8_t)) {
    LOGD("BT_Wr RstPpm (0xF10F)");
    trkset.setRstPpm(*(int8_t*)buf);
  }
  return len;
}
ssize_t btrd_rstppm(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
{
  char *value = (char *)attr->user_data;
  LOGD("BT_Rd RstPpm (0xF10F)");
  bt_rstppm = trkset.getRstPpm();
  return bt_gatt_attr_read(conn, attr, buf, len, offset, value, sizeof(int8_t));
}

