 and <U006F> are place holders
% <U0646> = <U0646><U0647><U064A><U06BA>
yesstr	"<U0628><U0644><U0643><U0644>"
nostr	"<U0646><U0647><U064A><U06BA>"
yesexpr	"<U005E><U005B><U0079><U0059><U0647><U0628><U0066><U005D><U002E><U002A>"
noexpr	"<U005E><U005B><U006E><U004E><U0646><U006F><U005D><U002E><U002A>"

END LC_MESSAGES

%Draft Finished: 17:00 09/07/2000

LC_PAPER
copy "ur_PK"
END LC_PAPER

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_NAME
% FIXME
copy "ur_PK"
END LC_NAME

LC_ADDRESS
% FIXME
postal_fmt    "<U0025><U0061><U0025><U004E><U0025><U0066><U0025><U004E>/
<U0025><U0064><U0025><U004E><U0025><U0062><U0025><U004E><U0025><U0068>/
<U0020><U0025><U0073><U0020><U0025><U0065><U0020><U0025><U0072><U0025>/
<U004E><U0025><U0054><U0020><U0025><U007A><U0025>/
<U004E><U0025><U0063><U0025><U004E>"

country_ab2 "<U0050><U004B>"
country_ab3 "<U0050><U0041><U004B>"
country_num 586
% PK
country_car    "<U0050><U004B>"
lang_name    "<U067E><U0646><U062C><U0627><U0628><U06CC>"
% pa
lang_ab      "<U0070><U0061>"
% pan
lang_term    "<U0070><U0061><U006E>"
% pan
lang_lib    "<U0070><U0061><U006E>"
END LC_ADDRESS

LC_TELEPHONE
% Changed from ur_PK as that Locale just copy from en_DK, which is not suitable to Punjabi (Shahmukhi) ISD 92
tel_int_fmt "<U002B><U0025><U0063><U0020><U003B><U0025><U0061><U0020><U003B><U0025><U006C>"
int_prefix "<U0039><U0032>"
int_select "<U0030><U0030>"
END LC_TELEPHONE
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         comment_char %
escape_char  /
%
% Spanish Language Locale for Spain
% Source: RAP
% Address: Sankt Jo//rgens Alle 8
%    DK-1615 Ko//benhavn V, Danmark
% Contact: Keld Simonsen
% Email: Keld.Simonsen@dkuug.dk
% Tel: +45 - 31226543
% Fax: +45 - 33256543
% Language: es
% Territory: ES
% Revision: 4.4
% Date: 1997-03-18
% Application: general
% Users: general
% Repertoiremap: mnemonic.ds
% Charset: ISO-8859-1
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "Spanish locale for Spain"
source     "RAP"
address    "Sankt J<U00F8>rgens Alle 8, DK-1615 K<U00F8>benhavn V, Danmark"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "Spanish"
territory  "Spain"
revision   "1.0"
date       "2000-06-29"
%
category  "es_ES:2000";LC_IDENTIFICATION
category  "es_ES:2000";LC_CTYPE
category  "es_ES:2000";LC_COLLATE
category  "es_ES:2000";LC_TIME
category  "es_ES:2000";LC_NUMERIC
category  "es_ES:2000";LC_MONETARY
category  "es_ES:2000";LC_MESSAGES
category  "es_ES:2000";LC_PAPER
category  "es_ES:2000";LC_NAME
category  "es_ES:2000";LC_ADDRESS
category  "es_ES:2000";LC_TELEPHONE
category  "es_ES:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_COLLATE
% Copy the template from ISO/IEC 14651
copy "iso14651_t1"

collating-symbol  <ntilde>

reorder-after <n>
<ntilde>

reorder-after <U006E>
<U00F1> <ntilde>;<TIL>;<MIN>;IGNORE
reorder-after <U004E>
<U00D1> <ntilde>;<TIL>;<CAP>;IGNORE

reorder-end
END LC_COLLATE

LC_CTYPE
copy "i18n"

translit_start
include "translit_combining";""
translit_end
END LC_CTYPE

