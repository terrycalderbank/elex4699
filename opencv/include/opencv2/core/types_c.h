comment_char %
escape_char  /
%
% Spanish Language Locale for Ecuador
% Source: RAP
% Address: Sankt Jo//rgens Alle 8
%    DK-1615 Ko//benhavn V, Danmark
% Contact: Keld Simonsen
% Email: Keld.Simonsen@dkuug.dk
% Tel: +45 - 31226543
% Fax: +45 - 33256543
% Language: es
% Territory: EC
% Revision: 4.4
% Date: 1997-03-18
% Application: general
% Users: general
% Repertoiremap: mnemonic.ds
% Charset: ISO-8859-1
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "Spanish locale for Ecuador"
source     "RAP"
address    "Sankt J<U00F8>rgens Alle 8, DK-1615 K<U00F8>benhavn V, Danmark"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "Spanish"
territory  "Ecuador"
revision   "1.0"
date       "2000-06-29"
%
category  "es_EC:2000";LC_IDENTIFICATION
category  "es_EC:2000";LC_CTYPE
category  "es_EC:2000";LC_COLLATE
category  "es_EC:2000";LC_TIME
category  "es_EC:2000";LC_NUMERIC
category  "es_EC:2000";LC_MONETARY
category  "es_EC:2000";LC_MESSAGES
category  "es_EC:2000";LC_PAPER
category  "es_EC:2000";LC_NAME
category  "es_EC:2000";LC_ADDRESS
category  "es_EC:2000";LC_TELEPHONE
category  "es_EC:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_COLLATE
copy "es_US"
END LC_COLLATE

LC_CTYPE
copy "es_ES"
END LC_CTYPE

LC_MESSAGES
copy "es_ES"
END LC_MESSAGES

LC_MONETARY
int_curr_symbol      "<U0055><U0053><U0044><U0020>"
currency_symbol      "<U0024>"
mon_decimal_point    "<U002C>"
mon_thousands_sep    "<U002E>"
mon_grouping         3;3
positive_sign        ""
negative_sign        "<U002D>"
int_frac_digits      2
frac_digits          2
p_cs_precedes        1
p_sep_by_space       1
n_cs_precedes        1
n_sep_by_space       1
p_sign_posn          1
n_sign_posn          1
END LC_MONETARY

LC_NUMERIC
copy "es_ES"
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
%  FIXME: found in CLDR
first_weekday 2
END LC_TIME

LC_PAPER
% FIXME
height   297
% FIXME
width    210
END LC_PAPER

LC_TELEPHONE
tel_int_fmt    "<U002B><U0025><U0063><U0020><U0025><U0061><U0020><U0025>/
<U006C>"
int_prefix     "<U0035><U0039><U0033>"
int_select     "<U0030><U0030>"
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
country_ab2   "<U0045><U0043>"
country_ab3   "<U0045><U0043><U0055>"
country_num   218
% EC
country_car    "<U0045><U0043>"
% Español
lang_name     "<U0045><U0073><U0070><U0061><U00F1><U006F><U006C>"
% es
lang_ab      "<U0065><U0073>"
% spa
lang_term    "<U0073><U0070><U0061>"
% spa
lang_lib    "<U0073><U0070><U0061>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     comment_char %
escape_char  /
%
% Russian Language Locale for Russia
% Source: RAP
% Address: Sankt Jo//rgens Alle 8
%    DK-1615 Ko//benhavn V, Danmark
% Contact: Keld Simonsen
% Email: Keld.Simonsen@dkuug.dk
% Tel: +45 - 31226543
% Fax: +45 - 33256543
% Language: ru
% Territory: RU
% Revision: 4.3
% Date: 1996-10-15
% Application: general
% Users: general
% Charset: ISO-8859-5
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "Russian locale for Russia"
source     "RAP"
address    "Sankt Jorgens Alle 8, DK-1615 Kobenhavn V, Danmark"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "Russian"
territory  "Russia"
revision   "1.0"
date       "2000-06-29"
%
category  "ru_RU:2000";LC_IDENTIFICATION
category  "ru_RU:2000";LC_CTYPE
category  "ru_RU:2000";LC_COLLATE
category  "ru_RU:2000";LC_TIME
category  "ru_RU:2000";LC_NUMERIC
category  "ru_RU:2000";LC_MONETARY
category  "ru_RU:2000";LC_MESSAGES
category  "ru_RU:2000";LC_PAPER
category  "ru_RU:2000";LC_NAME
category  "ru_RU:2000";LC_ADDRESS
category  "ru_RU:2000";LC_TELEPHONE
category  "ru_RU:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_COLLATE
copy "iso14651_t1"

% iso14651_t1 is missing Ukrainian ghe
collating-symbol <UKR-GHE>

reorder-after <CYR-GZHE>
<UKR-GHE>

reorder-after <U0453>
<U0491> <UKR-GHE>;<BAS>;<MIN>;IGNORE

reorder-after <U0403>
<U0490> <UKR-GHE>;<BAS>;<CAP>;IGNORE

reorder-end
END LC_COLLATE

LC_CTYPE
copy "i18n"

translit_start
include  "translit_combining";""
translit_end
END LC_CTYPE

LC_MESSAGES
yesexpr "<U005E><U005B><U0414><U0434><U0059><U0079><U005D><U002E><U002A>"
noexpr  "<U005E><U005B><U041D><U043D><U004E><U006E><U005D><U002E><U002A>"
END LC_MESSAGES

LC_MONETARY
int_curr_symbol           "<U0052><U0055><U0042><U0020>"
currency_symbol           "<U0440><U0443><U0431>"
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
decimal_point             "<U002C>"
thousands_sep             "<U00A0>"
grouping                  3;3
END LC_NUMERIC

LC_TIME
day     "<U0412><U043E><U0441><U043A><U0440><U0435><U0441><U0435><U043D><U044C><U0435>";/
        "<U041F><U043E><U043D><U0435><U0434><U0435><U043B><U044C><U043D><U0438><U043A>";/
        "<U0412><U0442><U043E><U0440><U043D><U0438><U043A>";/
        "<U0421><U0440><U0435><U0434><U0430>";/
        "<U0427><U0435><U0442><U0432><U0435><U0440><U0433>";/
        "<U041F><U044F><U0442><U043D><U0438><U0446><U0430>";/
        "<U0421><U0443><U0431><U0431><U043E><U0442><U0430>"
abday   "<U0412><U0441>";/
        "<U041F><U043D>";/
        "<U0412><U0442>";/
        "<U0421><U0440>";/
        "<U0427><U0442>";/
        "<U041F><U0442>";/
        "<U0421><U0431>"
mon     "<U042F><U043D><U0432><U0430><U0440><U044C>";/
        "<U0424><U0435><U0432><U0440><U0430><U043B><U044C>";/
        "<U041C><U0430><U0440><U0442>";/
        "<U0410><U043F><U0440><U0435><U043B><U044C>";/
        "<U041C><U0430><U0439>";/
        "<U0418><U044E><U043D><U044C>";/
        "<U0418><U044E><U043B><U044C>";/
        "<U0410><U0432><U0433><U0443><U0441><U0442>";/
        "<U0421><U0435><U043D><U0442><U044F><U0431><U0440><U044C>";/
        "<U041E><U043A><U0442><U044F><U0431><U0440><U044C>";/
        "<U041D><U043E><U044F><U0431><U0440><U044C>";/
        "<U0414><U0435><U043A><U0430><U0431><U0440><U044C>"
abmon   "<U044F><U043D><U0432>";/
        "<U0444><U0435><U0432>";/
        "<U043C><U0430><U0440>";/
        "<U0430><U043F><U0440>";/
        "<U043C><U0430><U0439>";/
        "<U0438><U044E><U043D>";/
        "<U0438><U044E><U043B>";/
        "<U0430><U0432><U0433>";/
        "<U0441><U0435><U043D>";/
        "<U043E><U043A><U0442>";/
        "<U043D><U043E><U044F>";/
        "<U0434><U0435><U043A>"
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
% FIXME
height   297
% FIXME
width    210
END LC_PAPER

