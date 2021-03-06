comment_char    %
escape_char     /
% Arabic language locale for Syrian Arab Republic.
% Contributed by Kentaroh Noji <knoji@jp.ibm.com> and
% Tetsuji Orita <orita@jp.ibm.com>.

LC_IDENTIFICATION
title      "Arabic language locale for Syrian Arab Republic"
source     "IBM Globalization Center of Competency, Yamato Software Laboratory"
address    "1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "Arabic"
territory  "Syrian Arab Republic"
revision   "1.0"
date       "2000-07-20"
%
category  "ar_SY:2000";LC_IDENTIFICATION
category  "ar_SY:2000";LC_CTYPE
category  "ar_SY:2000";LC_COLLATE
category  "ar_SY:2000";LC_TIME
category  "ar_SY:2000";LC_NUMERIC
category  "ar_SY:2000";LC_MONETARY
category  "ar_SY:2000";LC_MESSAGES
category  "ar_SY:2000";LC_PAPER
category  "ar_SY:2000";LC_NAME
category  "ar_SY:2000";LC_ADDRESS
category  "ar_SY:2000";LC_TELEPHONE
category  "ar_SY:2000";LC_MEASUREMENT

END LC_IDENTIFICATION

LC_CTYPE
copy "ar_EG"
END LC_CTYPE

LC_COLLATE

% Copy the template from ISO/IEC 14651
copy "iso14651_t1"

END LC_COLLATE

LC_MONETARY
% This is the POSIX Locale definition the LC_MONETARY category.
% These are generated based on XML base Locale definition file
% for IBM Class for Unicode/Java
%
int_curr_symbol       "<U0053><U0059><U0050><U0020>"
currency_symbol       "<U0644><U002E><U0633><U002E>"
mon_decimal_point     "<U002E>"
mon_thousands_sep     "<U002C>"
mon_grouping          3
positive_sign         ""
negative_sign         "<U002D>"
int_frac_digits       3
frac_digits           3
p_cs_precedes         1
p_sep_by_space        1
n_cs_precedes         1
n_sep_by_space        1
p_sign_posn           1
n_sign_posn           2
%
END LC_MONETARY


LC_NUMERIC
% This is the POSIX Locale definition for the LC_NUMERIC  category.
%
decimal_point          "<U002E>"
thousands_sep          "<U002C>"
grouping               3
%
END LC_NUMERIC


LC_TIME
% This is the POSIX Locale definition for the LC_TIME category.
% These are generated based on XML base Locale definition file
% for IBM Class for Unicode/Java
%
% Abbreviated weekday names (%a)
abday       "<U0627><U0644><U0623><U062D><U062F>";/
            "<U0627><U0644><U0627><U062B><U0646><U064A><U0646>";/
            "<U0627><U0644><U062B><U0644><U0627><U062B><U0627><U0621>";/
            "<U0627><U0644><U0623><U0631><U0628><U0639><U0627><U0621>";/
            "<U0627><U0644><U062E><U0645><U064A><U0633>";/
            "<U0627><U0644><U062C><U0645><U0639><U0629>";/
            "<U0627><U0644><U0633><U0628><U062A>"
%
% Full weekday names (%A)
day         "<U0627><U0644><U0623><U062D><U062F>";/
            "<U0627><U0644><U0627><U062B><U0646><U064A><U0646>";/
            "<U0627><U0644><U062B><U0644><U0627><U062B><U0627><U0621>";/
            "<U0627><U0644><U0623><U0631><U0628><U0639><U0627><U0621>";/
            "<U0627><U0644><U062E><U0645><U064A><U0633>";/
            "<U0627><U0644><U062C><U0645><U0639><U0629>";/
            "<U0627><U0644><U0633><U0628><U062A>"
%
% Abbreviated month names (%b)
abmon       "<U0643><U0627><U0646><U0648><U0646><U0020><U0627><U0644>/
<U062B><U0627><U0646><U064A>";/
            "<U0634><U0628><U0627><U0637>";/
            "<U0622><U0630><U0627><U0631>";/
            "<U0646><U064A><U0633><U0627><U0646>";/
            "<U0646><U0648><U0627><U0631>";/
            "<U062D><U0632><U064A><U0631><U0627><U0646>";/
            "<U062A><U0645><U0648><U0632>";/
            "<U0622><U0628>";/
            "<U0623><U064A><U0644><U0648><U0644>";/
            "<U062A><U0634><U0631><U064A><U0646><U0020><U0627><U0644>/
