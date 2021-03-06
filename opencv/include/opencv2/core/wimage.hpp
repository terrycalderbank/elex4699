escape_char /
comment_char %
% Locale for English locale in the USA
% Contributed by Ulrich Drepper <drepper@redhat.com>, 2000

LC_IDENTIFICATION
title      "English locale for the USA"
source     "Free Software Foundation, Inc."
address    "http:////www.gnu.org//software//libc//"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "English"
territory  "USA"
revision   "1.0"
date       "2000-06-24"
%
category  "en_US:2000";LC_IDENTIFICATION
category  "en_US:2000";LC_CTYPE
category  "en_US:2000";LC_COLLATE
category  "en_US:2000";LC_TIME
category  "en_US:2000";LC_NUMERIC
category  "en_US:2000";LC_MONETARY
category  "en_US:2000";LC_MESSAGES
category  "en_US:2000";LC_PAPER
category  "en_US:2000";LC_NAME
category  "en_US:2000";LC_ADDRESS
category  "en_US:2000";LC_TELEPHONE
category  "en_US:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_CTYPE
copy "en_GB"
END LC_CTYPE

LC_COLLATE

% Copy the template from ISO/IEC 14651
copy "iso14651_t1"

END LC_COLLATE

LC_MONETARY
int_curr_symbol     "<U0055><U0053><U0044><U0020>"
currency_symbol     "<U0024>"
mon_decimal_point   "<U002E>"
mon_thousands_sep   "<U002C>"
mon_grouping        3;3
positive_sign       ""
negative_sign       "<U002D>"
int_frac_digits     2
frac_digits         2
p_cs_precedes       1
int_p_sep_by_space  1
p_sep_by_space      0
n_cs_precedes       1
int_n_sep_by_space  1
n_sep_by_space      0
p_sign_posn         1
n_sign_posn         1
%
END LC_MONETARY

LC_NUMERIC
decimal_point   "<U002E>"
thousands_sep   "<U002C>"
grouping        3;3
END LC_NUMERIC

LC_TIME
abday	"<U0053><U0075><U006E>";"<U004D><U006F><U006E>";/
	"<U0054><U0075><U0065>";"<U0057><U0065><U0064>";/
	"<U0054><U0068><U0075>";"<U0046><U0072><U0069>";/
	"<U0053><U0061><U0074>"
day	"<U0053><U0075><U006E><U0064><U0061><U0079>";/
	"<U004D><U006F><U006E><U0064><U0061><U0079>";/
	"<U0054><U0075><U0065><U0073><U0064><U0061><U0079>";/
	"<U0057><U0065><U0064><U006E><U0065><U0073><U0064><U0061><U0079>";/
	"<U0054><U0068><U0075><U0072><U0073><U0064><U0061><U0079>";/
	"<U0046><U0072><U0069><U0064><U0061><U0079>";/
	"<U0053><U0061><U0074><U0075><U0072><U0064><U0061><U0079>"

week    7;19971130;7
first_weekday	1
first_workday	2
abmon	"<U004A><U0061><U006E>";"<U0046><U0065><U0062>";/
	"<U004D><U0061><U0072>";"<U0041><U0070><U0072>";/
	"<U004D><U0061><U0079>";"<U004A><U0075><U006E>";/
	"<U004A><U0075><U006C>";"<U0041><U0075><U0067>";/
	"<U0053><U0065><U0070>";"<U004F><U0063><U0074>";/
	"<U004E><U006F><U0076>";"<U0044><U0065><U0063>"
mon	"<U004A><U0061><U006E><U0075><U0061><U0072><U0079>";/
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
% Appropriate date and time representation (%c)
%	"%a %d %b %Y %r %Z"
d_t_fmt "<U0025><U0061><U0020><U0025><U0064><U0020><U0025><U0062><U0020><U0025><U0059><U0020><U0025><U0072><U0020><U0025><U005A>"
%
% Appropriate date representation (%x)
%	"%m/%d/%Y"
d_fmt   "<U0025><U006D><U002F><U0025><U0064><U002F><U0025><U0059>"
%
% Appropriate time representation (%X)
%	"%r"
t_fmt   "<U0025><U0072>"
%
% Appropriate AM/PM time representation (%r)
%	"%I:%M:%S %p"
t_fmt_ampm "<U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U0070>"
%
% Strings for AM/PM
%
am_pm	"<U0041><U004D>";"<U0050><U004D>"
%
% Appropriate date representation (date(1))   "%a %b %e %H:%M:%S %Z %Y"
date_fmt	"<U0025><U0061><U0020><U0025><U0062><U0020><U0025><U0065>/
<U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U005A><U0020><U0025><U0059>"
END LC_TIME