LC_TELEPHONE
tel_int_fmt    "<U002B><U0025><U0063><U0020><U0025><U0061><U0020><U0025>/
<U006C>"
int_prefix     "<U0037>"
int_select     "<U0030><U007E><U0031><U0030>"
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
country_ab2 "<U0052><U0055>"
country_ab3 "<U0052><U0055><U0053>"
country_num 643
% RUS
country_car    "<U0052><U0055><U0053>"
% ru
lang_ab      "<U0072><U0075>"
% rus
lang_term    "<U0072><U0075><U0073>"
% rus
lang_lib    "<U0072><U0075><U0073>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           comment_char %
escape_char  /
%
% Hungarian Language Locale for Hungary
% Source: RAP
% Address: Sankt Jo//rgens Alle 8
%    DK-1615 Ko//benhavn V, Danmark
% Contact: Keld Simonsen
% Email: Keld.Simonsen@dkuug.dk
% Tel: +45 - 31226543
% Fax: +45 - 33256543
%
% Changes by Pablo Saratxaga
% - corrected alphabetical order
% - made all days abbreviations same lenght by appending spaces
% Email: srtxg@chanae.alphanet.ch
%
% Further changes by Egmont Koblinger, 2002/Jan/06, 2012/Jan/03
% - fixed tons of remaining bugs in alphabetical order
% - turned month names and similar stuff to lowercase
% - other small bugfixes
% Email: egmont@gmail.com
%
% Language: hu
% Territory: HU
% Revision: 4.7
% Date: 2001-01-29
% Application: general
% Users: general
% Charset: ISO-8859-2
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "Hungarian locale for Hungary"
source     "RAP"
address    "Sankt Jorgens Alle 8, DK-1615 Kobenhavn V, Danmark"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "Hungarian"
territory  "Hungary"
revision   "4.7"
date       "2001-01-29"
%
category  "hu_HU:2000";LC_IDENTIFICATION
category  "hu_HU:2000";LC_CTYPE
category  "hu_HU:2000";LC_COLLATE
category  "hu_HU:2000";LC_TIME
category  "hu_HU:2000";LC_NUMERIC
category  "hu_HU:2000";LC_MONETARY
category  "hu_HU:2000";LC_MESSAGES
category  "hu_HU:2000";LC_PAPER
category  "hu_HU:2000";LC_NAME
category  "hu_HU:2000";LC_ADDRESS
category  "hu_HU:2000";LC_TELEPHONE
category  "hu_HU:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_COLLATE
copy "iso14651_t1"

%% a b c cs d dz dzs e f g gy h i j k l ly m n ny o o: p q
%% r s sz t ty u u: v w x y z zs
%%
%% a' e' i' o' u' are sorted as if they were unaccented
%% o" and u" are sorted as if they were o: and u:
%%
%% When a compound letter is pronounced long, only the first
%% letter is duplicated in writing, e.g. cs+cs becomes ccs,
%% dzs+dzs becomes ddzs, and so on.
%% However, c+cs is also spelled as ccs, you need to speak
%% the language to tell which one is the case.
%% Tokenize ccs as <c_or_cs><cs>, and sort the tokens as
%% a b c c_or_cs cs d... This effectively assumes cs+cs
%% which is more frequent than c+cs, but guarantees that the
%% strings ccs and cscs don't collate as equal.

collating-symbol  <odouble>
collating-symbol  <udouble>

collating-symbol  <c_or_cs>
collating-symbol  <cs>
collating-element <C-S> from "<U0043><U0053>"
collating-element <C-s> from "<U0043><U0073>"
collating-element <c-S> from "<U0063><U0053>"
collating-element <c-s> from "<U0063><U0073>"
collating-element <C-C-S> from "<U0043><U0043><U0053>"
collating-element <C-C-s> from "<U0043><U0043><U0073>"
collating-element <C-c-S> from "<U0043><U0063><U0053>"
collating-element <C-c-s> from "<U0043><U0063><U0073>"
collating-element <c-C-S> from "<U0063><U0043><U0053>"
collating-element <c-C-s> from "<U0063><U0043><U0073>"
collating-element <c-c-S> from "<U0063><U0063><U0053>"
collating-element <c-c-s> from "<U0063><U0063><U0073>"

collating-symbol  <d_or_dz>
collating-symbol  <dz>
collating-element <D-Z> from "<U0044><U005A>"
collating-element <D-z> from "<U0044><U007A>"
collating-element <d-Z> from "<U0064><U005A>"
collating-element <d-z> from "<U0064><U007A>"
collating-element <D-D-Z> from "<U0044><U0044><U005A>"
collating-element <D-D-z> from "<U0044><U0044><U007A>"
collating-element <D-d-Z> from "<U0044><U0064><U005A>"
collating-element <D-d-z> from "<U0044><U0064><U007A>"
collating-element <d-D-Z> from "<U0064><U0044><U005A>"
collating-element <d-D-z> from "<U0064><U0044><U007A>"
collating-element <d-d-Z> from "<U0064><U0064><U005A>"
collating-element <d-d-z> from "<U0064><U0064><U007A>"

collating-symbol  <d_or_dzs>
collating-symbol  <dzs>
collating-element <D-Z-S> from "<U0044><U005A><U0053>"
collating-element <D-Z-s> from "<U0044><U005A><U0073>"
collating-element <D-z-S> from "<U0044><U007A><U0053>"
collating-element <D-z-s> from "<U0044><U007A><U0073>"
collating-element <d-Z-S> from "<U0064><U005A><U0053>"
collating-element <d-Z-s> from "<U0064><U005A><U0073>"
collating-element <d-z-S> from "<U0064><U007A><U0053>"
collating-element <d-z-s> from "<U0064><U007A><U0073>"
collating-element <D-D-Z-S> from "<U0044><U0044><U005A><U0053>"
collating-element <D-D-Z-s> from "<U0044><U0044><U005A><U0073>"
collating-element <D-D-z-S> from "<U0044><U0044><U007A><U0053>"
collating-element <D-D-z-s> from "<U0044><U0044><U007A><U0073>"
collating-element <D-d-Z-S> from "<U0044><U0064><U005A><U0053>"
collating-element <D-d-Z-s> from "<U0044><U0064><U005A><U0073>"
collating-element <D-d-z-S> from "<U0044><U0064><U007A><U0053>"
collating-element <D-d-z-s> from "<U0044><U0064><U007A><U0073>"
collating-element <d-D-Z-S> from "<U0064><U0044><U005A><U0053>"
collating-element <d-D-Z-s> from "<U0064><U0044><U005A><U0073>"
collating-element <d-D-z-S> from "<U0064><U0044><U007A><U0053>"
collating-element <d-D-z-s> from "<U0064><U0044><U007A><U0073>"
collating-element <d-d-Z-S> from "<U0064><U0064><U005A><U0053>"
collating-element <d-d-Z-s> from "<U0064><U0064><U005A><U0073>"
collating-element <d-d-z-S> from "<U0064><U0064><U007A><U0053>"
collating-element <d-d-z-s> from "<U0064><U0064><U007A><U0073>"

collating-symbol  <g_or_gy>
collating-symbol  <gy>
collating-element <G-Y> from "<U0047><U0059>"
collating-element <G-y> from "<U0047><U0079>"
collating-element <g-Y> from "<U0067><U0059>"
collating-element <g-y> from "<U0067><U0079>"
collating-element <G-G-Y> from "<U0047><U0047><U0059>"
collating-element <G-G-y> from "<U0047><U0047><U0079>"
collating-element <G-g-Y> from "<U0047><U0067><U0059>"
collating-element <G-g-y> from "<U0047><U0067><U0079>"
collating-element <g-G-Y> from "<U0067><U0047><U0059>"
collating-element <g-G-y> from "<U0067><U0047><U0079>"
collating-element <g-g-Y> from "<U0067><U0067><U0059>"
collating-element <g-g-y> from "<U0067><U0067><U0079>"