LC_MESSAGES
% Si - Display only the Spanish "Yes."
yesstr  "<U0053><U0069>"
% No - Spanish and English "No" have the same spelling.
nostr   "<U004E><U006F>"
% ^[sSyY].* - Spanish or English answer is appropriate.
yesexpr "<U005E><U005B><U0073><U0053><U0079><U0059><U005D><U002E><U002A>"
% ^[nN].* - Spanish or English answer have the same spelling.
noexpr  "<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
END LC_MESSAGES

LC_MONETARY
int_curr_symbol      "<U0045><U0055><U0052><U0020>"
currency_symbol      "<U20AC>"
mon_decimal_point    "<U002C>"
mon_thousands_sep    "<U002E>"
mon_grouping         3;3
positive_sign        ""
negative_sign        "<U002D>"
int_frac_digits      2
frac_digits          2
p_cs_precedes        0
p_sep_by_space       1
n_cs_precedes        0
n_sep_by_space       1
p_sign_posn          1
n_sign_posn          1
END LC_MONETARY

LC_NUMERIC
decimal_point        "<U002C>"
thousands_sep        "<U002E>"
grouping             3;3
END LC_NUMERIC

LC_TIME
abday   "<U0064><U006F><U006D>";"<U006C><U0075><U006E>";/
	"<U006D><U0061><U0072>";"<U006D><U0069><U00E9>";/
	"<U006A><U0075><U0065>";"<U0076><U0069><U0065>";/
	"<U0073><U00E1><U0062>"
day     "<U0064><U006F><U006D><U0069><U006E><U0067><U006F>";/
	"<U006C><U0075><U006E><U0065><U0073>";/
	"<U006D><U0061><U0072><U0074><U0065><U0073>";/
	"<U006D><U0069><U00E9><U0072><U0063><U006F><U006C><U0065><U0073>";/
	"<U006A><U0075><U0065><U0076><U0065><U0073>";/
	"<U0076><U0069><U0065><U0072><U006E><U0065><U0073>";/
	"<U0073><U00E1><U0062><U0061><U0064><U006F>"
abmon   "<U0065><U006E><U0065>";"<U0066><U0065><U0062>";/
	"<U006D><U0061><U0072>";"<U0061><U0062><U0072>";/
	"<U006D><U0061><U0079>";"<U006A><U0075><U006E>";/
	"<U006A><U0075><U006C>";"<U0061><U0067><U006F>";/
	"<U0073><U0065><U0070>";"<U006F><U0063><U0074>";/
	"<U006E><U006F><U0076>";"<U0064><U0069><U0063>"
mon     "<U0065><U006E><U0065><U0072><U006F>";/
	"<U0066><U0065><U0062><U0072><U0065><U0072><U006F>";/
	"<U006D><U0061><U0072><U007A><U006F>";/
	"<U0061><U0062><U0072><U0069><U006C>";/
	"<U006D><U0061><U0079><U006F>";/
	"<U006A><U0075><U006E><U0069><U006F>";/
	"<U006A><U0075><U006C><U0069><U006F>";/
	"<U0061><U0067><U006F><U0073><U0074><U006F>";/
	"<U0073><U0065><U0070><U0074><U0069><U0065><U006D><U0062><U0072><U0065>";/
	"<U006F><U0063><U0074><U0075><U0062><U0072><U0065>";/
	"<U006E><U006F><U0076><U0069><U0065><U006D><U0062><U0072><U0065>";/
	"<U0064><U0069><U0063><U0069><U0065><U006D><U0062><U0072><U0065>"
d_t_fmt "<U0025><U0061><U0020><U0025><U0064><U0020><U0025><U0062><U0020><U0025><U0059><U0020><U0025><U0054><U0020><U0025><U005A>"
d_fmt   "<U0025><U0064><U002F><U0025><U006D><U002F><U0025><U0079>"
t_fmt   "<U0025><U0054>"
am_pm   "";""
t_fmt_ampm ""
date_fmt	"<U0025><U0061><U0020><U0025><U0062><U0020><U0025><U0065>/
<U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U005A><U0020><U0025><U0059>"
week    7;19971130;5
first_weekday   2
first_workday   2
END LC_TIME

LC_PAPER
height   297
width    210
END LC_PAPER

