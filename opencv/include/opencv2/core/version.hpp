/*M///////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                        Intel License Agreement
//                For Open Source Computer Vision Library
//
// Copyright( C) 2000-2015, Intel Corporation, all rights reserved.
// Copyright (C) 2011-2013, NVIDIA Corporation, all rights reserved.
// Copyright (C) 2013, OpenCV Foundation, all rights reserved.
// Copyright (C) 2015, Itseez Inc., all rights reserved.
// Third party copyrights are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the"
% "%T" (24-hour clock time in format HH:MM:SS)

% Define representation of ante meridiem and post meridiem strings -
am_pm       "";""
% The "" mean 'default to "AM" and "PM".

% Define time representation in 12-hour format with "am_pm", to be referenced by the "%r"
t_fmt_ampm  ""
% The "" means that this format is not supported.

% Date representation not described in ISO/IEC 14652. Comes out as -
% "%a %b %e %H:%M:%S %Z %Y" which is default "date" command output
date_fmt "<U0025><U0061><U0020><U0025><U0062><U0020><U0025><U0065>/
<U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U005A><U0020><U0025><U0059>"
%
% %a - abbreviated weekday name,
% %b - abreviated month name,
% %e - day of month as a decimal number with leading space (1 to 31),
% %H - hour (24-hour clock) as a decimal number (00 to 23),
% %M - minute as a decimal number (00 to 59),
% %S - seconds as a decimal number (00 to 59),
% %Z - time-zone name,
% %Y - year with century as a decimal number,e.g. 2001.

%  FIXME: found in CLDR
first_weekday 1
END LC_TIME

LC_MESSAGES
% FIXME: Check both of these
% The affirmative response - ee
% "^[yYeE].*"
yesexpr     "<U005E><U005B><U0079><U0059><U0065><U0045><U005D>"

% The negative response - aowa
% "^[nNaA].*"
noexpr      "<U005E><U005B><U006E><U004E><U0061><U0041><U005D>"
END LC_MESSAGES

LC_PAPER
copy "en_ZA"
END LC_PAPER

LC_TELEPHONE
copy "en_ZA"
END LC_TELEPHONE

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_NAME
% Format for addressing a person.
name_fmt    "<U0025><U0064><U0025><U0074><U0025><U0067><U0025><U0074>/
<U0025><U006D><U0025><U0074><U0025><U0066>"
% "%d%t%g%t%m%t%f"
% "Salutation",
% "Empty string, or <Space>",
% "First given name",
% "Empty string, or <Space>",
% "Middle names",
% "Empty string, or <Space>",
% "Clan names"

% FIXME - define all the following name_*
% General salutation for any sex
% name_gen    ""

% Salutation for unmarried females - ""
% name_miss   ""

% Salutation for males - ""
% name_mr     ""

% Salutation for married females - ""
% name_mrs    ""

% Salutatio