collating-symbol  <l_or_ly>
collating-symbol  <ly>
collating-element <L-Y> from "<U004C><U0059>"
collating-element <L-y> from "<U004C><U0079>"
collating-element <l-Y> from "<U006C><U0059>"
collating-element <l-y> from "<U006C><U0079>"
collating-element <L-L-Y> from "<U004C><U004C><U0059>"
collating-element <L-L-y> from "<U004C><U004C><U0079>"
collating-element <L-l-Y> from "<U004C><U006C><U0059>"
collating-element <L-l-y> from "<U004C><U006C><U0079>"
collating-element <l-L-Y> from "<U006C><U004C><U0059>"
collating-element <l-L-y> from "<U006C><U004C><U0079>"
collating-element <l-l-Y> from "<U006C><U006C><U0059>"
collating-element <l-l-y> from "<U006C><U006C><U0079>"

collating-symbol  <n_or_ny>
collating-symbol  <ny>
collating-element <N-Y> from "<U004E><U0059>"
collating-element <N-y> from "<U004E><U0079>"
collating-element <n-Y> from "<U006E><U0059>"
collating-element <n-y> from "<U006E><U0079>"
collating-element <N-N-Y> from "<U004E><U004E><U0059>"
collating-element <N-N-y> from "<U004E><U004E><U0079>"
collating-element <N-n-Y> from "<U004E><U006E><U0059>"
collating-element <N-n-y> from "<U004E><U006E><U0079>"
collating-element <n-N-Y> from "<U006E><U004E><U0059>"
collating-element <n-N-y> from "<U006E><U004E><U0079>"
collating-element <n-n-Y> from "<U006E><U006E><U0059>"
collating-element <n-n-y> from "<U006E><U006E><U0079>"

collating-symbol  <s_or_sz>
collating-symbol  <sz>
collating-element <S-Z> from "<U0053><U005A>"
collating-element <S-z> from "<U0053><U007A>"
collating-element <s-Z> from "<U0073><U005A>"
collating-element <s-z> from "<U0073><U007A>"
collating-element <S-S-Z> from "<U0053><U0053><U005A>"
collating-element <S-S-z> from "<U0053><U0053><U007A>"
collating-element <S-s-Z> from "<U0053><U0073><U005A>"
collating-element <S-s-z> from "<U0053><U0073><U007A>"
collating-element <s-S-Z> from "<U0073><U0053><U005A>"
collating-element <s-S-z> from "<U0073><U0053><U007A>"
collating-element <s-s-Z> from "<U0073><U0073><U005A>"
collating-element <s-s-z> from "<U0073><U0073><U007A>"

collating-symbol  <t_or_ty>
collating-symbol  <ty>
collating-element <T-Y> from "<U0054><U0059>"
collating-element <T-y> from "<U0054><U0079>"
collating-element <t-Y> from "<U0074><U0059>"
collating-element <t-y> from "<U0074><U0079>"
collating-element <T-T-Y> from "<U0054><U0054><U0059>"
collating-element <T-T-y> from "<U0054><U0054><U0079>"
collating-element <T-t-Y> from "<U0054><U0074><U0059>"
collating-element <T-t-y> from "<U0054><U0074><U0079>"
collating-element <t-T-Y> from "<U0074><U0054><U0059>"
collating-element <t-T-y> from "<U0074><U0054><U0079>"
collating-element <t-t-Y> from "<U0074><U0074><U0059>"
collating-element <t-t-y> from "<U0074><U0074><U0079>"

collating-symbol  <z_or_zs>
collating-symbol  <zs>
collating-element <Z-S> from "<U005A><U0053>"
collating-element <Z-s> from "<U005A><U0073>"
collating-element <z-S> from "<U007A><U0053>"
collating-element <z-s> from "<U007A><U0073>"
collating-element <Z-Z-S> from "<U005A><U005A><U0053>"
collating-element <Z-Z-s> from "<U005A><U005A><U0073>"
collating-element <Z-z-S> from "<U005A><U007A><U0053>"
collating-element <Z-z-s> from "<U005A><U007A><U0073>"
collating-element <z-Z-S> from "<U007A><U005A><U0053>"
collating-element <z-Z-s> from "<U007A><U005A><U0073>"
collating-element <z-z-S> from "<U007A><U007A><U0053>"
collating-element <z-z-s> from "<U007A><U007A><U0073>"

collating-symbol <CAP-MIN>
collating-symbol <MIN-CAP>
collating-symbol <CAP-CAP-CAP>
collating-symbol <CAP-CAP-MIN>
collating-symbol <CAP-MIN-CAP>
collating-symbol <CAP-MIN-MIN>
collating-symbol <MIN-CAP-CAP>
collating-symbol <MIN-CAP-MIN>
collating-symbol <MIN-MIN-CAP>
collating-symbol <MIN-MIN-MIN>

reorder-after <MIN>
<MIN-CAP>
<MIN-MIN-MIN>
<MIN-MIN-CAP>
<MIN-CAP-MIN>
<MIN-CAP-CAP>

reorder-after <CAP>
<CAP-MIN>
<CAP-MIN-MIN>
<CAP-MIN-CAP>
<CAP-CAP-MIN>
<CAP-CAP-CAP>

reorder-after <c>
<c_or_cs>
<cs>
reorder-after <d>
<d_or_dz>
<d_or_dzs>
<dz>
<dzs>
reorder-after <g>
<g_or_gy>
<gy>
reorder-after <l>
<l_or_ly>
<ly>
reorder-after <n>
<n_or_ny>
<ny>
reorder-after <o>
<odouble>
reorder-after <s>
<s_or_sz>
<sz>
reorder-after <t>
<t_or_ty>
<ty>
reorder-after <u>
<udouble>
reorder-after <z>
<z_or_zs>
<zs>

reorder-after <o>
<U00F6>	<odouble>;<REU>;<MIN>;IGNORE
<U0151>	<odouble>;<DAC>;<MIN>;IGNORE
<U00D6>	<odouble>;<REU>;<CAP>;IGNORE
<U0150>	<odouble>;<DAC>;<CAP>;IGNORE

reorder-after <u>
<U00FC>	<udouble>;<REU>;<MIN>;IGNORE
<U0171>	<udouble>;<DAC>;<MIN>;IGNORE
<U00DC>	<udouble>;<REU>;<CAP>;IGNORE
<U0170>	<udouble>;<DAC>;<CAP>;IGNORE

reorder-after <U0043>
<C-S>		<cs>;<BAS>;<CAP>;IGNORE
<C-s>		<cs>;<BAS>;<CAP-MIN>;IGNORE
<C-C-S>		"<c_or_cs><cs>";"<BAS><BAS>";"<CAP><CAP>";IGNORE
<C-C-s>		"<c_or_cs><cs>";"<BAS><BAS>";"<CAP><CAP-MIN>";IGNORE
<C-c-S>		"<c_or_cs><cs>";"<BAS><BAS>";"<CAP><MIN-CAP>";IGNORE
<C-c-s>		"<c_or_cs><cs>";"<BAS><BAS>";"<CAP><MIN>";IGNORE
reorder-after <U0063>
<c-S>		<cs>;<BAS>;<MIN-CAP>;IGNORE
<c-s>		<cs>;<BAS>;<MIN>;IGNORE
<c-C-S>		"<c_or_cs><cs>";"<BAS><BAS>";"<MIN><CAP>";IGNORE
<c-C-s>		"<c_or_cs><cs>";"<BAS><BAS>";"<MIN><CAP-MIN>";IGNORE
<c-c-S>		"<c_or_cs><cs>";"<BAS><BAS>";"<MIN><MIN-CAP>";IGNORE
<c-c-s>		"<c_or_cs><cs>";"<BAS><BAS>";"<MIN><MIN>";IGNORE