LC_TELEPHONE
tel_int_fmt    "<U002B><U0025><U0063><U0020><U0025><U0061><U0020><U0025>/
<U006C>"
int_prefix     "<U0033><U0034>"
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
country_ab2   "<U0045><U0053>"
country_ab3   "<U0045><U0053><U0050>"
country_num   724
% E
country_car    "<U0045>"
% Español
lang_name     "<U0045><U0073><U0070><U0061><U00F1><U006F><U006C>"
% es
lang_ab      "<U0065><U0073>"
% spa
lang_term    "<U0073><U0070><U0061>"
% spa
lang_lib    "<U0073><U0070><U0061>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            escape_char /
comment_char %
%
% Vietnamese language locale for Vietnam
% Source: glibc locale and info from vietnamese native speakers
% Address:
% Contact: Pablo Saratxaga
% Email: pablo@mandrakesoft.com
% Tel:
% Fax:
% Language: vi
% Territory: VN
% Revision: 1.1
% Date: 2004-01-09
% Users: general
% Repertoiremap:
% Charset: UTF-8
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "Vietnamese language locale for Vietnam"
source     "glibc locale and info from vietnamese native speakers"
address    ""
contact    "Pablo Saratxaga"
email      "pablo@mandrakesoft.com"
tel        ""
fax        ""
language   "Vietnamese"
territory  "Vietnam"
revision   "1.1"
date       "2004-01-09"
%
category  "vi_VN:2000";LC_IDENTIFICATION
category  "vi_VN:2000";LC_CTYPE
category  "vi_VN:2000";LC_COLLATE
category  "vi_VN:2000";LC_TIME
category  "vi_VN:2000";LC_NUMERIC
category  "vi_VN:2000";LC_MONETARY
category  "vi_VN:2000";LC_MESSAGES
category  "vi_VN:2000";LC_PAPER
category  "vi_VN:2000";LC_NAME
category  "vi_VN:2000";LC_ADDRESS
category  "vi_VN:2000";LC_TELEPHONE
category  "vi_VN:2000";LC_MEASUREMENT

END LC_IDENTIFICATION

LC_CTYPE
copy "i18n"
translit_start

include  "translit_combining";""

% dong sign -> d// -> dd
<U20AB> "<U0111>";"<U0064><U0064>"

translit_end
END LC_CTYPE

LC_COLLATE
% Copy the template from ISO/IEC 14651
copy "iso14651_t1"