<U0623><U0648><U0644>";/
            "<U062A><U0634><U0631><U064A><U0646><U0020><U0627><U0644>/
<U062B><U0627><U0646><U064A>";/
            "<U0643><U0627><U0646><U0648><U0646><U0020><U0627><U0644>/
<U0623><U0648><U0644>"
%
% Full month names (%B)
mon         "<U0643><U0627><U0646><U0648><U0646><U0020><U0627><U0644>/
<U062B><U0627><U0646><U064A>";/
            "<U0634><U0628><U0627><U0637>";/
            "<U0622><U0630><U0627><U0631>";/
            "<U0646><U064A><U0633><U0627><U0646>";/
            "<U0646><U0648><U0627><U0631><U0627><U0646>";/
            "<U062D><U0632><U064A><U0631>";/
            "<U062A><U0645><U0648><U0632>";/
            "<U0622><U0628>";/
            "<U0623><U064A><U0644><U0648><U0644>";/
            "<U062A><U0634><U0631><U064A><U0646><U0020><U0627><U0644>/
<U0623><U0648><U0644>";/
            "<U062A><U0634><U0631><U064A><U0646><U0020><U0627><U0644>/
<U062B><U0627><U0646><U064A>";/
            "<U0643><U0627><U0646><U0648><U0646><U0020><U0627><U0644>/
<U0623><U0648><U0644>"
%
% Equivalent of AM PM
am_pm       "<U0635>";"<U0645>"
%
% Appropriate date and time representation
% %d %b, %Y%Z %I:%M:%S
d_t_fmt     "<U0025><U0064><U0020><U0025><U0062><U002C><U0020><U0025>/
<U0059><U0020><U0025><U005A><U0020><U0025><U0049><U003A><U0025><U004D>/
<U003A><U0025><U0053><U0020><U0025><U0070>"
%
% Appropriate date representation
% %d %b, %Y
d_fmt       "<U0025><U0064><U0020><U0025><U0062><U002C><U0020><U0025><U0059>"
%
% Appropriate time representation
% %Z %I:%M:%S
t_fmt       "<U0025><U005A><U0020><U0025><U0049><U003A><U0025><U004D>/
<U003A><U0025><U0053><U0020>"
%
% Appropriate 12 h time representation (%r)
t_fmt_ampm  "<U0025><U005A><U0020><U0025><U0049><U003A><U0025><U004D>/
<U003A><U0025><U0053><U0020><U0025><U0070>"
%
% Appropriate date representation (date(1))   "%a %b %e %H:%M:%S %Z %Y"
date_fmt	"<U0025><U0061><U0020><U0025><U0062><U0020><U0025><U0065>/
<U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U005A><U0020><U0025><U0059>"
%  FIXME: found in CLDR
first_weekday 5
END LC_TIME


LC_MESSAGES
copy "ar_EG"
END LC_MESSAGES


LC_PAPER
% This is the ISO_IEC TR14652 Locale definition for the
% LC_PAPER category
height      297
width       210

END LC_PAPER


LC_NAME
% This is the ISO_IEC TR14652 Locale definition for the
% LC_NAME category.
%
name_fmt    "<U0025><U0070><U0025><U0074><U0025><U0066><U0025><U0074>/
<U0025><U0067>"
name_gen    "<U002D><U0073><U0061><U006E>"
name_mr     "<U004D><U0072><U002E>"
name_mrs    "<U004D><U0072><U0073><U002E>"
name_miss   "<U004D><U0069><U0073><U0073><U002E>"
name_ms     "<U004D><U0073><U002E>"

END LC_NAME