LC_MESSAGES
yesexpr "<U005E><U005B><U0079><U0059><U005D><U002E><U002A>"
noexpr  "<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
yesstr  "<U0059><U0065><U0073>"
nostr   "<U004E><U006F>"
END LC_MESSAGES

LC_PAPER
height   279
width    216
END LC_PAPER

LC_NAME
name_fmt    "<U0025><U0064><U0025><U0074><U0025><U0067><U0025><U0074>/
<U0025><U006D><U0025><U0074><U0025><U0066>"
name_miss   "<U004D><U0069><U0073><U0073><U002E>"
name_mr     "<U004D><U0072><U002E>"
name_mrs    "<U004D><U0072><U0073><U002E>"
name_ms     "<U004D><U0073><U002E>"
END LC_NAME


LC_ADDRESS
postal_fmt    "<U0025><U0061><U0025><U004E><U0025><U0066><U0025><U004E>/
<U0025><U0064><U0025><U004E><U0025><U0062><U0025><U004E><U0025><U0068>/
<U0020><U0025><U0073><U0020><U0025><U0065><U0020><U0025><U0072><U0025>/
<U004E><U0025><U0054><U002C><U0020><U0025><U0053><U0020><U0025><U007A><U0025>/
<U004E><U0025><U0063><U0025><U004E>"
country_name  "<U0055><U0053><U0041>"
country_post  "<U0055><U0053><U0041>"
country_ab2   "<U0055><U0053>"
country_ab3   "<U0055><U0053><U0041>"
country_num   840
% USA
country_car   "<U0055><U0053><U0041>"
country_isbn  0
% English
lang_name     "<U0045><U006E><U0067><U006C><U0069><U0073><U0068>"
% en
lang_ab      "<U0065><U006E>"
% eng
lang_term    "<U0065><U006E><U0067>"
% eng
lang_lib    "<U0065><U006E><U0067>"
END LC_ADDRESS

LC_TELEPHONE
tel_int_fmt    "<U002B><U0025><U0063><U0020><U0028><U0025><U0061><U0029>/
<U0020><U0025><U006C>"
tel_dom_fmt    "<U0028><U0025><U0061><U0029><U0020><U0025><U006C>"
int_select     "<U0031><U0031>"
int_prefix     "<U0031>"
END LC_TELEPHONE

LC_MEASUREMENT
% US customary units
measurement    2
END LC_MEASUREMENT
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 escape_char  /
comment_char  %

% Kurdish (latin) language locale for Turkey
% Source: Kader DILSIZ
% Contact: Kader DILSIZ, Pablo Saratxaga
% Email: kader@ikader.com, pablo@mandrakesoft.com
% Tel:
% Fax:
% Language: ku
% Territory: TR
% Revision: 0.1
% Date: 2003-07-27
% Users: general
% Charset: UTF-8
% Distribution and use is free, also
% for commercial purposes.
% History:
% 0.2  2005-04-24 Erdal Ronah<U00EE> <erdal.ronahi@gmail.com>
%      Fix LC_CTYPE and LC_NAME sections.  Remove dotless i from LC_COLLATE

LC_IDENTIFICATION
title      "Kurdish (latin) locale for Turkey"
source     "Kader DILSIZ"
address    ""
contact    "Kader DILSIZ, Pablo Saratxaga"
email      "kader@ikader.com, pablo@mandrakesoft.com"
tel        ""
fax        ""
language   "Kurdish"
territory  "Turkey"
revision   "0.2"
date       "2005-04-24"
%
category  "ku_TR:2000";LC_IDENTIFICATION
category  "ku_TR:2000";LC_CTYPE
category  "ku_TR:2000";LC_COLLATE
category  "ku_TR:2000";LC_TIME
category  "ku_TR:2000";LC_NUMERIC
category  "ku_TR:2000";LC_MONETARY
category  "ku_TR:2000";LC_MESSAGES
category  "ku_TR:2000";LC_PAPER
category  "ku_TR:2000";LC_NAME
category  "ku_TR:2000";LC_ADDRESS
category  "ku_TR:2000";LC_TELEPHONE
category  "ku_TR:2000";LC_MEASUREMENT