reorder-after <U0044>
<D-Z>		<dz>;<BAS>;<CAP>;IGNORE
<D-z>		<dz>;<BAS>;<CAP-MIN>;IGNORE
<D-D-Z>		"<d_or_dz><dz>";"<BAS><BAS>";"<CAP><CAP>";IGNORE
<D-D-z>		"<d_or_dz><dz>";"<BAS><BAS>";"<CAP><CAP-MIN>";IGNORE
<D-d-Z>		"<d_or_dz><dz>";"<BAS><BAS>";"<CAP><MIN-CAP>";IGNORE
<D-d-z>		"<d_or_dz><dz>";"<BAS><BAS>";"<CAP><MIN>";IGNORE
reorder-after <U0064>
<d-Z>		<dz>;<BAS>;<MIN-CAP>;IGNORE
<d-z>		<dz>;<BAS>;<MIN>;IGNORE
<d-D-Z>		"<d_or_dz><dz>";"<BAS><BAS>";"<MIN><CAP>";IGNORE
<d-D-z>		"<d_or_dz><dz>";"<BAS><BAS>";"<MIN><CAP-MIN>";IGNORE
<d-d-Z>		"<d_or_dz><dz>";"<BAS><BAS>";"<MIN><MIN-CAP>";IGNORE
<d-d-z>		"<d_or_dz><dz>";"<BAS><BAS>";"<MIN><MIN>";IGNORE

reorder-after <U0044>
<D-Z-S>		<dzs>;<BAS>;<CAP-CAP-CAP>;IGNORE
<D-Z-s>		<dzs>;<BAS>;<CAP-CAP-MIN>;IGNORE
<D-z-S>		<dzs>;<BAS>;<CAP-MIN-CAP>;IGNORE
<D-z-s>		<dzs>;<BAS>;<CAP-MIN-MIN>;IGNORE
<D-D-Z-S>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<CAP><CAP-CAP-CAP>";IGNORE
<D-D-Z-s>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<CAP><CAP-CAP-MIN>";IGNORE
<D-D-z-S>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<CAP><CAP-MIN-CAP>";IGNORE
<D-D-z-s>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<CAP><CAP-MIN-MIN>";IGNORE
<D-d-Z-S>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<CAP><CAP-CAP-CAP>";IGNORE
<D-d-Z-s>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<CAP><CAP-CAP-MIN>";IGNORE
<D-d-z-S>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<CAP><CAP-MIN-CAP>";IGNORE
<D-d-z-s>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<CAP><CAP-MIN-MIN>";IGNORE
reorder-after <U0064>
<d-Z-S>		<dzs>;<BAS>;<MIN-CAP-CAP>;IGNORE
<d-Z-s>		<dzs>;<BAS>;<MIN-CAP-MIN>;IGNORE
<d-z-S>		<dzs>;<BAS>;<MIN-MIN-CAP>;IGNORE
<d-z-s>		<dzs>;<BAS>;<MIN-MIN-MIN>;IGNORE
<d-D-Z-S>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<MIN><CAP-CAP-CAP>";IGNORE
<d-D-Z-s>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<MIN><CAP-CAP-MIN>";IGNORE
<d-D-z-S>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<MIN><CAP-MIN-CAP>";IGNORE
<d-D-z-s>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<MIN><CAP-MIN-MIN>";IGNORE
<d-d-Z-S>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<MIN><CAP-CAP-CAP>";IGNORE
<d-d-Z-s>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<MIN><CAP-CAP-MIN>";IGNORE
<d-d-z-S>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<MIN><CAP-MIN-CAP>";IGNORE
<d-d-z-s>	"<d_or_dzs><dzs>";"<BAS><BAS>";"<MIN><CAP-MIN-MIN>";IGNORE

reorder-after <U0047>
<G-Y>		<gy>;<BAS>;<CAP>;IGNORE
<G-y>		<gy>;<BAS>;<CAP-MIN>;IGNORE
<G-G-Y>		"<g_or_gy><gy>";"<BAS><BAS>";"<CAP><CAP>";IGNORE
<G-G-y>		"<g_or_gy><gy>";"<BAS><BAS>";"<CAP><CAP-MIN>";IGNORE
<G-g-Y>		"<g_or_gy><gy>";"<BAS><BAS>";"<CAP><MIN-CAP>";IGNORE
<G-g-y>		"<g_or_gy><gy>";"<BAS><BAS>";"<CAP><MIN>";IGNORE
reorder-after <U0067>
<g-y>		<gy>;<BAS>;<MIN>;IGNORE
<g-Y>		<gy>;<BAS>;<MIN-CAP>;IGNORE
<g-G-Y>		"<g_or_gy><gy>";"<BAS><BAS>";"<MIN><CAP>";IGNORE
<g-G-y>		"<g_or_gy><gy>";"<BAS><BAS>";"<MIN><CAP-MIN>";IGNORE
<g-g-Y>		"<g_or_gy><gy>";"<BAS><BAS>";"<MIN><MIN-CAP>";IGNORE
<g-g-y>		"<g_or_gy><gy>";"<BAS><BAS>";"<MIN><MIN>";IGNORE

reorder-after <U004C>
<L-Y>		<ly>;<BAS>;<CAP>;IGNORE
<L-y>		<ly>;<BAS>;<CAP-MIN>;IGNORE
<L-L-Y>		"<l_or_ly><ly>";"<BAS><BAS>";"<CAP><CAP>";IGNORE
<L-L-y>		"<l_or_ly><ly>";"<BAS><BAS>";"<CAP><CAP-MIN>";IGNORE
<L-l-Y>		"<l_or_ly><ly>";"<BAS><BAS>";"<CAP><MIN-CAP>";IGNORE
<L-l-y>		"<l_or_ly><ly>";"<BAS><BAS>";"<CAP><MIN>";IGNORE
reorder-after <U006C>
<l-y>		<ly>;<BAS>;<MIN>;IGNORE
<l-Y>		<ly>;<BAS>;<MIN-CAP>;IGNORE
<l-L-Y>		"<l_or_ly><ly>";"<BAS><BAS>";"<MIN><CAP>";IGNORE
<l-L-y>		"<l_or_ly><ly>";"<BAS><BAS>";"<MIN><CAP-MIN>";IGNORE
<l-l-Y>		"<l_or_ly><ly>";"<BAS><BAS>";"<MIN><MIN-CAP>";IGNORE
<l-l-y>		"<l_or_ly><ly>";"<BAS><BAS>";"<MIN><MIN>";IGNORE

reorder-after <U004E>
<N-Y>		<ny>;<BAS>;<CAP>;IGNORE
<N-y>		<ny>;<BAS>;<CAP-MIN>;IGNORE
<N-N-Y>		"<n_or_ny><ny>";"<BAS><BAS>";"<CAP><CAP>";IGNORE
<N-N-y>		"<n_or_ny><ny>";"<BAS><BAS>";"<CAP><CAP-MIN>";IGNORE
<N-n-Y>		"<n_or_ny><ny>";"<BAS><BAS>";"<CAP><MIN-CAP>";IGNORE
<N-n-y>		"<n_or_ny><ny>";"<BAS><BAS>";"<CAP><MIN>";IGNORE
reorder-after <U006E>
<n-y>		<ny>;<BAS>;<MIN>;IGNORE
<n-Y>		<ny>;<BAS>;<MIN-CAP>;IGNORE
<n-N-Y>		"<n_or_ny><ny>";"<BAS><BAS>";"<MIN><CAP>";IGNORE
<n-N-y>		"<n_or_ny><ny>";"<BAS><BAS>";"<MIN><CAP-MIN>";IGNORE
<n-n-Y>		"<n_or_ny><ny>";"<BAS><BAS>";"<MIN><MIN-CAP>";IGNORE
<n-n-y>		"<n_or_ny><ny>";"<BAS><BAS>";"<MIN><MIN>";IGNORE

