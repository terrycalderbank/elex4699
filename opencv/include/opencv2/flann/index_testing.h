U0061><U0064><U0061>";/
     "<U0057><U0075><U006B><U0075><U0064><U0061>";/
     "<U0059><U0061><U0077><U0064><U0061>";/
     "<U0046><U0069><U0064><U0061>";/
     "<U004D><U0065><U006D><U0065><U006E><U0065><U0064><U0061>"
% Kwe, Dwo, Ben, Wuk, Yaw, Fia, Mem
abday         "<U004B><U0077><U0065>";/
       "<U0044><U0077><U006F>";/
       "<U0042><U0065><U006E>";/
       "<U0057><U0075><U006B>";/
       "<U0059><U0061><U0077>";/
       "<U0046><U0069><U0061>";/
       "<U004D><U0065><U006D>"
% %a %d %b %Y %T %Z
d_t_fmt       "<U0025><U0061><U0020><U0025><U0064><U0020><U0025><U0062><U0020><U0025><U0059><U0020><U0025><U0054><U0020><U0025><U005A>"
% %Y/%m/%d
d_fmt         "<U0025><U0059><U002F><U0025><U006D><U002F><U0025><U0064>"
% %r
t_fmt   "<U0025><U0072>"
% AM/PM time representation: %I:%M:%S %p
t_fmt_ampm "<U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053><U0020><U0025><U0070>"
% Strings for AM/PM: AN/EW
am_pm  "<U0041><U004E>";"<U0045><U0057>"
week    7;19971130;7
first_weekday 1
first_workday 2
END LC_TIME

LC_NUMERIC
% .
decimal_point "<U002E>"
% ,
thousands_sep "<U002C>"
grouping      3
END LC_NUMERIC

LC_MONETARY
% GHS
int_curr_symbol		  "<U0047><U0048><U0053><U0020>"
% GH₵
currency_symbol           "<U0047><U0048><U20B5>"
% .
mon_decimal_point         "<U002E>"
% ,
mon_thousands_sep         "<U002C>"
mon_grouping              3
positive_sign             ""
% -
negative_sign             "<U002D>"
int_frac_digits           2
frac_digits               2
p_cs_precedes             0
p_sep_by_space            1
n_cs_precedes             0
n_sep_by_space            1
p_sign_posn               1
n_sign_posn               1
END LC_MONETARY

LC_PAPER
% A4
height   297
width    210
END LC_PAPER

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_MESSAGES
% ^[yY].*
yesexpr "<U005E><U005B><U0079><U0059><U005D><U002E><U002A>"
% ^[dDnN].*
noexpr  "<U005E><U005B><U0064><U0044><U006E><U004E><U005D><U002E><U002A>"
% Yiw
yesstr  "<U0059><U0069><U0077>"
% Daabi
nostr   "<U0044><U0061><U0061><U0062><U0069>"
END LC_MESSAGES

LC_NAME
name_fmt    "<U0025><U0064><U0025><U0074><U0025><U0067><U0025><U0074>/
<U0025><U006D><U0025><U0074><U0025><U0066>"
END LC_NAME

LC_ADDRESS
postal_fmt    "<U0025><U0061><U0025><U004E><U0025><U0066><U0025><U004E>/
<U0025><U0064><U0025><U004E><U0025><U0062><U0025><U004E><U0025><U0068>/
<U0020><U0025><U0073><U0020><U0025><U0065><U0020><U0025><U0072><U0025>/
<U004E><U0025><U0054><U002C><U0020><U0025><U0053><U0020><U0025><U007A><U0025>/
<U004E><U0025><U0063><U0025><U004E>"
% Gaana
country_name "<U0047><U0061><U0061><U006E><U0061>"
% GH
country_post "<U0047><U0048>"
% GH
country_ab2  "<U0047><U0048>"
% GHA
country_ab3  "<U0047><U0048><U0041>"
country_num  288
country_isbn 9964
% Akan
lang_name    "<U0041><U006B><U0061><U006E>"
% ak
lang_ab      "<U0061><U006B>"
% aka
lang_term    "<U0061><U006B><U0061>"
END LC_ADDRESS