END LC_IDENTIFICATION

LC_CTYPE
copy "i18n"
END LC_CTYPE

LC_COLLATE
copy "iso14651_t1"

%% a b c c, d e e> f g h i i> j k l m n o p q r s s, t u u> v w x y z

collating-symbol <c,>
collating-symbol <e/>>
collating-symbol <i/>>
collating-symbol <s,>
collating-symbol <u/>>

reorder-after <c>
<c,>
reorder-after <e>
<e/>>
reorder-after <i>
<i/>>
reorder-after <s>
<s,>
reorder-after <u>
<u/>>

reorder-after <U0063>
<U00E7> <c,>;<CDI>;<MIN>;IGNORE
reorder-after <U0043>
<U00C7> <c,>;<CDI>;<CAP>;IGNORE

reorder-after <U0065>
<U00EA> <e/>>;<CIR>;<MIN>;IGNORE
reorder-after <U0045>
<U00CA> <e/>>;<CIR>;<CAP>;IGNORE

reorder-after <U0069>
<U00EE> <i/>>;<CIR>;<MIN>;IGNORE
reorder-after <U0049>
<U00CE> <i/>>;<CIR>;<CAP>;IGNORE

reorder-after <U0073>
<U015F> <s,>;<CDI>;<MIN>;IGNORE
reorder-after <U0053>
<U015E> <s,>;<CDI>;<CAP>;IGNORE

reorder-after <U0075>
<U00FB> <u/>>;<CIR>;<MIN>;IGNORE
reorder-after <U0055>
<U00DB> <u/>>;<CIR>;<CAP>;IGNORE

reorder-end

END LC_COLLATE

LC_MONETARY
copy "tr_TR"
END LC_MONETARY

LC_NUMERIC
copy "tr_TR"
END LC_NUMERIC

LC_TIME
abday       "<U0059><U015F>";"<U0044><U015F>";/
            "<U0053><U015F>";"<U00C7><U015F>";/
            "<U0050><U015F>";"<U00CE><U006E>";/
            "<U015E>"
day         "<U0059><U0065><U006B><U015F><U0065><U006D>";/
            "<U0044><U0075><U015F><U0065><U006D>";/
            "<U0053><U00EA><U015F><U0065><U006D>";/
            "<U00C7><U0061><U0072><U015F><U0065><U006D>";/
            "<U0050><U00EA><U006E><U0063><U015F><U0065><U006D>";/
            "<U00CE><U006E>";/
            "<U015E><U0065><U006D><U00EE>"
abmon       "<U00C7><U0069><U006C>";"<U0053><U0069><U0062>";/
            "<U0041><U0064><U0061>";"<U004E><U00EE><U0073>";/
            "<U0047><U0075><U006C>";"<U0048><U0065><U007A>";/
            "<U0054><U00EE><U0072>";"<U0054><U0065><U0062>";/
            "<U00CE><U006C><U006F>";"<U0043><U006F><U0074>";/
            "<U004D><U0069><U006A>";"<U004B><U0061><U006E>"
mon         "<U00E7><U0069><U006C><U0065>";/
            "<U0073><U0069><U0062><U0061><U0074>";/
            "<U0061><U0064><U0061><U0072>";/
            "<U006E><U00EE><U0073><U0061><U006E>";/
            "<U0067><U0075><U006C><U0061><U006E>";/
            "<U0068><U0065><U007A><U00EE><U0072><U0061><U006E>";/
            "<U0074><U00EE><U0072><U006D><U0065><U0068>";/
            "<U0074><U0065><U0062><U0061><U0078>";/
            "<U00EE><U006C><U006F><U006E>";/
            "<U0063><U006F><U0074><U006D><U0065><U0068>";/
            "<U006D><U0069><U006A><U0064><U0061><U0072>";/
            "<U006B><U0061><U006E><U00FB><U006E>"
