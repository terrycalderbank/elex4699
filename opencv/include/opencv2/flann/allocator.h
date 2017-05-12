comment_char    %
escape_char     /


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% Tigre language locale for Eritrea.
%
% Charset: UTF-8
%
% Tigre terms are provided by Mussie Bekit with coordination by the
% Shimagale Team <http://www.shimagle.com/>.  Prepared and contributed
% to glibc by Daniel Yacob <locales@geez.org>
%
% build with: localedef -f UTF-8 -i tig_ER tig_ER
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


LC_IDENTIFICATION
title      "Tigre language locale for Eritrea"
source     "Ge'ez Frontier Foundation"
address    "7802 Solomon Seal Dr., Springfield, VA 22152, USA"
contact    ""
email      "locales@geez.org"
tel        ""
fax        ""
language   "tig"
territory  "ER"
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
category  "i18n:2000";LC_ADDRESS
category  "i18n:2000";LC_MESSAGES
category  "i18n:2000";LC_NAME
category  "i18n:2000";LC_TIME
%
END LC_IDENTIFICATION


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%  Tigre Specific Data:
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

LC_COLLATE
copy "ti_ER"
END LC_COLLATE

LC_CTYPE
copy "ti_ER"
END LC_CTYPE


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%  Eritrea Specific Data:
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_MONETARY
copy "ti_ER"
END LC_MONETARY

LC_NUMERIC
copy "ti_ER"
END LC_NUMERIC

LC_PAPER
copy "ti_ER"
END LC_PAPER

LC_TELEPHONE
copy "ti_ER"
END LC_TELEPHONE


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%  Tigre Specific Data:
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

LC_MESSAGES
copy "ti_ER"
END LC_MESSAGES

LC_NAME
copy "ti_ER"
END LC_NAME


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%  Tigre/ER Specific Data:
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

LC_ADDRESS
%
% This is the ISO_IEC TR14652 Locale definition for the LC_ADDRESS category.
%
postal_fmt    "<U0025><U007A><U0025><U0063><U0025><U0054><U0025><U0073>/
<U0025><U0062><U0025><U0065><U0025><U0072>"
country_name  "<U12A4><U122D><U1275><U122B>"
country_post  "<U0045><U0052><U0049>"
country_ab2   "<U0045><U0052>"
country_ab3   "<U0045><U0052><U0049>"
country_num   232
% ER
country_car  "<U0045><U0052>"
% country_isbn  unknown, Need ISO 2108
lang_name     "<U1275><U130D><U1228>"
lang_ab       ""
lang_term     "<U0074><U0069><U0067>"
lang_lib      "<U0074><U0069><U0067>"
%
END LC_ADDRESS


LC_TIME
%
% Abbreviated weekday names (%a)
%
abday    "<U1230><U002F><U12D3>";/
         "<U1230><U1296><U0020>";/
         "<U1273><U120B><U1238>";/
         "<U12A3><U1228><U122D>";/
         "<U12A8><U121A><U123D>";/
         "<U1305><U121D><U12D3>";/
         "<U1230><U002F><U1295>"
%
% Full weekday names (%A)
%
day      "<U1230><U1295><U1260><U1275> <U12D3><U1263><U12ED>";/
         "<U1230><U1296>";/
         "<U1273><U120B><U1238><U1296>";/
         "<U12A3><U1228><U122D><U1263><U12D3>";/
         "<U12A8><U121A><U123D>";/
         "<U1305><U121D><U12D3><U1275>";/
         "<U1230><U1295><U1260><U1275> <U1295><U12A2><U123D>"
%
% Abbreviated month names (%b)
%
abmon    "<U1325><U122A><U0020>";/
         "<U1208><U12AB><U1272>";/
         "<U1218><U130B><U1262>";/
         "<U121A><U12EB><U12DD>";/
         "<U130D><U1295><U1266>";/
         "<U1230><U1290><U0020>";/
         "<U1213><U121D><U1208>";/
         "<U1290><U1213><U1230>";/
         "<U1218><U1235><U12A8>";/
         "<U1325><U1245><U121D>";/
         "<U1215><U12F3><U122D>";/
         "<U1273><U1215><U1233>"
%
% Full month names (%B)
%
mon      "<U1325><U122A>";/
         "<U1208><U12AB><U1272><U1275>";/
         "<U1218><U130B><U1262><U1275>";/
         "<U121A><U12EB><U12DD><U12EB>";/
         "<U130D><U1295><U1266><U1275>";/
         "<U1230><U1290>";/
         "<U1213><U121D><U1208>";/
         "<U1290><U1213><U1230>";/
         "<U1218><U1235><U12A8><U1228><U121D>";/
         "<U1325><U1245><U121D><U1272>";/
         "<U1215><U12F3><U122D>";/
         "<U1273><U1215><U1233><U1235>"
%
%
% Equivalent of AM PM
%
am_pm    "<U1240><U12F0><U121D><U0020><U1230><U122D><U0020><U121D><U12D5><U120D>";/
         "<U1213><U1246><U0020><U1230><U122D><U0020><U121D><U12D5><U120D>"
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
%	"%A፡ %B %e ዮም %Y %r %Z
%
d_t_fmt    "<U0025><U0041><U1361><U0020><U0025><U0042><U0020><U0025><U0065>/
<U0020><U12EE><U121D>/
<U0020><U0025><U0059><U0020><U0025><U0072><U0020><U0025><U005A>"
%
% Appropriate date representation (date(1))
%	"%A፡ %B %e ዮም %r %Z %Y ዓ/ም
%
date_fmt    "<U0025><U0041><U1361><U0020><U0025><U0042><U0020><U0025><U0065>/
<U0020><U12EE><U121D>/
<U0020><U0025><U0072><U0020><U0025><U005A><U0020><U0025><U0059>/
<U0020><U12D3><U002F><U121D>"
%
%  FIXME: found in CLDR
first_weekday 7
END LC_TIME
%
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          