LC_TELEPHONE
% +%c %a %l
tel_int_fmt "<U002B><U0025><U0063><U0020><U0025><U0061><U0020><U0025><U006C>"
% %a %l
tel_dom_fmt "<U0025><U0061><U0020><U0025><U006C>"
% 00
int_select  "<U0030><U0030>"
% 233
int_prefix  "<U0032><U0033><U0033>"
END LC_TELEPHONE
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   comment_char    %
escape_char     /


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% Somali language locale for Kenya.
%
% Charset: ISO-8859-1
%
% Somali terms provided by Mohamed Diriye Abdullahi <diriyeam@magellan.umontreal.ca>
% Department of Linguistics and Translation, Universit� de Montr�al, Montreal.
% Prepared and contributed to glibc by Daniel Yacob <locales@geez.org>.
%
% This locale data has been developed under the Yeha Project:
%      http://yeha.sourceforge.net/
%
% build with: localedef -f ISO-8859-1 -i so_KE so_KE
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


LC_IDENTIFICATION
%
title      "Somali language locale for Kenya"
source     "Ge'ez Frontier Foundation"
address    "7802 Solomon Seal Dr., Springfield, VA 22152, USA"
contact    ""
email      "locales@geez.org"
tel        ""
fax        ""
language   "so"
territory  "KE"
revision   "0.20"
date       "2003-07-05"
%
category  "i18n:2000";LC_IDENTIFICATION
category  "i18n:2000";LC_COLLATE
category  "i18n:2000";LC_CTYPE
category  "i18n:2000";LC_MEASUREMENT
category  "i18n:2000";LC_MONETARY
category  "posix:1993";LC_NUMERIC
category  "i18n:2000";LC_PAPER
category  "i18n:2000";LC_TELEPHONE
category  "i18n:2000";LC_NAME
category  "i18n:2000";LC_ADDRESS
category  "i18n:2000";LC_MESSAGES
category  "i18n:2000";LC_TIME
END LC_IDENTIFICATION


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%  Latin Character Set Specifc Data:
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

LC_COLLATE
copy "so_SO"
END LC_COLLATE

LC_CTYPE
copy "so_SO"
END LC_CTYPE


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%  Kenya Specific and Shared Data:
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_MONETARY
copy "om_KE"
END LC_MONETARY

LC_NUMERIC
copy "om_KE"
END LC_NUMERIC

LC_PAPER
copy "om_KE"
END LC_PAPER

LC_TELEPHONE
copy "om_KE"
END LC_TELEPHONE


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%  Somali Specific Data:
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

LC_NAME
copy "so_SO"
END LC_NAME


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%  Somali/ET Specific Data:
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

LC_ADDRESS
%
% This is the ISO_IEC TR14652 Locale definition for the LC_ADDRESS category.
%
postal_fmt    "<U0025><U007A><U0025><U0063><U0025><U0054><U0025><U0073>/
<U0025><U0062><U0025><U0065><U0025><U0072>"
country_name  "<U004B><U0069><U0069><U006E><U0069><U0079><U0061>"
country_post  "<U004B><U0045><U004E>"
country_ab2   "<U004B><U0045>"
country_ab3   "<U004B><U0045><U004E>"
country_num   404
% EAK
country_car    "<U0045><U0041><U004B>"
% country_isbn  unknown, Need ISO 2108
lang_name     "<U0053><U006F><U006F><U006D><U0061><U0061><U006C><U0069>"
lang_ab       "<U0073><U006F>"
lang_term     "<U0073><U006F><U006D>"
lang_lib      "<U0073><U006F><U006D>"
%
END LC_ADDRESS


LC_MESSAGES
copy "so_SO"
END LC_MESSAGES


LC_TIME
%
% Abbreviated weekday names (%a)
%
abday    "<U0041><U0078><U0061>";/
         "<U0049><U0073><U006E>";/
         "<U0053><U0061><U006C>";/
         "<U0041><U0072><U0062>";/
         "<U004B><U0068><U0061>";/
         "<U004A><U0069><U006D>";/
         "<U0053><U0061><U0062>"
%
% Full weekday names (%A)
%
day      "<U0041><U0078><U0061><U0064>";/
         "<U0049><U0073><U006E><U0069><U0069><U006E>";/
         "<U0053><U0061><U006C><U0061><U0061><U0073><U006F>";/
         "<U0041><U0072><U0062><U0061><U0063><U006F>";/
         "<U004B><U0068><U0061><U006D><U0069><U0069><U0073>";/
         "<U004A><U0069><U006D><U0063><U006F>";/
         "<U0053><U0061><U0062><U0074><U0069>"