LC_ADDRESS
% This is the ISO_IEC TR14652 Locale definition for the
% LC_ADDRESS
postal_fmt  "<U0025><U007A><U0025><U0063><U0025><U0054><U0025><U0073>/
<U0025><U0062><U0025><U0065><U0025><U0072>"
country_ab2 "<U0053><U0059>"
country_ab3 "<U0053><U0059><U0052>"
country_num 760
% SYR
country_car    "<U0053><U0059><U0052>"
lang_name    "<U0627><U0644><U0639><U0631><U0628><U064A><U0629>"
% ar
lang_ab      "<U0061><U0072>"
% ara
lang_term    "<U0061><U0072><U0061>"
% ara
lang_lib    "<U0061><U0072><U0061>"
END LC_ADDRESS


LC_TELEPHONE
% This is the ISO_IEC TR14652 Locale definition for the
%
tel_int_fmt "<U002B><U0025><U0063><U0020><U003B><U0025><U0061><U0020>/
<U003B><U0025><U006C>"
int_prefix  "<U0039><U0036><U0033>"

END LC_TELEPHONE


LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  comment_char    %
escape_char     /

% Last Update by Runa Bhattacharjee <runab@redhat.com>

LC_IDENTIFICATION
% This is the ISO_IEC TR14652 Locale definition for the LC_IDENTIFICATION
% category generated by IBM Basic CountryPack Transformer.
%
title       "Bengali language locale for India"
source     "IBM Globalization Center of Competency, Yamato Software Laboratory"
address    "1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan"
email      "bug-glibc-locales@gnu.org"
tel         ""
fax         ""
language    "Bengali"
territory   "India"
revision    "1.0"
date        "2006-05-29"
%
category  "bn_IN:2000";LC_IDENTIFICATION
category  "bn_IN:2000";LC_CTYPE
category  "bn_IN:2000";LC_COLLATE
category  "bn_IN:2000";LC_TIME
category  "bn_IN:2000";LC_NUMERIC
category  "bn_IN:2000";LC_MONETARY
category  "bn_IN:2000";LC_MESSAGES
category  "bn_IN:2000";LC_PAPER
category  "bn_IN:2000";LC_NAME
category  "bn_IN:2000";LC_ADDRESS
category  "bn_IN:2000";LC_TELEPHONE
category  "bn_IN:2000";LC_MEASUREMENT
END LC_IDENTIFICATION


LC_CTYPE
copy "bn_BD"
END LC_CTYPE


LC_COLLATE
% Copy the template from ISO/IEC 14651
copy "iso14651_t1"

%
END LC_COLLATE


LC_MONETARY
% This is the POSIX Locale definition the LC_MONETARY category
% generated by IBM Basic CountryPack Transformer.
% These are generated based on XML base Locale defintion file
% for IBM Class for Unicode.
%
int_curr_symbol       "<U0049><U004E><U0052><U0020>"
currency_symbol       "<U20B9>"
mon_decimal_point     "<U002E>"
mon_thousands_sep     "<U002C>"
mon_grouping          2;3
positive_sign         ""
negative_sign         "<U002D>"
int_frac_digits       2
frac_digits           2
p_cs_precedes         1
p_sep_by_space        1
n_cs_precedes         1
n_sep_by_space        1
p_sign_posn           1
n_sign_posn           1
%
END LC_MONETARY


LC_NUMERIC
% This is the POSIX Locale definition for the LC_NUMERIC  category.
%
decimal_point          "<U002E>"
thousands_sep          "<U002C>"
grouping               3;2
%
END LC_NUMERIC


LC_TIME
% This is the POSIX Locale definition for the LC_TIME category
% generated by IBM Basic CountryPack Transformer.
% These are generated based on XML base Locale definition file
% for IBM Class for Unicode.
%
% Abbreviated weekday names (%a)
abday       "<U09B0><U09AC><U09BF>";"<U09B8><U09CB><U09AE>";/
            "<U09AE><U0999><U09CD><U0997><U09B2>";"<U09AC><U09C1><U09A7>";/
            "<U09AC><U09C3><U09B9><U09B8><U09CD><U09AA><U09A4><U09BF>";"<U09B6><U09C1><U0995><U09CD><U09B0>";/
            "<U09B6><U09A8><U09BF>"