reorder-after <U0053>
<S-Z>		<sz>;<BAS>;<CAP>;IGNORE
<S-z>		<sz>;<BAS>;<CAP-MIN>;IGNORE
<S-S-Z>		"<s_or_sz><sz>";"<BAS><BAS>";"<CAP><CAP>";IGNORE
<S-S-z>		"<s_or_sz><sz>";"<BAS><BAS>";"<CAP><CAP-MIN>";IGNORE
<S-s-Z>		"<s_or_sz><sz>";"<BAS><BAS>";"<CAP><MIN-CAP>";IGNORE
<S-s-z>		"<s_or_sz><sz>";"<BAS><BAS>";"<CAP><MIN>";IGNORE
reorder-after <U0073>
<s-Z>		<sz>;<BAS>;<MIN-CAP>;IGNORE
<s-z>		<sz>;<BAS>;<MIN>;IGNORE
<s-S-Z>		"<s_or_sz><sz>";"<BAS><BAS>";"<MIN><CAP>";IGNORE
<s-S-z>		"<s_or_sz><sz>";"<BAS><BAS>";"<MIN><CAP-MIN>";IGNORE
<s-s-Z>		"<s_or_sz><sz>";"<BAS><BAS>";"<MIN><MIN-CAP>";IGNORE
<s-s-z>		"<s_or_sz><sz>";"<BAS><BAS>";"<MIN><MIN>";IGNORE

reorder-after <U0054>
<T-Y>		<ty>;<BAS>;<CAP>;IGNORE
<T-y>		<ty>;<BAS>;<CAP-MIN>;IGNORE
<T-T-Y>		"<t_or_ty><ty>";"<BAS><BAS>";"<CAP><CAP>";IGNORE
<T-T-y>		"<t_or_ty><ty>";"<BAS><BAS>";"<CAP><CAP-MIN>";IGNORE
<T-t-Y>		"<t_or_ty><ty>";"<BAS><BAS>";"<CAP><MIN-CAP>";IGNORE
<T-t-y>		"<t_or_ty><ty>";"<BAS><BAS>";"<CAP><MIN>";IGNORE
reorder-after <U0074>
<t-Y>		<ty>;<BAS>;<MIN-CAP>;IGNORE
<t-y>		<ty>;<BAS>;<MIN>;IGNORE
<t-T-Y>		"<t_or_ty><ty>";"<BAS><BAS>";"<MIN><CAP>";IGNORE
<t-T-y>		"<t_or_ty><ty>";"<BAS><BAS>";"<MIN><CAP-MIN>";IGNORE
<t-t-Y>		"<t_or_ty><ty>";"<BAS><BAS>";"<MIN><MIN-CAP>";IGNORE
<t-t-y>		"<t_or_ty><ty>";"<BAS><BAS>";"<MIN><MIN>";IGNORE

reorder-after <U005A>
<Z-S>		<zs>;<BAS>;<CAP>;IGNORE
<Z-s>		<zs>;<BAS>;<CAP-MIN>;IGNORE
<Z-Z-S>		"<z_or_zs><zs>";"<BAS><BAS>";"<CAP><CAP>";IGNORE
<Z-Z-s>		"<z_or_zs><zs>";"<BAS><BAS>";"<CAP><CAP-MIN>";IGNORE
<Z-z-S>		"<z_or_zs><zs>";"<BAS><BAS>";"<CAP><MIN-CAP>";IGNORE
<Z-z-s>		"<z_or_zs><zs>";"<BAS><BAS>";"<CAP><MIN>";IGNORE
reorder-after <U007A>
<z-S>		<zs>;<BAS>;<MIN-CAP>;IGNORE
<z-s>		<zs>;<BAS>;<MIN>;IGNORE
<z-Z-S>		"<z_or_zs><zs>";"<BAS><BAS>";"<MIN><CAP>";IGNORE
<z-Z-s>		"<z_or_zs><zs>";"<BAS><BAS>";"<MIN><CAP-MIN>";IGNORE
<z-z-S>		"<z_or_zs><zs>";"<BAS><BAS>";"<MIN><MIN-CAP>";IGNORE
<z-z-s>		"<z_or_zs><zs>";"<BAS><BAS>";"<MIN><MIN>";IGNORE

reorder-end

END LC_COLLATE

LC_CTYPE
copy "i18n"

translit_start

include "translit_combining";""

<U00C1> "<U0041><U0301>";"<U0041><U00B4>";"<U0041><U0027>"
<U00C9> "<U0045><U0301>";"<U0045><U00B4>";"<U0045><U0027>"
<U00CD> "<U0049><U0301>";"<U0049><U00B4>";"<U0049><U0027>"
<U00D3> "<U004F><U0301>";"<U004F><U00B4>";"<U004F><U0027>"
<U00D6> "<U004F><U0308>";"<U004F><U00A8>";"<U004F><U003A>"
<U0150> "<U004F><U030B>";"<U004F><U02DD>";"<U004F><U0022>"
<U00DA> "<U0055><U0301>";"<U0055><U00B4>";"<U0055><U0027>"
<U00DC> "<U0055><U0308>";"<U0055><U00A8>";"<U0055><U003A>"
<U0170> "<U0055><U030B>";"<U0055><U02DD>";"<U0055><U0022>"

<U00E1> "<U0061><U0301>";"<U0061><U00B4>";"<U0061><U0027>"
<U00E9> "<U0065><U0301>";"<U0065><U00B4>";"<U0065><U0027>"
<U00ED> "<U0069><U0301>";"<U0069><U00B4>";"<U0069><U0027>"
<U00F3> "<U006F><U0301>";"<U006F><U00B4>";"<U006F><U0027>"
<U00F6> "<U006F><U0308>";"<U006F><U00A8>";"<U006F><U003A>"
<U0151> "<U006F><U030B>";"<U006F><U02DD>";"<U006F><U0022>"
<U00FA> "<U0075><U0301>";"<U0075><U00B4>";"<U0075><U0027>"
<U00FC> "<U0075><U0308>";"<U0075><U00A8>";"<U0075><U003A>"
<U0171> "<U0075><U030B>";"<U0075><U02DD>";"<U0075><U0022>"

translit_end

END LC_CTYPE

LC_MESSAGES
yesexpr "<U005E><U005B><U0049><U0069><U0059><U0079><U005D><U002E><U002A>"
noexpr  "<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
END LC_MESSAGES

LC_MONETARY
int_curr_symbol           "<U0048><U0055><U0046><U0020>"
currency_symbol           "<U0046><U0074>"
mon_decimal_point         "<U002C>"
mon_thousands_sep         "<U002E>"
mon_grouping              3;3
positive_sign             ""
negative_sign             "<U002D>"
int_frac_digits           2
frac_digits               2
int_p_cs_precedes         1
int_p_sep_by_space        1
int_n_cs_precedes         1
int_n_sep_by_space        1
int_p_sign_posn           1
int_n_sign_posn           1
p_cs_precedes             0
p_sep_by_space            1
n_cs_precedes             0
n_sep_by_space            1
p_sign_posn               1
n_sign_posn               1
END LC_MONETARY

LC_NUMERIC
decimal_point             "<U002C>"
thousands_sep             "<U002E>"
grouping                  3;3
END LC_NUMERIC

LC_TIME
abday   "<U0076>";"<U0068>";"<U006B>";"<U0073><U007A><U0065>";/
        "<U0063><U0073>";"<U0070>";"<U0073><U007A><U006F>"
