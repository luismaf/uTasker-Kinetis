/**********************************************************************
    Mark Butcher    Bsc (Hons) MPhil MIET

    M.J.Butcher Consulting
    Birchstrasse 20f,    CH-5406, R�tihof
    Switzerland

    www.uTasker.com    Skype: M_J_Butcher

    ---------------------------------------------------------------------
    File:      widgets.h

    Project:   uTasker project
    ---------------------------------------------------------------------
    Copyright (C) M.J.Butcher Consulting 2004..2016
    *********************************************************************

    This file is not linked directly in the project but is included by the GLCD task file

*/

static const unsigned char uTaskerPic3[] = {
0x00,0x00,0xA0,0x00,0x50,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0xE0,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0xE0,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x18,0x60,0x02,0x20,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x06,0x00,0x03,0x62,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x0F,0x00,0x01,0xE0,0x00,0x01,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFA,0x00,0x03,0x80,0x09,0xF6,0x00,0x00,0x4F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x01,0x01,0xC0,0x04,0x33,0x86,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFA,0x87,0xC2,0xA0,0x00,0x1C,0x3F,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x87,0xE3,0xC0,0x00,0xFF,0xFF,0xE0,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xEF,0xF1,0x80,0x06,0xFF,0xC1,0xE0,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD7,0xFF,0xF8,0x40,0x01,0xFF,0x84,0xF0,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xCF,0xFF,0xD8,0x00,0x03,0xFF,0xE7,0xF0,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xCF,0xFF,0x8F,0xFF,0xFE,0x40,0x0F,0x9F,0xFF,0xF0,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xCF,0xFF,0x9F,0xFF,0xFF,0xC0,0x1C,0x4F,0xFF,0xF8,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0x9F,0xFF,0x9F,0xFF,0xFF,0xE0,0x18,0x47,0xF7,0xF8,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFE,0xFF,0x9F,0xFF,0x97,0xFF,0xFF,0xF4,0x02,0xE3,0xFF,0xF8,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0xBF,0x07,0xFF,0xFF,0xE0,0x23,0xC3,0xBF,0xF8,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0x3F,0x7F,0x07,0xFF,0xFF,0xE0,0x2F,0xE7,0xFF,0xF8,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFE,0x7E,0xFF,0x8F,0xFF,0xFF,0xE0,0x0F,0xE7,0x3F,0xFE,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFD,0xFF,0x9F,0xFF,0xFF,0xE0,0x0F,0xEB,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xF9,0xEF,0x9F,0xFF,0xFF,0xC0,0x0F,0xEF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFD,0xF9,0xD9,0x9F,0x0F,0xFF,0xE0,0x0F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xA0,0x3F,0xFF,0xFF,0xC0,0x0F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0x80,0x7F,0xFF,0xFF,0xC0,0x0F,0xFF,0xDD,0xFC,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xC7,0x10,0xDF,0xFF,0xFB,0xC8,0x07,0xF9,0xFB,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCF,0x30,0xDF,0xFF,0xF8,0xCC,0x03,0xEF,0xB7,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8E,0x3F,0xDF,0xFF,0xFF,0x5C,0x17,0xE3,0x9F,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xBF,0x3F,0x1F,0xFF,0xFF,0xEC,0x17,0xF0,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7E,0x3F,0x3F,0xFF,0xFF,0xF8,0x03,0xFB,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x33,0xBF,0xFF,0xFF,0xD8,0x03,0xFF,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF8,0x83,0xBF,0xFF,0xFF,0xB8,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x81,0xBE,0xFF,0xFF,0xA8,0x00,0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x3E,0xDF,0xFF,0x08,0x04,0x0F,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x1F,0x7B,0xFF,0x08,0x06,0x03,0xF8,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x1F,0x7A,0x7F,0x00,0x0F,0xD0,0xC0,0x00,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x1F,0xBF,0x9E,0x10,0x83,0xDE,0x00,0x00,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x08,0x40,0x0F,0xDF,0x7A,0x10,0x00,0x8F,0x00,0x00,0x30,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x19,0x83,0x0F,0xF8,0xFC,0x23,0x00,0x0E,0x00,0x00,0x0F,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x30,0x26,0x03,0xFF,0xF4,0x10,0x00,0x0C,0x00,0x00,0x07,0x87,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xF0,0x70,0x44,0x07,0xFF,0xF0,0x10,0x00,0x00,0x00,0x00,0x01,0x81,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,0x08,0x81,0xFF,0xE0,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x81,0x80,0x00,0x06,0xFF,0x00,0x00,0x0A,0x00,0x00,0x00,0x00,0x84,0x1F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x07,0x00,0x00,0x07,0x3E,0x02,0x03,0x06,0x00,0x00,0x00,0x00,0x07,0x4F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x0C,0x00,0x04,0x01,0xA0,0x00,0x02,0x17,0x80,0x00,0x00,0x00,0x00,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x18,0x01,0x42,0x00,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x00,0x0F,0xDF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFE,0x30,0x02,0xC0,0x10,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x1B,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x20,0x00,0x40,0x10,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x0B,0xCF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x8F,0xFF,0xFF,0xFF,
0xE8,0x7F,0xFC,0x00,0x00,0x08,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xDF,0xFF,0xFF,0xFF,0x80,0x7F,0xF8,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFB,0xFF,0xFF,0xFF,0x80,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x73,0xFF,0xFF,0xFF,
0x80,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0x00,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC3,0xFF,0xFF,0xFF,0x00,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE3,0xFF,0xFF,0xFF,
0x01,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC3,0xFF,0xBF,0xFF,0x01,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0xFF,0xFF,0xFF,0x01,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,
0x01,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0xFF,0xFF,0xFF,0x81,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0x81,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xBF,
0x01,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0xFF,0x7F,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC4,0x7F,0xFF,0xFF,
0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE0,0xFF,0xFF,0xBF,0x80,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x21,0xFF,0xFF,0xBF,};