%
% Full weekday names (%A)
day         "<U09B0><U09AC><U09BF><U09AC><U09BE><U09B0>";"<U09B8><U09CB><U09AE><U09AC><U09BE><U09B0>";/
            "<U09AE><U0999><U09CD><U0997><U09B2><U09AC><U09BE><U09B0>";"<U09AC><U09C1><U09A7><U09AC><U09BE><U09B0>";/
            "<U09AC><U09C3><U09B9><U09B8><U09CD><U09AA><U09A4><U09BF><U09AC><U09BE><U09B0>";/
            "<U09B6><U09C1><U0995><U09CD><U09B0><U09AC><U09BE><U09B0>";"<U09B6><U09A8><U09BF><U09AC><U09BE><U09B0>"

%
% Abbreviated month names (%b)
abmon       "<U099C><U09BE><U09A8><U09C1><U09DF><U09BE><U09B0><U09BF>";/
            "<U09AB><U09C7><U09AC><U09CD><U09B0><U09C1><U09DF><U09BE><U09B0><U09BF>";/
            "<U09AE><U09BE><U09B0><U09CD><U099A>";"<U098F><U09AA><U09CD><U09B0><U09BF><U09B2>";/
            "<U09AE><U09C7>";"<U099C><U09C1><U09A8>";/
            "<U099C><U09C1><U09B2><U09BE><U0987>";"<U0986><U0997><U09B8><U09CD><U099F>";/
            "<U09B8><U09C7><U09AA><U09CD><U099F><U09C7><U09AE><U09CD><U09AC><U09B0>";/
            "<U0985><U0995><U09CD><U099F><U09CB><U09AC><U09B0>";/
            "<U09A8><U09AD><U09C7><U09AE><U09CD><U09AC><U09B0>";/
            "<U09A1><U09BF><U09B8><U09C7><U09AE><U09CD><U09AC><U09B0>"

%
% Full month names (%B)
mon         "<U099C><U09BE><U09A8><U09C1><U09DF><U09BE><U09B0><U09BF>";/
            "<U09AB><U09C7><U09AC><U09CD><U09B0><U09C1><U09DF><U09BE><U09B0><U09BF>";/
            "<U09AE><U09BE><U09B0><U09CD><U099A>";"<U098F><U09AA><U09CD><U09B0><U09BF><U09B2>";/
            "<U09AE><U09C7>";"<U099C><U09C1><U09A8>";/
            "<U099C><U09C1><U09B2><U09BE><U0987>";"<U0986><U0997><U09B8><U09CD><U099F>";/
            "<U09B8><U09C7><U09AA><U09CD><U099F><U09C7><U09AE><U09CD><U09AC><U09B0>";/
            "<U0985><U0995><U09CD><U099F><U09CB><U09AC><U09B0>";/
            "<U09A8><U09AD><U09C7><U09AE><U09CD><U09AC><U09B0>";/
            "<U09A1><U09BF><U09B8><U09C7><U09AE><U09CD><U09AC><U09B0>"

%
% Equivalent of AM PM
am_pm       "<U09AA><U09C2><U09B0><U09CD><U09AC><U09BE><U09B9><U09CD><U09A3>";/
            "<U0985><U09AA><U09B0><U09BE><U09B9><U09CD><U09A3>"

%
% Appropriate date and time representation
% %A %d %b %Y %I:%M:%S  %Z
d_t_fmt     "<U0025><U0041><U0020><U0025><U0064><U0020><U0025><U0062><U0020><U0025><U0059><U0020><U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053><U0020><U0025><U0070><U0020><U0025><U005A>"
%
% Appropriate date representation
% %A %d %b %Y
d_fmt       "<U0025><U0041><U0020><U0025><U0064><U0020><U0025><U0062><U0020><U0025><U0059>"
%
% Appropriate time representation
% %I:%M:%S  %Z
t_fmt       "<U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053><U0020><U0020><U0025><U005A>"
%
% Appropriate 12 h time representation (%r)
t_fmt_ampm  "<U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053><U0020><U0025><U0070><U0020><U0025><U005A>"
%
%  FIXME
first_weekday 1
END LC_TIME


LC_MESSAGES
copy "bn_BD"
END LC_MESSAGES


% Default paper: A4
LC_PAPER
copy "hi_IN"
END LC_PAPER