day     "<U0076><U0061><U0073><U00E1><U0072><U006E><U0061><U0070>";/
        "<U0068><U00E9><U0074><U0066><U0151>";/
        "<U006B><U0065><U0064><U0064>";/
        "<U0073><U007A><U0065><U0072><U0064><U0061>";/
        "<U0063><U0073><U00FC><U0074><U00F6><U0072><U0074><U00F6><U006B>";/
        "<U0070><U00E9><U006E><U0074><U0065><U006B>";/
        "<U0073><U007A><U006F><U006D><U0062><U0061><U0074>"
abmon   "<U006A><U0061><U006E>";"<U0066><U0065><U0062><U0072>";/
        "<U006D><U00E1><U0072><U0063>";"<U00E1><U0070><U0072>";/
        "<U006D><U00E1><U006A>";"<U006A><U00FA><U006E>";/
        "<U006A><U00FA><U006C>";"<U0061><U0075><U0067>";/
        "<U0073><U007A><U0065><U0070><U0074>";"<U006F><U006B><U0074>";/
        "<U006E><U006F><U0076>";"<U0064><U0065><U0063>"
mon     "<U006A><U0061><U006E><U0075><U00E1><U0072>";/
        "<U0066><U0065><U0062><U0072><U0075><U00E1><U0072>";/
        "<U006D><U00E1><U0072><U0063><U0069><U0075><U0073>";/
        "<U00E1><U0070><U0072><U0069><U006C><U0069><U0073>";/
        "<U006D><U00E1><U006A><U0075><U0073>";/
        "<U006A><U00FA><U006E><U0069><U0075><U0073>";/
        "<U006A><U00FA><U006C><U0069><U0075><U0073>";/
        "<U0061><U0075><U0067><U0075><U0073><U007A><U0074><U0075><U0073>";/
        "<U0073><U007A><U0065><U0070><U0074><U0065><U006D><U0062><U0065><U0072>";/
        "<U006F><U006B><U0074><U00F3><U0062><U0065><U0072>";/
        "<U006E><U006F><U0076><U0065><U006D><U0062><U0065><U0072>";/
        "<U0064><U0065><U0063><U0065><U006D><U0062><U0065><U0072>"
d_t_fmt "<U0025><U0059><U002E><U0020><U0025><U0062><U002E><U0020><U0025><U0065><U002E><U002C>/
<U0020><U0025><U0041><U002C><U0020><U0025><U0048><U002E><U0025><U004D><U002E><U0025><U0053><U0020><U0025><U005A>"
d_fmt   "<U0025><U0059><U002D><U0025><U006D><U002D><U0025><U0064>"
t_fmt   "<U0025><U0048><U002E><U0025><U004D><U002E><U0025><U0053>"
am_pm   "";""
t_fmt_ampm "<U0025><U0048><U002E><U0025><U004D><U002E><U0025><U0053>"
date_fmt "<U0025><U0059><U002E><U0020><U0025><U0062><U002E><U0020><U0025><U0065><U002E><U002C>/
<U0020><U0025><U0041><U002C><U0020><U0025><U0048><U002E><U0025><U004D><U002E><U0025><U0053><U0020><U0025><U005A>"
week     7;19971130;4
first_weekday	2
first_workday	2
END LC_TIME

LC_PAPER
height   297
width    210
END LC_PAPER

LC_TELEPHONE
tel_int_fmt    "<U002B><U0025><U0063><U0020><U0025><U0061><U0020><U0025>/
<U006C>"
int_prefix     "<U0033><U0036>"
int_select     "<U0030><U0030>"
END LC_TELEPHONE

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_NAME
name_fmt    "<U0025><U0064><U0025><U0074><U0025><U0066><U0025><U0074>/
<U0025><U006D><U0025><U0074><U0025><U0067>"
END LC_NAME

LC_ADDRESS
postal_fmt    "<U0025><U0066><U0025><U004E><U0025><U0061><U0025><U004E>/
<U0025><U0064><U0025><U004E><U0025><U0062><U0025><U004E><U0025><U0073>/
<U0020><U0025><U0068><U0020><U0025><U0065><U0020><U0025><U0072><U0025>/
<U004E><U0025><U007A><U0020><U0025><U0054><U0025>/
<U004E><U0025><U0063><U0025><U004E>"
country_ab2 "<U0048><U0055>"
country_ab3 "<U0048><U0055><U004E>"
country_num 348
% H
country_car    "<U0048>"
% magyar
lang_name    "<U006D><U0061><U0067><U0079><U0061><U0072>"
% hu
lang_ab      "<U0068><U0075>"
% hun
lang_term    "<U0068><U0075><U006E>"
% hun
lang_lib    "<U0068><U0075><U006E>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               comment_char %
escape_char /
% Charset: UTF-8
% Authors:
% 2011-03-07, locales@kamusi.org
% 2011-03-07, info@2xlibre.net
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "Swahili locale for Kenya"
source     "Kamusi Project"
contact    "Martin Benjamin"
email      "locales@kamusi.org"
tel        ""
fax        ""
language   "sw"
territory  "Kenya"
revision   "1.0"
date       "2011-03-07"
%
category  "sw_KE:2000";LC_IDENTIFICATION
category  "sw_KE:2000";LC_CTYPE
category  "sw_KE:2000";LC_COLLATE
category  "sw_KE:2000";LC_TIME
category  "sw_KE:2000";LC_NUMERIC
category  "sw_KE:2000";LC_MONETARY
category  "sw_KE:2000";LC_PAPER
category  "sw_KE:2000";LC_MEASUREMENT
category  "sw_KE:2000";LC_MESSAGES
category  "sw_KE:2000";LC_NAME
category  "sw_KE:2000";LC_ADDRESS
category  "sw_KE:2000";LC_TELEPHONE
END LC_IDENTIFICATION

LC_CTYPE
copy "i18n"

translit_start
include "translit_combining";""
translit_end
END LC_CTYPE

LC_COLLATE
copy "iso14651_t1"
END LC_COLLATE

LC_TIME
% Januari, Februari, Machi, Aprili, Mei, Juni, Julai, Agosti, Septemba, Oktoba, Novemba, Desemba
mon  "<U004A><U0061><U006E><U0075><U0061><U0072><U0069>";/
     "<U0046><U0065><U0062><U0072><U0075><U0061><U0072><U0069>";/
     "<U004D><U0061><U0063><U0068><U0069>";/
     "<U0041><U0070><U0072><U0069><U006C><U0069>";/
     "<U004D><U0065><U0069>";/
     "<U004A><U0075><U006E><U0069>";/
     "<U004A><U0075><U006C><U0061><U0069>";/
     "<U0041><U0067><U006F><U0073><U0074><U0069>";/
     "<U0053><U0065><U0070><U0074><U0065><U006D><U0062><U0061>";/
     "<U004F><U006B><U0074><U006F><U0062><U0061>";/
     "<U004E><U006F><U0076><U0065><U006D><U0062><U0061>";/
     "<U0044><U0065><U0073><U0065><U006D><U0062><U0061>"
% Jan, Feb, Mac, Apr, Mei, Jun, Jul, Ago, Sep, Okt, Nov, Des
abmon  "<U004A><U0061><U006E>";/
       "<U0046><U0065><U0062>";/
       "<U004D><U0061><U0063>";/
       "<U0041><U0070><U0072>";/
       "<U004D><U0065><U0069>";/
       "<U004A><U0075><U006E>";/
       "<U004A><U0075><U006C>";/
       "<U0041><U0067><U006F>";/
       "<U0053><U0065><U0070>";/
       "<U004F><U006B><U0074>";/
       "<U004E><U006F><U0076>";/
       "<U0044><U0065><U0073>"