static const unsigned char uTaskerPic1[] = {
0x00,0x00,0xA0,0x00,0x50,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x03,0xF8,0x0F,0xFF,0x01,0xFC,0x03,0x81,0xF8,0x07,0xF8,0x07,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x03,0xE0,0x07,0xFC,0x00,0x7C,0x03,0x81,0xF8,0x03,0xF8,0x06,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x7F,0xC0,0x01,0xF8,0x00,0x3C,0x03,0x01,0xF0,0x00,0xF8,0x04,0x3F,
0xFF,0xFF,0xFF,0xF0,0x0F,0x80,0x00,0x7F,0x80,0x00,0xF0,0x00,0x1C,0x03,0x03,0xE0,0x00,0x38,0x00,0x3F,0xFF,0xFF,0xFF,0xEA,0xAF,0x2A,0x80,0x7F,0x00,0x00,0xE0,0x00,0x0C,0x03,0x03,0xC0,0x00,0x38,0x00,0x3F,0xFF,0xFF,0xFF,0xE5,0x4F,0x55,0x00,0x7E,0x01,0x80,0x60,0x10,0x0C,0x02,0x03,0xC0,0x60,0x18,0x00,0x3F,
0xFF,0xFF,0xFF,0xCA,0x9E,0xAA,0x00,0x7E,0x01,0x80,0x60,0x38,0x0C,0x02,0x07,0x80,0x60,0x18,0x00,0x3F,0xFF,0xFF,0xFF,0xD5,0x5E,0x54,0x80,0x7E,0x01,0x80,0x60,0x38,0x0C,0x02,0x07,0x80,0x60,0x18,0x00,0x3F,0xFF,0xFF,0xFF,0xAA,0xBC,0xA9,0x80,0x7E,0x01,0x80,0x60,0x38,0x0C,0x00,0x07,0x80,0x60,0x18,0x00,0x3F,
0xFF,0xFF,0xFF,0x55,0x39,0x55,0x80,0x7E,0x01,0x80,0x60,0x18,0x0C,0x00,0x0F,0x00,0x60,0x18,0x00,0x3F,0xFF,0xFF,0xFF,0x2A,0x7A,0xAB,0x80,0x7E,0x01,0x80,0x60,0x0F,0xFC,0x00,0x0F,0x00,0x60,0x18,0x03,0xFF,0xFF,0xFF,0xFE,0x54,0xF5,0x57,0x80,0x7F,0xFF,0x00,0x60,0x07,0xFC,0x00,0x0F,0x00,0x00,0x18,0x07,0xFF,
0xFF,0xFF,0xFE,0xAA,0xF2,0xA7,0x80,0x7F,0xF8,0x00,0x70,0x01,0xFC,0x00,0x0F,0x00,0x00,0x18,0x07,0xFF,0xFF,0xFF,0xFD,0x55,0xE5,0x4F,0x80,0x7F,0xE0,0x00,0x78,0x00,0x7C,0x00,0x0F,0x00,0x00,0x18,0x07,0xFF,0xFF,0xFF,0xFA,0xAB,0xEA,0x9F,0x00,0x7F,0x80,0x00,0x7C,0x00,0x3C,0x00,0x0F,0x00,0x00,0x18,0x07,0xFF,
0xFF,0xFF,0xF9,0x53,0xD5,0x5E,0x00,0x7F,0x00,0x80,0x7E,0x00,0x1C,0x00,0x07,0x00,0x7F,0xF8,0x07,0xFF,0xFF,0xFF,0xF2,0xA7,0xAA,0xBE,0x80,0x7E,0x01,0x80,0x7F,0x80,0x0C,0x00,0x07,0x00,0x70,0x18,0x07,0xFF,0xFF,0xFF,0xF5,0x57,0x95,0x7D,0x00,0x7E,0x01,0x80,0x7F,0xE0,0x0C,0x02,0x07,0x00,0x70,0x18,0x07,0xFF,
0xFF,0xFF,0xEA,0xAF,0x2A,0x7A,0x80,0x7E,0x03,0x80,0x60,0x20,0x0C,0x02,0x07,0x00,0x70,0x18,0x07,0xFF,0xFF,0xFF,0xD5,0x5F,0x54,0xF5,0x00,0x7E,0x03,0x80,0x60,0x38,0x0C,0x02,0x03,0x00,0x70,0x18,0x07,0xFF,0xFF,0xFF,0xCA,0x9E,0xAA,0xF2,0x00,0x7E,0x03,0x80,0x60,0x38,0x0C,0x02,0x03,0x80,0x70,0x18,0x07,0xFF,
0xFF,0xFF,0x95,0x3D,0x55,0xE4,0x80,0x7E,0x03,0x80,0x60,0x38,0x0C,0x03,0x03,0x80,0x70,0x18,0x07,0xFF,0xFF,0xFF,0xAA,0xBA,0xA9,0xC9,0x80,0x7E,0x01,0x80,0x60,0x10,0x0C,0x03,0x03,0x80,0x60,0x38,0x07,0xFF,0xFF,0xFF,0x55,0x75,0x53,0x95,0x80,0x7E,0x00,0x00,0x60,0x00,0x1C,0x03,0x01,0xC0,0x00,0x38,0x07,0xFF,
0xFF,0xFE,0xAA,0x6A,0xAB,0x2B,0x80,0x7E,0x00,0x00,0x70,0x00,0x1C,0x03,0x01,0xC0,0x00,0x78,0x07,0xFF,0xFF,0xFE,0x55,0x14,0x54,0x57,0x80,0x7F,0x00,0x00,0x78,0x00,0x3C,0x03,0x01,0xC0,0x00,0xF8,0x07,0xFF,0xFF,0xFC,0xAA,0xA9,0xAA,0xAF,0x80,0x7F,0x80,0x80,0x7C,0x00,0x7C,0x03,0x81,0xE0,0x01,0xF8,0x07,0xFF,
0xFF,0xFD,0x50,0x57,0xD5,0x1F,0x80,0x7F,0xC3,0x80,0x7F,0x00,0xFC,0x03,0x81,0xF0,0x03,0xF8,0x07,0xFF,0xFF,0xFA,0xA6,0x0F,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xF2,0xAF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE5,0x4F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEA,0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xD5,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xAA,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x95,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x2A,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xAA,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFD,0x54,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xA9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0x51,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFA,0xAB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x53,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEA,0xA7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xE5,0x47,0xFF,0xFF,0xFF,0xFF,0x83,0xFF,0xBF,0xFF,0xBE,0xDF,0xFF,0xF5,0xFB,0xFF,0xB7,0xFF,0xFF,0xFF,0xCA,0xAF,0xFF,0xFF,0xFF,0xFF,0xBF,0xFF,0xBF,0xFF,0xBE,0xFF,0xFF,0xFD,0xFB,0xFF,0xB7,0xFF,0xFF,0xFF,0xD5,0x5F,0xFF,0xFF,0xFF,0xFF,0x7E,0xB7,0x4F,0x3D,0x75,0xB5,0xCB,0xE8,0xF4,0xF3,0x03,0x3A,0xFF,0xFF,
0xAA,0xBF,0xFF,0xFF,0xFF,0xFF,0x06,0x4B,0x36,0xDA,0x69,0xB2,0xD3,0xED,0xF3,0x6D,0xB6,0xD9,0xFF,0xFF,0x95,0x7F,0xFF,0xFF,0xFF,0xFF,0x7E,0xDB,0x74,0x17,0x5D,0xB6,0xBB,0xEB,0xF7,0x41,0x6C,0x1B,0xFF,0xFF,0xCA,0xFF,0xFF,0xFF,0xFF,0xFF,0x7E,0xDB,0x75,0xF7,0x5D,0xB6,0xBB,0xEB,0xF7,0x5F,0x6D,0xF7,0xFF,0xFF,
0xE1,0xFF,0xFF,0xFF,0xFF,0xFE,0xFD,0xB6,0x6D,0xB4,0xD3,0x6D,0xB7,0xDB,0xE6,0xDB,0x6D,0xB7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x05,0xB6,0x9E,0x7A,0xEB,0x6D,0xC7,0xD9,0xE9,0xE7,0x26,0x77,0x6D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x77,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,};