%
% Abbreviated month names (%b)
%
abmon    "<U004B><U006F><U0062>";/
         "<U004C><U0061><U0062>";/
         "<U0053><U0061><U0064>";/
         "<U0041><U0066><U0072>";/
         "<U0053><U0068><U0061>";/
         "<U004C><U0069><U0078>";/
         "<U0054><U006F><U0064>";/
         "<U0053><U0069><U0064>";/
         "<U0053><U0061><U0067>";/
         "<U0054><U006F><U0062>";/
         "<U004B><U0049><U0054>";/
         "<U004C><U0049><U0054>"
%
% Full month names (%B)
%
mon      "<U0042><U0069><U0073><U0068><U0061> <U004B><U006F><U006F><U0062><U0061><U0061><U0064>";/
         "<U0042><U0069><U0073><U0068><U0061> <U004C><U0061><U0062><U0061><U0061><U0064>";/
         "<U0042><U0069><U0073><U0068><U0061> <U0053><U0061><U0064><U0064><U0065><U0078><U0061><U0061><U0064>";/
         "<U0042><U0069><U0073><U0068><U0061> <U0041><U0066><U0072><U0061><U0061><U0064>";/
         "<U0042><U0069><U0073><U0068><U0061> <U0053><U0068><U0061><U006E><U0061><U0061><U0064>";/
         "<U0042><U0069><U0073><U0068><U0061> <U004C><U0069><U0078><U0061><U0061><U0064>";/
         "<U0042><U0069><U0073><U0068><U0061> <U0054><U006F><U0064><U006F><U0062><U0061><U0061><U0064>";/
         "<U0042><U0069><U0073><U0068><U0061> <U0053><U0069><U0064><U0065><U0065><U0064><U0061><U0061><U0064>";/
         "<U0042><U0069><U0073><U0068><U0061> <U0053><U0061><U0067><U0061><U0061><U006C><U0061><U0061><U0064>";/
         "<U0042><U0069><U0073><U0068><U0061> <U0054><U006F><U0062><U006E><U0061><U0061><U0064>";/
         "<U0042><U0069><U0073><U0068><U0061> <U004B><U006F><U0077> <U0069><U0079><U006F> <U0054><U006F><U0062><U006E><U0061><U0061><U0064>";/
         "<U0042><U0069><U0073><U0068><U0061> <U004C><U0061><U0062><U0061> <U0069><U0079><U006F> <U0054><U006F><U0062><U006E><U0061><U0061><U0064>"
%
% Equivalent of AM PM
%
am_pm    "<U0073><U0075><U0062><U0061><U0078><U006E><U0069><U006D><U006F>";/
         "<U0067><U0061><U006C><U0061><U0062><U006E><U0069><U006D><U006F>"
%
% Appropriate date representation (%x)
%	"%d/%m/%Y"
%
d_fmt   "<U0025><U0064><U002F><U0025><U006D><U002F><U0025><U0059>"
%
% Appropriate time representation (%X)
%	"%l:%M:%S"
%
t_fmt "<U0025><U006C><U003A><U0025><U004D><U003A><U0025><U0053>"
%
% Appropriate AM/PM time representation (%r)
%	"%X %p"
%
t_fmt_ampm "<U0025><U0058><U0020><U0025><U0070>"
%
% Appropriate date and time representation (%c)
%	"%A, %B %e, %Y %r %Z
%
d_t_fmt    "<U0025><U0041><U002C><U0020><U0025><U0042><U0020><U0025><U0065><U002C>/
<U0020><U0025><U0059><U0020><U0025><U0072><U0020><U0025><U005A>"
%
% Appropriate date representation (date(1))
%	"%A, %b %e, %r %Z %Y"
%
date_fmt    "<U0025><U0041><U002C><U0020><U0025><U0042><U0020><U0025><U0065><U002C>/
<U0020><U0025><U0072><U0020><U0025><U005A><U0020><U0025><U0059>"
%
%  FIXME: found in CLDR
first_weekday 7
END LC_TIME
%
                                                                                                                                                                                                                                                                      