% format: %A %d %B %Y %T %Z
d_t_fmt  "<U0025><U0041><U0020><U0025><U0064><U0020><U0025><U0042><U0020><U0025><U0059><U0020><U0025><U0054><U0020><U0025><U005A>"
% format: %d/%m/%Y
d_fmt   "<U0025><U0064><U002F><U0025><U006D><U002F><U0025><U0059>"
t_fmt       "<U0025><U0054>"
am_pm       "";""
t_fmt_ampm  ""
% format: %A %d %B %Y
date_fmt  "<U0025><U0041><U0020><U0025><U0064><U0020><U0025><U0042><U0020><U0025><U0059>"
%  FIXME: found in CLDR
first_weekday 2
END LC_TIME

LC_MESSAGES
yesstr	"<U0065><U0072><U00EA>"
nostr	"<U006E><U00E2>"
% eEdDyY
yesexpr	"<U005E><U005B><U0065><U0045><U0064><U0044><U0079><U0059><U005D><U002E><U002A>"
% nN
noexpr	"<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
END LC_MESSAGES

LC_PAPER
copy "tr_TR"
END LC_PAPER

LC_TELEPHONE
copy "tr_TR"
END LC_TELEPHONE

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_NAME
% format: %d%t%g%t%m%t%f
name_fmt    "<U0025><U0064><U0025><U0074><U0025><U0067><U0025><U0074>/
<U0025><U006D><U0025><U0074><U0025><U0066>"
% TODO
% Bir<U00EA>z
name_gen    "<U0042><U0061><U0072><U00EA><U007A>"
% "M."
name_mr     "<U0042><U0061><U0072><U00EA><U007A>"
% "Bir<U00EA>z"
name_mrs    "<U0042><U0061><U0072><U00EA><U007A>"
name_ms     "<U0042><U0061><U0072><U00EA><U007A>"
% "Bir<U00EA>z"
name_miss   "<U0042><U0061><U0072><U00EA><U007A>"
END LC_NAME

LC_ADDRESS
postal_fmt    "<U0025><U0066><U0025><U004E><U0025><U0061><U0025><U004E>/
<U0025><U0064><U0025><U004E><U0025><U0062><U0025><U004E><U0025><U0073>/
<U0020><U0025><U0068><U0020><U0025><U0065><U0020><U0025><U0072><U0025>/
<U004E><U0025><U007A><U0020><U0025><U0054><U0025>/
<U004E><U0025><U0063><U0025><U004E>"
country_name "<U0054><U0069><U0072><U006B><U0069><U0079><U0065>"
country_post "<U0054><U0052>"
country_ab2  "<U0054><U0052>"
country_ab3  "<U0054><U0055><U0052>"
country_num  792
country_isbn 975
% TR
country_car    "<U0054><U0052>"
% "kurdi"
lang_name   "<U006B><U0075><U0072><U0064><U0069>"
% ku
lang_ab      "<U006B><U0075>"
% kur
lang_term    "<U006B><U0075><U0072>"
% kur
lang_lib     "<U006B><U0075><U0072>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      comment_char    %
escape_char     /

% English locale for Hong Kong
% Contributed by Kentaroh Noji <knoji@jp.ibm.com> and
% Tetsuji Orita <orita@jp.ibm.com>.

LC_IDENTIFICATION
% This is the ISO_IEC TR14652 Locale definition for the LC_IDENTIFICATION
% category generated by IBM Basic CountryPack Transformer.
%
title      "English locale for Hong Kong"
source     "IBM Globalization Center of Competency, Yamato Software Laboratory"
address    "1623-14, Shimotsuruma, Yamato-shi, Kanagawa-ken, 242-8502, Japan"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel         ""
fax         ""
language    "English"
territory   "Hong Kong"
revision    "1.0"
date        "2000,October,27 (XML source:2000,July,20)"
%
category  "en_HK:2000";LC_IDENTIFICATION
category  "en_HK:2000";LC_CTYPE
category  "en_HK:2000";LC_COLLATE
category  "en_HK:2000";LC_TIME
category  "en_HK:2000";LC_NUMERIC
category  "en_HK:2000";LC_MONETARY
category  "en_HK:2000";LC_MESSAGES
category  "en_HK:2000";LC_PAPER
category  "en_HK:2000";LC_NAME
category  "en_HK:2000";LC_ADDRESS
category  "en_HK:2000";LC_TELEPHONE
category  "en_HK:2000";LC_MEASUREMENT
END LC_IDENTIFICATION