% Jumapili, Jumatatu, Jumanne, Jumatano, Alhamisi, Ijumaa, Jumamosi
day  "<U004A><U0075><U006D><U0061><U0070><U0069><U006C><U0069>";/
     "<U004A><U0075><U006D><U0061><U0074><U0061><U0074><U0075>";/
     "<U004A><U0075><U006D><U0061><U006E><U006E><U0065>";/
     "<U004A><U0075><U006D><U0061><U0074><U0061><U006E><U006F>";/
     "<U0041><U006C><U0068><U0061><U006D><U0069><U0073><U0069>";/
     "<U0049><U006A><U0075><U006D><U0061><U0061>";/
     "<U004A><U0075><U006D><U0061><U006D><U006F><U0073><U0069>"
% J2, J3, J4, J5, Alh, Ij, J1
abday  "<U004A><U0032>";/
       "<U004A><U0033>";/
       "<U004A><U0034>";/
       "<U004A><U0035>";/
       "<U0041><U006C><U0068>";/
       "<U0049><U006A>";/
       "<U004A><U0031>"
week    7;19971130;4
first_weekday 2
first_workday 2
% %e %B %Y %I:%M:%S %p %Z
d_t_fmt  "<U0025><U0065><U0020><U0025><U0042><U0020><U0025><U0059><U0020><U0025><U0049>/
<U003A><U0025><U004D><U003A><U0025><U0053><U0020><U0025><U0070><U0020><U0025><U005A>"
% %d/%m/%Y
d_fmt  "<U0025><U0064><U002F><U0025><U006D><U002F><U0025><U0059>"
% %I:%M:%S %p
t_fmt  "<U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053><U0020><U0025><U0070>"
% asubuhi, alasiri
am_pm  "<U0061><U0073><U0075><U0062><U0075><U0068><U0069>";/
       "<U0061><U006C><U0061><U0073><U0069><U0072><U0069>"
% %I:%M:%S %p
t_fmt_ampm  "<U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053><U0020><U0025><U0070>"
END LC_TIME

LC_NUMERIC
copy "om_KE"
END LC_NUMERIC

LC_MONETARY
copy "om_KE"
END LC_MONETARY

LC_PAPER
copy "om_KE"
END LC_PAPER

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_MESSAGES
% ^[nNyY].*
yesexpr  "<U005E><U005B><U006E><U004E><U0079><U0059><U005D><U002E><U002A>"
% ^[hHlL].*
noexpr  "<U005E><U005B><U0068><U0048><U006C><U004C><U005D><U002E><U002A>"
END LC_MESSAGES

LC_NAME
% %p%t%g%m%t%f
name_fmt  "<U0025><U0070><U0025><U0074><U0025><U0067><U0025><U006D><U0025><U0074><U0025><U0066>"
% Bw.
name_mr  "<U0042><U0077><U002E>"
% Bi.
name_ms  "<U0042><U0069><U002E>"
END LC_NAME

LC_ADDRESS
% %a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N
postal_fmt  "<U0025><U0061><U0025><U004E><U0025><U0066><U0025><U004E><U0025><U0064><U0025><U004E>/
<U0025><U0062><U0025><U004E><U0025><U0068><U0020><U0025><U0073><U0020><U0025><U0065><U0020><U0025>/
<U0072><U0025><U004E><U0025><U0054><U002C><U0020><U0025><U0053><U0020><U0025><U007A><U0025><U004E>/
<U0025><U0063><U0025><U004E>"
% Kenya
country_name  "<U004B><U0065><U006E><U0079><U0061>"
% KE
country_post  "<U004B><U0045>"
% KE
country_ab2   "<U004B><U0045>"
% KEN
country_ab3   "<U004B><U0045><U004E>"
country_num   404
% EAK
country_car  "<U0045><U0041><U004B>"
% Kiswahili
lang_name     "<U004B><U0069><U0073><U0077><U0061><U0068><U0069><U006C><U0069>"
% sw
lang_ab      "<U0073><U0077>"
% swa
lang_term    "<U0073><U0077><U0061>"
% swa
lang_lib     "<U0073><U0077><U0061>"
END LC_ADDRESS

LC_TELEPHONE
% %c %a %l
tel_int_fmt  "<U0025><U0063><U0020><U0025><U0061><U0020><U0025><U006C>"
% %A %l
tel_dom_fmt  "<U0025><U0041><U0020><U0025><U006C>"
% 000
int_select   "<U0030><U0030><U0030>"
% 254
int_prefix   "<U0032><U0035><U0034>"
END LC_TELEPHONE
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 comment_char    %
escape_char     /
% Bodo language locale for India.
% Contributed by Pravin Satpute <psatpute@redhat.com> and Sanjib Narzary <alayaran@gmail.com>
% Reference http://www.unicode.org/cldr/trac/browser/trunk/common/main/brx.xml

LC_IDENTIFICATION
title      "Bodo language locale for India"
source     "Red Hat Pune"
address    "Level 1, Tower X, Cybercity, Magarpatta City, Hadapsar, Pune-411013 "
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "Bodo"
territory  "India"
revision   "1.0"
date       "2011-10-17"
%
category  "brx_IN:2011";LC_IDENTIFICATION
category  "brx_IN:2011";LC_CTYPE
category  "brx_IN:2011";LC_COLLATE
category  "brx_IN:2011";LC_TIME
category  "brx_IN:2011";LC_NUMERIC
category  "brx_IN:2011";LC_MONETARY
category  "brx_IN:2011";LC_MESSAGES
category  "brx_IN:2011";LC_PAPER
category  "brx_IN:2011";LC_NAME
category  "brx_IN:2011";LC_ADDRESS
category  "brx_IN:2011";LC_TELEPHONE
category  "brx_IN:2011";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_CTYPE
copy "hi_IN"
END LC_CTYPE

LC_COLLATE
copy "hi_IN"
END LC_COLLATE

LC_MONETARY
copy "hi_IN"
END LC_MONETARY


LC_NUMERIC
copy "hi_IN"
END LC_NUMERIC


LC_TIME
% This is the POSIX Locale definition for the LC_TIME category
% generated by IBM Basic CountryPack Transformer.
% These are generated based on XML base Locale definition file
% for IBM Class for Unicode.
%
% Abbreviated weekday names (%a)
abday       "<U0930><U092C><U093F>";"<U0938><U092E>";/
            "<U092E><U0902><U0917><U0932>";"<U092C><U0941><U0926>";/
            "<U092C><U093F><U0938><U0925><U093F>";/
            "<U0938><U0941><U0916><U0941><U0930>";"<U0938><U0941><U0928><U093F>"
%

% Full weekday names (%A)
day         "<U0930><U092C><U093F><U092C><U093E><U0930>";/
            "<U0938><U094B><U092C><U093E><U0930>";/
            "<U092E><U0902><U0917><U0932><U092C><U093E><U0930>";/
            "<U092C><U0941><U0926><U092C><U093E><U0930>";/
            "<U092C><U093F><U0938><U0925><U093F><U092C><U093E><U0930>";/
            "<U0938><U0941><U0916><U0941><U0930><U092C><U093E><U0930>";/
            "<U0938><U0941><U0928><U093F><U092C><U093E><U0930>"
%
% Abbreviated month names (%b)
abmon         "<U091C><U093E><U0928><U0941><U0935><U093E><U0930><U0940>";/
            "<U092B><U0947><U092C><U094D><U0930><U0941><U0935><U093E><U0930><U0940>";/
            "<U092E><U093E><U0930><U094D><U0938>";/
            "<U090F><U092A><U094D><U0930><U093F><U0932>";/
            "<U092E><U0947>";/
            "<U091C><U0941><U0928>";/
            "<U091C><U0941><U0932><U093E><U0907>";/
            "<U0906><U0917><U0938><U094D><U0925>";/
            "<U0938><U0947><U092C><U0925><U0947><U091C><U094D><U092C><U093C><U0930>";/
            "<U0905><U0916><U0925><U092C><U0930>";/
            "<U0928><U092C><U0947><U091C><U094D><U092C><U093C><U0930>";/
            "<U0926><U093F><U0938><U0947><U091C><U094D><U092C><U093C><U0930>"