static const unsigned char uTaskerPic2[] = {
0x00,0x00,0xA0,0x00,0x50,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFC,0x00,0x00,0x00,0x00,0x03,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFC,0x00,0x00,0x00,0x00,0x03,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFC,0x00,0x00,0x00,0x00,0x03,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFC,0x00,0x00,0x00,0x00,0x03,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFC,0x00,0x00,0x00,0x00,0x03,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFC,0x07,0xF0,0x00,0xFE,0x03,0xFC,0x7E,0x07,0xF8,0x07,0xF8,0xC0,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFC,0x1F,0xF8,0x03,0xFF,0x83,0xFC,0x7E,0x07,0xFC,0x07,0xF9,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x80,0x3F,0xFE,0x07,0xFF,0xC3,0xFC,0xFE,0x0F,0xFF,0x07,0xFB,0xC0,
0x00,0x00,0x00,0x0F,0xF0,0x7F,0xFF,0x80,0x7F,0xFF,0x0F,0xFF,0xE3,0xFC,0xFC,0x1F,0xFF,0xC7,0xFF,0xC0,0x00,0x00,0x00,0x15,0x50,0xD5,0x7F,0x80,0xFF,0xFF,0x1F,0xFF,0xF3,0xFC,0xFC,0x3F,0xFF,0xC7,0xFF,0xC0,0x00,0x00,0x00,0x1A,0xB0,0xAA,0xFF,0x81,0xFE,0x7F,0x9F,0xEF,0xF3,0xFD,0xFC,0x3F,0x9F,0xE7,0xFF,0xC0,
0x00,0x00,0x00,0x35,0x61,0x55,0xFF,0x81,0xFE,0x7F,0x9F,0xC7,0xF3,0xFD,0xF8,0x7F,0x9F,0xE7,0xFF,0xC0,0x00,0x00,0x00,0x2A,0xA1,0xAB,0x7F,0x81,0xFE,0x7F,0x9F,0xC7,0xF3,0xFD,0xF8,0x7F,0x9F,0xE7,0xFF,0xC0,0x00,0x00,0x00,0x55,0x43,0x56,0x7F,0x81,0xFE,0x7F,0x9F,0xC7,0xF3,0xFF,0xF8,0x7F,0x9F,0xE7,0xFF,0xC0,
0x00,0x00,0x00,0xAA,0xC6,0xAA,0x7F,0x81,0xFE,0x7F,0x9F,0xE7,0xF3,0xFF,0xF0,0xFF,0x9F,0xE7,0xFF,0xC0,0x00,0x00,0x00,0xD5,0x85,0x54,0x7F,0x81,0xFE,0x7F,0x9F,0xF0,0x03,0xFF,0xF0,0xFF,0x9F,0xE7,0xFC,0x00,0x00,0x00,0x01,0xAB,0x0A,0xA8,0x7F,0x80,0x00,0xFF,0x9F,0xF8,0x03,0xFF,0xF0,0xFF,0xFF,0xE7,0xF8,0x00,
0x00,0x00,0x01,0x55,0x0D,0x58,0x7F,0x80,0x07,0xFF,0x8F,0xFE,0x03,0xFF,0xF0,0xFF,0xFF,0xE7,0xF8,0x00,0x00,0x00,0x02,0xAA,0x1A,0xB0,0x7F,0x80,0x1F,0xFF,0x87,0xFF,0x83,0xFF,0xF0,0xFF,0xFF,0xE7,0xF8,0x00,0x00,0x00,0x05,0x54,0x15,0x60,0xFF,0x80,0x7F,0xFF,0x83,0xFF,0xC3,0xFF,0xF0,0xFF,0xFF,0xE7,0xF8,0x00,
0x00,0x00,0x06,0xAC,0x2A,0xA1,0xFF,0x80,0xFF,0x7F,0x81,0xFF,0xE3,0xFF,0xF8,0xFF,0x80,0x07,0xF8,0x00,0x00,0x00,0x0D,0x58,0x55,0x41,0x7F,0x81,0xFE,0x7F,0x80,0x7F,0xF3,0xFF,0xF8,0xFF,0x8F,0xE7,0xF8,0x00,0x00,0x00,0x0A,0xA8,0x6A,0x82,0xFF,0x81,0xFE,0x7F,0x80,0x1F,0xF3,0xFD,0xF8,0xFF,0x8F,0xE7,0xF8,0x00,
0x00,0x00,0x15,0x50,0xD5,0x85,0x7F,0x81,0xFC,0x7F,0x9F,0xDF,0xF3,0xFD,0xF8,0xFF,0x8F,0xE7,0xF8,0x00,0x00,0x00,0x2A,0xA0,0xAB,0x0A,0xFF,0x81,0xFC,0x7F,0x9F,0xC7,0xF3,0xFD,0xFC,0xFF,0x8F,0xE7,0xF8,0x00,0x00,0x00,0x35,0x61,0x55,0x0D,0xFF,0x81,0xFC,0x7F,0x9F,0xC7,0xF3,0xFD,0xFC,0x7F,0x8F,0xE7,0xF8,0x00,
0x00,0x00,0x6A,0xC2,0xAA,0x1B,0x7F,0x81,0xFC,0x7F,0x9F,0xC7,0xF3,0xFC,0xFC,0x7F,0x8F,0xE7,0xF8,0x00,0x00,0x00,0x55,0x45,0x56,0x36,0x7F,0x81,0xFE,0x7F,0x9F,0xEF,0xF3,0xFC,0xFC,0x7F,0x9F,0xC7,0xF8,0x00,0x00,0x00,0xAA,0x8A,0xAC,0x6A,0x7F,0x81,0xFF,0xFF,0x9F,0xFF,0xE3,0xFC,0xFE,0x3F,0xFF,0xC7,0xF8,0x00,
0x00,0x01,0x55,0x95,0x54,0xD4,0x7F,0x81,0xFF,0xFF,0x8F,0xFF,0xE3,0xFC,0xFE,0x3F,0xFF,0x87,0xF8,0x00,0x00,0x01,0xAA,0xEB,0xAB,0xA8,0x7F,0x80,0xFF,0xFF,0x87,0xFF,0xC3,0xFC,0xFE,0x3F,0xFF,0x07,0xF8,0x00,0x00,0x03,0x55,0x56,0x55,0x50,0x7F,0x80,0x7F,0x7F,0x83,0xFF,0x83,0xFC,0x7E,0x1F,0xFE,0x07,0xF8,0x00,
0x00,0x02,0xAF,0xA8,0x2A,0xE0,0x7F,0x80,0x3C,0x7F,0x80,0xFF,0x03,0xFC,0x7E,0x0F,0xFC,0x07,0xF8,0x00,0x00,0x05,0x59,0xF0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0D,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1A,0xB0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x2A,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6A,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xD5,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xAA,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0xAB,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x56,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0xAE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x05,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0xAC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x58,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1A,0xB8,0x00,0x00,0x00,0x00,0x7C,0x00,0x40,0x00,0x41,0x20,0x00,0x0A,0x04,0x00,0x48,0x00,0x00,0x00,0x35,0x50,0x00,0x00,0x00,0x00,0x40,0x00,0x40,0x00,0x41,0x00,0x00,0x02,0x04,0x00,0x48,0x00,0x00,0x00,0x2A,0xA0,0x00,0x00,0x00,0x00,0x81,0x48,0xB0,0xC2,0x8A,0x4A,0x34,0x17,0x0B,0x0C,0xFC,0xC5,0x00,0x00,
0x55,0x40,0x00,0x00,0x00,0x00,0xF9,0xB4,0xC9,0x25,0x96,0x4D,0x2C,0x12,0x0C,0x92,0x49,0x26,0x00,0x00,0x6A,0x80,0x00,0x00,0x00,0x00,0x81,0x24,0x8B,0xE8,0xA2,0x49,0x44,0x14,0x08,0xBE,0x93,0xE4,0x00,0x00,0x35,0x00,0x00,0x00,0x00,0x00,0x81,0x24,0x8A,0x08,0xA2,0x49,0x44,0x14,0x08,0xA0,0x92,0x08,0x00,0x00,
0x1E,0x00,0x00,0x00,0x00,0x01,0x02,0x49,0x92,0x4B,0x2C,0x92,0x48,0x24,0x19,0x24,0x92,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFA,0x49,0x61,0x85,0x14,0x92,0x38,0x26,0x16,0x18,0xD9,0x88,0x92,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,};