LC_CTYPE
copy "en_GB"
END LC_CTYPE


LC_COLLATE
copy "iso14651_t1"
END LC_COLLATE


LC_MONETARY
% This is the POSIX Locale definition the LC_MONETARY category
% generated by IBM Basic CountryPack Transformer.
% These are generated based on XML base Locale defintion file
% for IBM Class for Unicode.
%
int_curr_symbol       "<U0048><U004B><U0044><U0020>"
currency_symbol       "<U0048><U004B><U0024>"
mon_decimal_point     "<U002E>"
mon_thousands_sep     "<U002C>"
mon_grouping          3
positive_sign         ""
negative_sign         "<U002D>"
int_frac_digits       2
frac_digits           2
p_cs_precedes         1
p_sep_by_space        0
n_cs_precedes         1
n_sep_by_space        0
p_sign_posn           1
n_sign_posn           0
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
% This is the POSIX Locale definition for the LC_TIME category
% generated by IBM Basic CountryPack Transformer.
% These are generated based on XML base Locale definition file
% for IBM Class for Unicode.
%
% Abbreviated weekday names (%a)
abday       "<U0053><U0075><U006E>";"<U004D><U006F><U006E>";/
            "<U0054><U0075><U0065>";"<U0057><U0065><U0064>";/
            "<U0054><U0068><U0075>";"<U0046><U0072><U0069>";/
            "<U0053><U0061><U0074>"
%
% Full weekday names (%A)
day         "<U0053><U0075><U006E><U0064><U0061><U0079>";"<U004D><U006F><U006E><U0064><U0061><U0079>";/
            "<U0054><U0075><U0065><U0073><U0064><U0061><U0079>";"<U0057><U0065><U0064><U006E><U0065><U0073><U0064><U0061><U0079>";/
            "<U0054><U0068><U0075><U0072><U0073><U0064><U0061><U0079>";"<U0046><U0072><U0069><U0064><U0061><U0079>";/
            "<U0053><U0061><U0074><U0075><U0072><U0064><U0061><U0079>"
%
% Abbreviated month names (%b)
abmon       "<U004A><U0061><U006E>";"<U0046><U0065><U0062>";/
            "<U004D><U0061><U0072>";"<U0041><U0070><U0072>";/
            "<U004D><U0061><U0079>";"<U004A><U0075><U006E>";/
            "<U004A><U0075><U006C>";"<U0041><U0075><U0067>";/
            "<U0053><U0065><U0070>";"<U004F><U0063><U0074>";/
            "<U004E><U006F><U0076>";"<U0044><U0065><U0063>"
%
% Full month names (%B)
mon         "<U004A><U0061><U006E><U0075><U0061><U0072><U0079>";"<U0046><U0065><U0062><U0072><U0075><U0061><U0072><U0079>";/
            "<U004D><U0061><U0072><U0063><U0068>";"<U0041><U0070><U0072><U0069><U006C>";/
            "<U004D><U0061><U0079>";"<U004A><U0075><U006E><U0065>";/
            "<U004A><U0075><U006C><U0079>";"<U0041><U0075><U0067><U0075><U0073><U0074>";/
            "<U0053><U0065><U0070><U0074><U0065><U006D><U0062><U0065><U0072>";"<U004F><U0063><U0074><U006F><U0062><U0065><U0072>";/
            "<U004E><U006F><U0076><U0065><U006D><U0062><U0065><U0072>";"<U0044><U0065><U0063><U0065><U006D><U0062><U0065><U0072>"
%
% Equivalent of AM PM
am_pm       "<U0041><U004D>";"<U0050><U004D>"
%
% Appropriate date and time representation
% %A, %B %d, %Y %I:%M:%S %Z
d_t_fmt     "<U0025><U0041><U002C><U0020><U0025><U0042><U0020><U0025><U0064><U002C><U0020><U0025><U0059><U0020><U0025><U0070><U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053>