%

% Full month names (%B)
mon         "<U091C><U093E><U0928><U0941><U0935><U093E><U0930><U0940>";/
            "<U092B><U0947><U092C><U094D><U0930><U0941><U0935><U093E><U0930><U0940>";/
            "<U092E><U093E><U0930><U094D><U0938>";/
            "<U090F><U092A><U094D><U0930><U093F><U0932>";/
            "<U092E><U0947>";/
            "<U091C><U0941><U0928>";/
            "<U091C><U0941><U0932><U093E><U0907>";/
            "<U0906><U0917><U0938><U094D><U0925>";/
            "<U0938><U0947><U092C><U0925><U0947><U091C><U094D><U092C><U093C><U0930>";/
            "<U0905><U0916><U0925><U092C><U0930>";/
            "<U0928><U092C><U0947><U091C><U094D><U092C><U093C><U0930>";/
            "<U0926><U093F><U0938><U0947><U091C><U094D><U092C><U093C><U0930>"
%
% Equivalent of AM PM

am_pm       "<U092B><U0941><U0902><U002E>";/
            "<U092C><U0947><U0932><U093E><U0938><U0947><U002E>"
%
% Appropriate date and time representation
% %A %d %b %Y%I:%M:%S  %Z
d_t_fmt     "<U0025><U0041><U0020><U0025><U0064><U0020><U0025><U0062>/
<U0020><U0025><U0059><U0020><U0025><U0049><U003A><U0025><U004D><U003A>/
<U0025><U0053><U0020><U0025><U0070><U0020><U0025><U005A>"
%
% Appropriate date representation
% %A %d %b %Y
d_fmt       "<U0025><U0041><U0020><U0025><U0064><U0020><U0025><U0062>/
<U0020><U0025><U0059>"
%
% Appropriate time representation
% %I:%M:%S  %Z
t_fmt       "<U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053>/
<U0020><U0020><U0025><U005A>"
%
% Appropriate 12 h time representation (%r)
t_fmt_ampm  "<U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053>/
<U0020><U0025><U0070><U0020><U0025><U005A>"
%
% Appropriate date representation (date(1))   "%a %b %e %H:%M:%S %Z %Y"
date_fmt       "<U0025><U0061><U0020><U0025><U0062><U0020><U0025><U0065>/
<U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U005A><U0020><U0025><U0059>"
END LC_TIME


LC_MESSAGES
% This is the POSIX Locale definition for the LC_MESSAGES category
% generated by IBM Basic CountryPack Transformer.
% These are generated based on XML base Locale definition file
% for IBM Class for Unicode.
%
% ^(Yes|[yY])
yesexpr     "<U005E><U0028><U0928><U0902><U0917><U094C><U007C><U005B><U0079>/
<U0059><U005D><U0029>"
%
% ^(No|[nN])
noexpr      "<U005E><U0028><U0928><U0919><U093E><U007C><U005B><U006E><U004E>/
<U005D><U0029>"
%
END LC_MESSAGES


LC_PAPER
copy "hi_IN"
END LC_PAPER


LC_NAME
% This is the ISO_IEC TR14652 Locale definition for the LC_NAME category
% generated by IBM Basic CountryPack Transformer.
%
%
name_fmt    "<U0025><U0070><U0025><U0074><U0025><U0066><U0025><U0074>/
<U0025><U0067>"
name_gen    ""
name_mr     "<U004D><U0072><U002E>"
name_mrs    "<U004D><U0072><U0073><U002E>"
name_miss   "<U004D><U0069><U0073><U0073><U002E>"
name_ms     "<U004D><U0073><U002E>"

END LC_NAME


LC_ADDRESS
postal_fmt  "<U0025><U007A><U0025><U0063><U0025><U0054><U0025><U0073>/
<U0025><U0062><U0025><U0065><U0025><U0072>"

country_ab2 "<U0049><U004E>"
country_ab3 "<U0049><U004E><U0044>"
country_num 356
% IND
country_car    "<U0049><U004E><U0044>"
% brx
lang_term    "<U0062><U0072><U0078>"
% brx
lang_lib    "<U0062><U0072><U0078>"
END LC_ADDRESS


LC_TELEPHONE
copy "hi_IN"
END LC_TELEPHONE


LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   comment_char    %
escape_char     /


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% Blin language locale for Eritrea.
%
% Charset: UTF-8
%
% Blin terms are provided by Tekie Alibekit with coordination of the
% Blin Language and Culture Association in Norway.  Prepared and contributed
% to glibc by Daniel Yacob <locales@geez.org>
%
% build with: localedef -f UTF-8 -i byn_ER byn_ER
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


LC_IDENTIFICATION
title      "Blin language locale for Eritrea"
source     "Ge'ez Frontier Foundation"
address    "7802 Solomon Seal Dr., Springfield, VA 22152, USA"
contact    ""
email      "locales@geez.org"
tel        ""
fax        ""
language   "byn"
territory  "ER"
revision   "0.21"
date       "2003-11-01"
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
%  Ethiopic Specifc Data:
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
%  Eritrea Specifc Data:
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
%  Blin Specific Data:
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
%  Blin/ER Specific Data:
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
lang_name     "<U1265><U120A><U1295>"
lang_ab       ""
lang_term     "<U0062><U0079><U006E>"
lang_lib      "<U0062><U0079><U006E>"
%
END LC_ADDRESS


LC_TIME
%
% Abbreviated weekday names (%a)
%
abday    "<U1230><U002F><U1245>";/
         "<U1230><U1291>";/
         "<U1230><U120A><U131D>";/
         "<U1208><U1313>";/
         "<U12A3><U121D><U12F5>";/
         "<U12A3><U122D><U1265>";/
         "<U1230><U002F><U123D>"
%
% Full weekday names (%A)
%
day      "<U1230><U1295><U1260><U122D><U0020><U1245><U12F3><U12C5>";/
         "<U1230><U1291>";/
         "<U1230><U120A><U131D>";/
         "<U1208><U1313><U0020><U12C8><U122A><U0020><U1208><U1265><U12CB>";/
         "<U12A3><U121D><U12F5>";/
         "<U12A3><U122D><U1265>";/
         "<U1230><U1295><U1260><U122D><U0020><U123D><U1313><U12C5>"
%
% Abbreviated month names (%b)
%
abmon    "<U120D><U12F0><U1275>";/
         "<U12AB><U1265><U12BD>";/
         "<U12AD><U1265><U120B>";/
         "<U134B><U1305><U12BA>";/
         "<U12AD><U1262><U1245>";/
         "<U121D><U002F><U1275>";/
         "<U12B0><U122D>";/
         "<U121B><U122D><U12EB>";/
         "<U12EB><U12B8><U1292>";/
         "<U1218><U1270><U1209>";/
         "<U121D><U002F><U121D>";/
         "<U1270><U1215><U1233>"
%
% Full month names (%B)
%
mon      "<U120D><U12F0><U1275><U122A>";/
         "<U12AB><U1265><U12BD><U1265><U1272>";/
         "<U12AD><U1265><U120B>";/
         "<U134B><U1305><U12BA><U122A>";/
         "<U12AD><U1262><U1245><U122A>";/
         "<U121D><U12AA><U12A4><U120D><U0020><U1275><U1313><U0305><U1292><U122A>";/
         "<U12B0><U122D><U12A9>";/
         "<U121B><U122D><U12EB><U121D><U0020><U1275><U122A>";/
         "<U12EB><U12B8><U1292><U0020><U1218><U1233><U1245><U1208><U122A>";/
         "<U1218><U1270><U1209>";/
         "<U121D><U12AA><U12A4><U120D><U0020><U1218><U123D><U12C8><U122A>";/
         "<U1270><U1215><U1233><U1235><U122A>"
%
%
% Equivalent of AM PM
%
am_pm    "<U134B><U12F1><U1235><U0020><U1303><U