LC_NAME
% This is the ISO_IEC TR14652 Locale definition for the LC_NAME category
% generated by IBM Basic CountryPack Transformer.
%
%
name_fmt    "<U0025><U0070><U0025><U0074><U0025><U0066><U0025><U0074><U0025><U0067>"
name_gen    ""
name_mr     "<U09B6><U09CD><U09B0><U09C0>"
name_mrs    "<U09B6><U09CD><U09B0><U09C0><U09AE><U09A4><U09C0>"
name_miss   "<U0995><U09C1><U09AE><U09BE><U09B0><U09C0>"
name_ms     "<U09B6><U09CD><U09B0><U09C0><U09AE><U09A4><U09C0>"

END LC_NAME


LC_ADDRESS
% This is the ISO_IEC TR14652 Locale definition for the LC_ADDRESS category
% generated by IBM Basic CountryPack Transformer.
postal_fmt  "<U0025><U007A><U0025><U0063><U0025><U0054><U0025><U0073><U0025><U0062><U0025><U0065><U0025><U0072>"
country_ab2 "<U0049><U004E>"
country_ab3 "<U0049><U004E><U0044>"
country_num 356
% IND
country_car    "<U0049><U004E><U0044>"
% বাংলা
lang_name    "<U09AC><U09BE><U0982><U09B2><U09BE>"
% bn
lang_ab      "<U0062><U006E>"
% ben
lang_term    "<U0062><U0065><U006E>"
% ben
lang_lib       "<U0062><U0065><U006E>"
END LC_ADDRESS


LC_TELEPHONE
copy "hi_IN"
END LC_TELEPHONE


LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           comment_char %
escape_char  /
%
% Chuvash Language Locale for Russia
% Language: cv
% Territory: RU
% Revision: 1.0
% Date: 2009-10-13
% Application: general
% Users: general
% Charset: UTF-8
% Distribution and use is free, also
% for commercial purposes.
%
% Based on the ru_RO
% Modifed by:
%    Adi Roiban <adi@roiban.ro>
%    Ali Savatar
%

LC_IDENTIFICATION
title      "Chuvash locale for Russia"
source     "RAP"
address    "Sankt Jorgens Alle 8, DK-1615 Kobenhavn V, Danmark"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "Chuvash"
territory  "Russia"
revision   "1.0"
date       "2000-06-29"
%
category  "cv_RU:2000";LC_IDENTIFICATION
category  "cv_RU:2000";LC_CTYPE
category  "cv_RU:2000";LC_COLLATE
category  "cv_RU:2000";LC_TIME
category  "cv_RU:2000";LC_NUMERIC
category  "cv_RU:2000";LC_MONETARY
category  "cv_RU:2000";LC_MESSAGES
category  "cv_RU:2000";LC_PAPER
category  "cv_RU:2000";LC_NAME
category  "cv_RU:2000";LC_ADDRESS
category  "cv_RU:2000";LC_TELEPHONE
category  "cv_RU:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_COLLATE
copy "iso14651_t1"