% A( A^ E^ O+ U+ DD are treatead as base letters
% ordering of accents is: grave, hook, tilde, acute, dot below
% a a( a> b c d d/ e e> f g h i j k l m n o o+ p q r s t u u+ v w x y z

collating-symbol <a(>
collating-symbol <a/>>
collating-symbol <d//>
collating-symbol <e/>>
collating-symbol <o/>>
collating-symbol <o9>
collating-symbol <u9>

reorder-after <BAS>
<GRA>
<HOK>
<TIL>
<ACA>
<PCT>

reorder-after <a>
<a(>
<a/>>
reorder-after <d>
<d//>
reorder-after <e>
<e/>>
reorder-after <o>
<o/>>
<o9>
reorder-after <u>
<u9>

reorder-after <U0061>
<U1EA3> <a>;<HOK>;<MIN>;IGNORE
<U1EA1> <a>;<PCT>;<MIN>;IGNORE
<U0103> <a(>;<BAS>;<MIN>;IGNORE
<U1EB1> <a(>;<GRA>;<MIN>;IGNORE
<U1EB3> <a(>;<HOK>;<MIN>;IGNORE
<U1EB5> <a(>;<TIL>;<MIN>;IGNORE
<U1EAF> <a(>;<ACA>;<MIN>;IGNORE
<U1EB7> <a(>;<PCT>;<MIN>;IGNORE
<U00E2> <a/>>;<BAS>;<MIN>;IGNORE
<U1EA7> <a/>>;<GRA>;<MIN>;IGNORE
<U1EA9> <a/>>;<HOK>;<MIN>;IGNORE
<U1EAB> <a/>>;<TIL>;<MIN>;IGNORE
<U1EA5> <a/>>;<ACA>;<MIN>;IGNORE
<U1EAD> <a/>>;<PCT>;<MIN>;IGNORE
reorder-after <U0041>
<U1EA2> <a>;<HOK>;<CAP>;IGNORE
<U1EA0> <a>;<PCT>;<CAP>;IGNORE
<U0102> <a(>;<BAS>;<CAP>;IGNORE
<U1EB0> <a(>;<GRA>;<CAP>;IGNORE
<U1EB2> <a(>;<HOK>;<CAP>;IGNORE
<U1EB4> <a(>;<TIL>;<CAP>;IGNORE
<U1EAE> <a(>;<ACA>;<CAP>;IGNORE
<U1EB6> <a(>;<PCT>;<CAP>;IGNORE
<U00C2> <a/>>;<BAS>;<CAP>;IGNORE
<U1EA6> <a/>>;<GRA>;<CAP>;IGNORE
<U1EA8> <a/>>;<HOK>;<CAP>;IGNORE
<U1EAA> <a/>>;<TIL>;<CAP>;IGNORE
<U1EA4> <a/>>;<ACA>;<CAP>;IGNORE
<U1EAC> <a/>>;<PCT>;<CAP>;IGNORE

reorder-after <U0064>
<U0111> <d//>;<BAS>;<MIN>;IGNORE
<U00F0> <d//>;<PCL>;<MIN>;IGNORE
reorder-after <U0044>
<U0110> <d//>;<BAS>;<CAP>;IGNORE
<U00D0> <d//>;<PCL>;<CAP>;IGNORE

reorder-after <U0065>
<U1EBB> <e>;<HOK>;<MIN>;IGNORE
<U1EBD> <e>;<TIL>;<MIN>;IGNORE
<U1EB9> <e>;<PCT>;<MIN>;IGNORE
<U00EA> <e/>>;<BAS>;<MIN>;IGNORE
<U1EC1> <e/>>;<GRA>;<MIN>;IGNORE
<U1EC3> <e/>>;<HOK>;<MIN>;IGNORE
<U1EC5> <e/>>;<TIL>;<MIN>;IGNORE
<U1EBF> <e/>>;<ACA>;<MIN>;IGNORE
<U1EC7> <e/>>;<PCT>;<MIN>;IGNORE
reorder-after <U0045>
<U1EBA> <e>;<HOK>;<CAP>;IGNORE
<U1EBC> <e>;<TIL>;<CAP>;IGNORE
<U1EB8> <e>;<PCT>;<CAP>;IGNORE
<U00CA> <e/>>;<BAS>;<CAP>;IGNORE
<U1EC0> <e/>>;<GRA>;<CAP>;IGNORE
<U1EC2> <e/>>;<HOK>;<CAP>;IGNORE
<U1EC4> <e/>>;<TIL>;<CAP>;IGNORE
<U1EBE> <e/>>;<ACA>;<CAP>;IGNORE
<U1EC6> <e/>>;<PCT>;<CAP>;IGNORE

reorder-after <U0069>
<U1EC9> <i>;<HOK>;<MIN>;IGNORE
<U1ECB> <i>;<PCT>;<MIN>;IGNORE
reorder-after <U0049>
<U1EC8> <i>;<HOK>;<CAP>;IGNORE
<U1ECA> <i>;<PCT>;<CAP>;IGNORE

reorder-after <U006F>
<U1ECF> <o>;<HOK>;<MIN>;IGNORE
<U1ECD> <o>;<PCT>;<MIN>;IGNORE
<U00F4> <o/>>;<BAS>;<MIN>;IGNORE
<U1ED3> <o/>>;<GRA>;<MIN>;IGNORE
<U1ED5> <o/>>;<HOK>;<MIN>;IGNORE
<U1ED7> <o/>>;<TIL>;<MIN>;IGNORE
<U1ED1> <o/>>;<ACA>;<MIN>;IGNORE
<U1ED9> <o/>>;<PCT>;<MIN>;IGNORE
<U01A1> <o9>;<BAS>;<MIN>;IGNORE
<U1EDD> <o9>;<GRA>;<MIN>;IGNORE
<U1EDF> <o9>;<HOK>;<MIN>;IGNORE
<U1EE1> <o9>;<TIL>;<MIN>;IGNORE
<U1EDB> <o9>;<ACA>;<MIN>;IGNORE
<U1EE3> <o9>;<PCT>;<MIN>;IGNORE
reorder-after <U004F>
<U1ECE> <o>;<HOK>;<CAP>;IGNORE
<U1ECC> <o>;<PCT>;<CAP>;IGNORE
<U00D4> <o/>>;<BAS>;<CAP>;IGNORE
<U1ED2> <o/>>;<GRA>;<CAP>;IGNORE
<U1ED4> <o/>>;<HOK>;<CAP>;IGNORE
<U1ED6> <o/>>;<TIL>;<CAP>;IGNORE
<U1ED0> <o/>>;<ACA>;<CAP>;IGNORE
<U1ED8> <o/>>;<PCT>;<CAP>;IGNORE
<U01A0> <o9>;<BAS>;<CAP>;IGNORE
<U1EDC> <o9>;<GRA>;<CAP>;IGNORE
<U1EDE> <o9>;<HOK>;<CAP>;IGNORE
<U1EE0> <o9>;<TIL>;<CAP>;IGNORE
<U1EDA> <o9>;<ACA>;<CAP>;IGNORE
<U1EE2> <o9>;<PCT>;<CAP>;IGNORE

reorder-after <U0075>
<U1EE7> <u>;<HOK>;<MIN>;IGNORE
<U1EE5> <u>;<PCT>;<MIN>;IGNORE
<U01B0> <u9>;<BAS>;<MIN>;IGNORE
<U1EEB> <u9>;<GRA>;<MIN>;IGNORE
<U1EED> <u9>;<HOK>;<MIN>;IGNORE
<U1EEF> <u9>;<TIL>;<MIN>;IGNORE
<U1EE9> <u9>;<ACA>;<MIN>;IGNORE
<U1EF1> <u9>;<PCT>;<MIN>;IGNORE
reorder-after <U0055>
<U1EE6> <u>;<HOK>;<CAP>;IGNORE
<U1EE4> <u>;<PCT>;<CAP>;IGNORE
<U01AF> <u9>;<BAS>;<CAP>;IGNORE
<U1EEA> <u9>;<GRA>;<CAP>;IGNORE
<U1EEC> <u9>;<HOK>;<CAP>;IGNORE
<U1EEE> <u9>;<TIL>;<CAP>;IGNORE
<U1EE8> <u9>;<ACA>;<CAP>;IGNORE
<U1EF0> <u9>;<PCT>;<CAP>;IGNORE

reorder-after <U0079>
<U1EF3> <y>;<GRA>;<MIN>;IGNORE
<U1EF7> <y>;<HOK>;<MIN>;IGNORE
<U1EF9> <y>;<TIL>;<MIN>;IGNORE
<U1EF5> <y>;<PCT>;<MIN>;IGNORE
reorder-after <U0059>
<U1EF2> <y>;<GRA>;<CAP>;IGNORE
<U1EF6> <y>;<HOK>;<CAP>;IGNORE
<U1EF8> <y>;<TIL>;<CAP>;IGNORE
<U1EF4> <y>;<PCT>;<CAP>;IGNORE

reorder-end

END LC_COLLATE

LC_MONETARY
int_curr_symbol       "<U0056><U004E><U0044><U0020>"
currency_symbol       "<U20AB>"
mon_decimal_point     "<U002C>"
mon_thousands_sep     "<U002E>"
mon_grouping          3;3
positive_sign         ""
negative_sign         "<U002D>"
int_frac_digits       0
frac_digits           0
p_cs_precedes         0
p_sep_by_space        0
n_cs_precedes         1
n_sep_by_space        0
p_sign_posn           1
n_sign_posn           1
END LC_MONETARY

LC_NUMERIC
decimal_point        "<U002C>"
thousands_sep        "<U002E>"
grouping             3;3
END LC_NUMERIC

LC_TIME
abday    "<U0043><U004E>";/
         "<U0054><U0032>";/
         "<U0054><U0033>";/
         "<U0054><U0034>";/
         "<U0054><U0035>";/
         "<U0054><U0036>";/
         "<U0054><U0037>"
day      "<U0043><U0068><U1EE7><U0020><U006E><U0068><U1EAD><U0074>";/
         "<U0054><U0068><U1EE9><U0020><U0068><U0061><U0069>";/
         "<U0054><U0068><U1EE9><U0020><U0062><U0061>";/
         "<U0054><U0068><U1EE9><U0020><U0074><U01B0>";/
         "<U0054><U0068><U1EE9><U0020><U006E><U0103><U006D>";/
         "<U0054><U0068><U1EE9><U0020><U0073><U00E1><U0