% The Chuvash alphabet has the following letters, ordered as below:
% a a( c e e( h i j k l m n p r s< s s, t u u: v y

collating-symbol <a(>
collating-symbol <e(>
collating-symbol <s<>
collating-symbol <s,>
collating-symbol <u-diaerisis>

reorder-after <a>
<a(>
reorder-after <e>
<e(>
reorder-after <r>
<s<>
reorder-after <s>
<s,>
reorder-after <u>
<u-diaerisis>

reorder-after <U0061>
<U0103> <a(>;<BRE>;<MIN>;IGNORE
reorder-after <U0041>
<U0102> <a(>;<BRE>;<CAP>;IGNORE

reorder-after <U0065>
<U0115> <e(>;<BRE>;<MIN>;IGNORE
reorder-after <U0045>
<U0114> <e(>;<BRE>;<CAP>;IGNORE

reorder-after <U0072>
<U0161> <s<>;<CAR>;<MIN>;IGNORE
reorder-after <U0053>
<U0160> <s<>;<CAR>;<CAP>;IGNORE

reorder-after <U0073>
<U0219> <s,>;<CDI>;<MIN>;IGNORE
<U015F> <s,>;<CDI>;<MIN>;IGNORE
reorder-after <U0053>
<U0218> <s,>;<CDI>;<CAP>;IGNORE
<U015E> <s,>;<CDI>;<CAP>;IGNORE

reorder-after <U0074>
<U00FC> <u-diaerisis>;<BAS>;<MIN>;IGNORE
reorder-after <U0055>
<U00DC> <u-diaerisis>;<BAS>;<CAP>;IGNORE

reorder-end

END LC_COLLATE

LC_CTYPE
copy "i18n"

translit_start
include  "translit_combining";""
translit_end
END LC_CTYPE

LC_MESSAGES
% "^[yY].*"
yesexpr "<U005E><U005B><U0079><U0059><U005D><U002E><U002A>"
% "^[nN].*"
noexpr "<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
END LC_MESSAGES

LC_MONETARY
int_curr_symbol           "<U0052><U0055><U0042><U0020>"

% "t." - short for tenke(, Chuvash name for rouble
currency_symbol "<U0074>"

mon_decimal_point         "<U002E>"
mon_thousands_sep         "<U00A0>"
mon_grouping              3;3
positive_sign             ""
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

LC_NUMERIC
copy "ru_RU"
END LC_NUMERIC

LC_TIME

% Days of week:
% vyrsarnikun (Sunday) - short vr
% tuntikun (Monday) tn
% ytlarikun (Tuesday) yt
% junkun (Wednesday) jn
% ke(s,nernikun (Thursday) ks,
% ernekun (Friday) er
% s<a(matkun (Saturday) s<m

day 	"<U0076><U0079><U0072><U0073><U0061><U0072><U006E><U0069><U006B><U0075><U006E>";/
	"<U0074><U0075><U006E><U0074><U0069><U006B><U0075><U006E>";/
	"<U0079><U0074><U006C><U0061><U0072><U0069><U006B><U0075><U006E>";/
	"<U006A><U0075><U006E><U006B><U0075><U006E>";/
	"<U006B><U0115><U015F><U006E><U0065><U0072><U006E><U0069><U006B><U0075><U006E>";/
	"<U0065><U0072><U006E><U0065><U006B><U0075><U006E>";/
	"<U0161><U0103><U006D><U0061><U0074><U006B><U0075><U006E>"

abday   "<U0076><U0072>";/
	"<U0074><U006E>";/
	"<U0079><U0074>";/
	"<U006A><U006E>";/
	"<U006B><U015F>";/
	"<U0065><U0072>";/
	"<U0161><U006D>"

% Month names:
% ka(rlac (January) - short KA(R
% nara(s (February) NAR
% pus< (March) PUS<
% aka (April) AKA
% s,u (May) S,U
% s,e(rtme (June) S,E(R
% uta( (July) UTA(
% s,urla (August) S,UR
% ava(n (September) AVA(
% jupa (October) JUP
% cu:k (November) CU:K
% ras<tav (December) RAS<

mon     "<U006B><U0103><U0072><U006C><U0061><U0063>";/
	"<U006E><U0061><U0072><U0103><U0073>";/
	"<U0070><U0075><U0161>";/
	"<U0061><U006B><U0061>";/
	"<U015F><U0075>";/
	"<U015F><U0115><U0072><U0074><U006D><U0065>";/
	"<U0075><U0074><U0103>";/
	"<U015F><U0075><U0072><U006C><U0061>";/
	"<U0061><U0076><U0103><U006E>";/
	"<U006A><U0075><U0070><U0061>";/
	"<U0063><U00FC><U006B>";/
	"<U0072><U0061><U0161><U0074><U0061><U0076>"
abmon   "<U004B><U0102><U0052>";/
	"<U004E><U0041><U0052>";/
	"<U0050><U0055><U0160>";/
	"<U0041><U004B><U0041>";/
	"<U015E><U0055>";/
	"<U015E><U0114><U0052>";/
	"<U0055><U0054><U0102>";/
	"<U015E><U0055><U0052>";/
	"<U0041><U0056><U0102>";/
	"<U004A><U0055><U0050>";/
	"<U0043><U00DC><U004B>";/
	"<U0052><U0041><U0160>"
d_t_fmt "<U0025><U0061><U0020><U0025><U0064><U0020><U0025><U0062>/
<U0020><U0025><U0059><U0020><U0025><U0054>"
d_fmt     "<U0025><U0064><U002E><U0025><U006D><U002E><U0025><U0059>"
t_fmt     "<U0025><U0054>"
am_pm     "";""
t_fmt_ampm ""
date_fmt       "<U0025><U0061><U0020><U0025><U0062><U0020><U0025><U0065>/
<U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U005A><U0020><U0025><U0059>"
first_weekday 2
first_workday 2
END LC_TIME

LC_PAPER
copy "ru_RU"
END LC_PAPER

LC_TELEPHONE
copy "ru_RU"
END LC_TELEPHONE

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_NAME
copy "ru_RU"
END LC_NAME

LC_ADDRESS
postal_fmt    "<U0025><U0066><U0025><U004E><U0025><U0061><U0025><U004E>/
<U0025><U0064><U0025><U004E><U0025><U0062><U0025><U004E><U0025><U0073>/
<U0020><U0025><U0068><U0020><U0025><U0065><U0020><U0025><U0072><U0025>/
<U004E><U0025><U007A><U0020><U0025><U0054><U0025>/
<U004E><U0025><U0063><U0025><U004E>"
country_ab2 "<U0052><U0055>"
country_ab3 "<U0052><U0055><U0053>"
country_num 643
% RUS
country_car    "<U0052><U0055><U0053>"
% Чӑвашла
lang_name    "<U0427><U04D1><U0432><U0430><U0448><U043B><U0430>"
% cv
lang_ab      "<U0063><U0076>"
% chv
lang_term    "<U0063><U0068><U0076>"
% chv
lang_lib     "<U0063><U0068><U0076>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 escape_char  /
comment_char  %

% English language locale for New Zealand
% Source: RAP
% Address: Sankt Jo//rgens Alle 8
%    DK-1615 Ko//benhavn V, Danmark
% Contact: Keld Simonsen
% Email: Keld.Simonsen@dkuug.dk
% Tel: +45 - 31226543
% Fax: +45 - 33256543
% Language: en
% Territory: NZ
% Revision: 4.3
% Date: 1997-11-05
% Users: general
% Repertoiremap: mnemonic.ds
% Charset: ISO-8859-1
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "English locale for New Zealand"
source     "RAP"
address    "Sankt J<U00F8>rgens Alle 8, DK-1615 K<U00F8>benhavn V, Danmark"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "English"
territory  "New Zealand"
revision   "1.0"
date       "2000-06-29"
%
category  "en_NZ:2000";LC_IDENTIFICATION
category  "en_NZ:2000";LC_CTYPE
category  "en_NZ:2000";LC_COLLATE
category  "en_NZ:2000";LC_TIME
category  "en_NZ:2000";LC_NUMERIC
category  "en_NZ:2000";LC_MONETARY
category  "en_NZ:2000";LC_MESSAGES
category  "en_NZ:2000";LC_PAPER
category  "en_NZ:2000";LC_NAME
category  "en_NZ:2000";LC_ADDRESS
category  "en_NZ:2000";LC_TELEPHONE
category  "en_NZ:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_CTYPE
copy "en_GB"
END LC_CTYPE

LC_COLLATE
copy "iso14651_t1"
END LC_COLLATE

LC_MONETARY
int_curr_symbol         "<U004E><U005A><U0044><U0020>"
currency_symbol         "<U0024>"
mon_decimal_point       "<U002E>"
mon_thousands_sep       "<U002C>"
mon_grouping            3;3
positive_sign           ""
negative_sign           "<U002D>"
int_frac_digits         2
frac_digits             2
p_cs_precedes           1
p_sep_by_space          0
n_cs_precedes           1
n_sep_by_space          0
p_sign_posn             1
n_sign_posn             1
END LC_MONETARY

LC_NUMERIC
decimal_point           "<U002E>"
thousands_sep           "<U002C>"
grouping                3;3
END LC_NUMERIC

LC_TIME
abday       "<U0053><U0075><U006E>";"<U004D><U006F><U006E>";/
            "<U0054><U0075><U0065>";"<U0057><U0065><U0064>";/
            "<U0054><U0068><U0075>";"<U0046><U0072><U0069>";/
            "<U0053><U0061><U0074>"
day         "<U0053><U0075><U006E><U0064><U0061><U0079>";/
            "<U004D><U006F><U006E><U0064><U0061><U0079>";/
            "<U0054><U0075><U0065><U0073><U0064><U0061><U0079>";/
            "<U0057><U0065><U0064><U006E><U0065><U0073><U0064><U0061><U0079>";/
            "<U0054><U0068><U0075><U0072><U0073><U0064><U0061><U0079>";/
            "<U0046><U0072><U0069><U0064><U0061><U0079>";/
            "<U0053><U0061><U0074><U0075><U0072><U0064><U0061><U0079>"
abmon       "<U004A><U0061><U006E>";"<U0046><U0065><U0062>";/
            "<U004D><U0061><U0072>";"<U0041><U0070><U0072>";/
            "<U004D><U0061><U0079>";"<U004A><U0075><U006E>";/
            "<U004A><U0075><U006C>";"<U0041><U0075><U0067>";/
            "<U0053><U0065><U0070>";"<U004F><U0063><U0074>";/
            "<U004E><U006F><U0076>";"<U0044><U0065><U0063>"
mon         "<U004A><U0061><U006E><U0075><U0061><U0072><U0079>";/
            "<U0046><U0065><U0062><U0072><U0075><U0061><U0072><U0079>";/
            "<U004D><U0061><U0072><U0063><U0068>";/
            "<U0041><U0070><U0072><U0069><U006C>";/
            "<U004D><U0061><U0079>";/
            "<U004A><U0075><U006E><U0065>";/
            "<U004A><U0075><U006C><U0079>";/
            "<U0041><U0075><U0067><U0075><U0073><U0074>";/
            "<U0053><U0065><U0070><U0074><U0065><U006D><U0062><U0065><U0072>";/
            "<U004F><U0063><U0074><U006F><U0062><U0065><U0072>";/
            "<U004E><U006F><U0076><U0065><U006D><U0062><U0065><U0072>";/
            "<U0044><U0065><U0063><U0065><U006D><U0062><U0065><U0072>"
d_t_fmt     "<U0025><U0061><U0020><U0025><U0064><U0020><U0025><U0062><U0020><U0025><U0059><U0020><U0025><U0054><U0020><U0025><U005A>"
d_fmt       "<U0025><U0064><U002F><U0025><U006D><U002F><U0025><U0079>"
t_fmt       "<U0025><U0054>"
am_pm       "<U0041><U004D>";"<U0050><U004D>"
t_fmt_ampm  "<U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U0070>"
date_fmt	"<U0025><U0061><U0020><U0025><U0062><U0020><U0025><U0065>/
<U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U005A><U0020><U0025><U0059>"
%  FIXME: found in CLDR
first_weekday 1
END LC_TIME

LC_MESSAGES
yesexpr     "<U005E><U005B><U0079><U0059><U005D><U002E><U002A>"
noexpr      "<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
END LC_MESSAGES

LC_PAPER
% FIXME
height   297
% FIXME
width    210
END LC_PAPER

LC_TELEPHONE
tel_int_fmt    "<U002B><U0025><U0063><U0020><U0025><U0061><U0020><U0025>/
<U006C>"
int_prefix     "<U0036><U0034>"
END LC_TELEPHONE

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_NAME
name_fmt    "<U0025><U0064><U0025><U0074><U0025><U0067><U0025><U0074>/
<U0025><U006D><U0025><U0074><U0025><U0066>"
END LC_NAME

LC_ADDRESS
postal_fmt    "<U0025><U0066><U0025><U004E><U0025><U0061><U0025><U004E>/
<U0025><U0064><U0025><U004E><U0025><U0062><U0025><U004E><U0025><U0073>/
<U0020><U0025><U0068><U0020><U0025><U0065><U0020><U0025><U0072><U0025>/
<U004E><U0025><U007A><U0020><U0025><U0054><U0025>/
<U004E><U0025><U0063><U0025><U004E>"
country_ab2   "<U004E><U005A>"
country_ab3   "<U004E><U005A><U004C>"
country_num   554
% NZ
country_car    "<U004E><U005A>"
% English
lang_name     "<U0045><U006E><U0067><U006C><U0069><U0073><U0068>"
% en
lang_ab      "<U0065><U006E>"
% eng
lang_term    "<U0065><U006E><U0067>"
% eng
lang_lib    "<U0065><U006E><U0067>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  