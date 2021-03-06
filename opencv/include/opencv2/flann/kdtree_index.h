comment_char %
escape_char  /
%
% Croatian Language Locale for Croatia
% Source: CARNet/MZT
% Address: Josipa Marohnica bb
%    Zagreb, Hrvatska
% Contact: Tomislav Vujec
% Email: tvujec@redhat.com
% Tel: +385 - 1 - 6164194
% Fax: +385 - 1 - 6164395
% Language: hr
% Territory: HR
% Revision: 5.0
% Date: 1999-03-01
% Application: general
% Users: general
% Repertoiremap: mnemonic.ds
% Charset: ISO-8859-2
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "Croatian locale for Croatia"
source     "CARNet/MZT"
address    "Josipa Marohnica bb, Zagreb, Hrvatska"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "Croatian"
territory  "Croatia"
revision   "1.0"
date       "2000-06-29"
%
category  "hr_HR:2000";LC_IDENTIFICATION
category  "hr_HR:2000";LC_CTYPE
category  "hr_HR:2000";LC_COLLATE
category  "hr_HR:2000";LC_TIME
category  "hr_HR:2000";LC_NUMERIC
category  "hr_HR:2000";LC_MONETARY
category  "hr_HR:2000";LC_MESSAGES
category  "hr_HR:2000";LC_PAPER
category  "hr_HR:2000";LC_NAME
category  "hr_HR:2000";LC_ADDRESS
category  "hr_HR:2000";LC_TELEPHONE
category  "hr_HR:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_COLLATE
copy "iso14651_t1"

collating-symbol <CAP-MIN>
collating-symbol <MIN-CAP>

collating-symbol <ccaron>
collating-symbol <cacute>
collating-symbol <dstroke>
collating-symbol <scaron>
collating-symbol <zcaron>

collating-symbol <dzcaron>
collating-symbol <lj>
collating-symbol <nj>

collating-element <D-Zcaron> from "<U0044><U017D>"
collating-element <D-zcaron> from "<U0044><U017E>"
collating-element <d-Zcaron> from "<U0064><U017D>"
collating-element <d-zcaron> from "<U0064><U017E>"
collating-element <L-J> from "<U004C><U004A>"
collating-element <L-j> from "<U004C><U006A>"
collating-element <l-J> from "<U006C><U004A>"
collating-element <l-j> from "<U006C><U006A>"
collating-element <N-J> from "<U004E><U004A>"
collating-element <N-j> from "<U004E><U006A>"
collating-element <n-J> from "<U006E><U004A>"
collating-element <n-j> from "<U006E><U006A>"

reorder-after <MIN>
<MIN-CAP>
<CAP-MIN>

reorder-after <c>
<ccaron>
<cacute>

reorder-after <d>
<dzcaron>
<dstroke>

reorder-after <l>
<lj>

reorder-after <n>
<nj>

reorder-after <s>
<scaron>

reorder-after <z>
<zcaron>

reorder-after <U0063>
<U010D> <ccaron>;<BAS>;<MIN>;IGNORE
<U0107> <cacute>;<BAS>;<MIN>;IGNORE
reorder-after <U0043>
<U010C> <ccaron>;<BAS>;<CAP>;IGNORE
<U0106> <cacute>;<BAS>;<CAP>;IGNORE

reorder-after <U0064>
<d-zcaron>  <dzcaron>;<BAS>;<MIN>;IGNORE
<d-Zcaron>  <dzcaron>;<BAS>;<MIN-CAP>;IGNORE
<U0111> <dstroke>;<BAS>;<MIN>;IGNORE
reorder-after <U0044>
<D-zcaron>  <dzcaron>;<BAS>;<CAP-MIN>;IGNORE
<D-Zcaron>  <dzcaron>;<BAS>;<CAP>;IGNORE
<U0110> <dstroke>;<BAS>;<CAP>;IGNORE

reorder-after <U0140>
<l-j> <lj>;<BAS>;<MIN>;IGNORE
<l-J> <lj>;<BAS>;<MIN-CAP>;IGNORE
reorder-after <U013F>
<L-j> <lj>;<BAS>;<CAP-MIN>;IGNORE
<L-J> <lj>;<BAS>;<CAP>;IGNORE

reorder-after <U014B>
<n-j> <nj>;<BAS>;<MIN>;IGNORE
<n-J> <nj>;<BAS>;<MIN-CAP>;IGNORE
reorder-after <U014A>
<N-j> <nj>;<BAS>;<CAP-MIN>;IGNORE
<N-J> <nj>;<BAS>;<CAP>;IGNORE

reorder-after <U0073>
<U0161> <scaron>;<BAS>;<MIN>;IGNORE
reorder-after <U0053>
<U0160> <scaron>;<BAS>;<CAP>;IGNORE

reorder-after <U007A>
<U017E> <zcaron>;<BAS>;<MIN>;IGNORE
reorder-after <U005A>
<U017D> <zcaron>;<BAS>;<CAP>;IGNORE

reorder-end

END LC_COLLATE

LC_CTYPE
copy "i18n"

translit_start
include "translit_combining";""
translit_end
END LC_CTYPE

LC_MESSAGES
yesexpr "<U005E><U005B><U0064><U0044><U0079><U0059><U005D><U002E><U002A>"
noexpr  "<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
END LC_MESSAGES

LC_MONETARY
int_curr_symbol           "<U0048><U0052><U004B><U0020>"
currency_symbol           "<U004B><U006E>"
mon_decimal_point         "<U002C>"
mon_thousands_sep         "<U0020>"
mon_grouping              3;3
positive_sign             ""
negative_sign             "<U002D>"
int_frac_digits           2
frac_digits               2
p_cs_precedes             1
p_sep_by_space            1
n_cs_precedes             1
n_sep_by_space            1
p_sign_posn               1
n_sign_posn               1
END LC_MONETARY

LC_NUMERIC
decimal_point             "<U002C>"
thousands_sep             ""
grouping                  0;0
END LC_NUMERIC

LC_TIME

abday   "<U004E><U0065><U0064>";"<U0050><U006F><U006E>";/
        "<U0055><U0074><U006F>";"<U0053><U0072><U0069>";/
        "<U010C><U0065><U0074>";"<U0050><U0065><U0074>";/
        "<U0053><U0075><U0062>"
day     "<U004E><U0065><U0064><U006A><U0065><U006C><U006A><U0061>";/
        "<U0050><U006F><U006E><U0065><U0064><U006A><U0065><U006C><U006A><U0061><U006B>";/
        "<U0055><U0074><U006F><U0072><U0061><U006B>";/
        "<U0053><U0072><U0069><U006A><U0065><U0064><U0061>";/
        "<U010C><U0065><U0074><U0076><U0072><U0074><U0061><U006B>";/
        "<U0050><U0065><U0074><U0061><U006B>";/
        "<U0053><U0075><U0062><U006F><U0074><U0061>"
abmon   "<U0053><U0069><U006A>";"<U0056><U0065><U006C>";/
        "<U004F><U017E><U0075>";"<U0054><U0072><U0061>";/
        "<U0053><U0076><U0069>";"<U004C><U0069><U0070>";/
        "<U0053><U0072><U0070>";"<U004B><U006F><U006C>";/
        "<U0052><U0075><U006A>";"<U004C><U0069><U0073>";/
        "<U0053><U0074><U0075>";"<U0050><U0072><U006F>"
mon     "<U0053><U0069><U006A><U0065><U010D><U0061><U006E><U006A>";/
        "<U0056><U0065><U006C><U006A><U0061><U010D><U0061>";/
        "<U004F><U017E><U0075><U006A><U0061><U006B>";/
        "<U0054><U0072><U0061><U0076><U0061><U006E><U006A>";/
        "<U0053><U0076><U0069><U0062><U0061><U006E><U006A>";/
        "<U004C><U0069><U0070><U0061><U006E><U006A>";/
        "<U0053><U0072><U0070><U0061><U006E><U006A>";/
        "<U004B><U006F><U006C><U006F><U0076><U006F><U007A>";/
        "<U0052><U0075><U006A><U0061><U006E>";/
        "<U004C><U0069><U0073><U0074><U006F><U0070><U0061><U0064>";/
        "<U0053><U0074><U0075><U0064><U0065><U006E><U0069>";/
        "<U0050><U0072><U006F><U0073><U0069><U006E><U0061><U0063>"
d_t_fmt "<U0025><U0061><U0020><U0025><U0064><U0020><U0025><U0062><U0020><U0025><U0059><U0020><U0025><U0054>"
d_fmt   "<U0025><U0064><U002E><U0025><U006D><U002E><U0025><U0059>"
t_fmt   "<U0025><U0054>"
am_pm   "";""
t_fmt_ampm ""
date_fmt       "<U0025><U0061><U0020><U0025><U0062><U0020><U0025><U0065>/
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
int_prefix     "<U0033><U0038><U0035>"
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
country_ab2 "<U0048><U0052>"
country_ab3 "<U0048><U0052><U0056>"
country_num 191
% HR
country_car    "<U0048><U0052>"
% hrvatski
lang_name    "<U0068><U0072><U0076><U0061><U0074><U0073><U006B><U0069>"
% hr
lang_ab      "<U0068><U0072>"
% hrv
lang_term    "<U0068><U0072><U0076>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               escape_char  /
comment_char  %

% Charset: UTF-8

% ChangeLog
% 0.3 (2005-10-13):
%      2005-10-12 Dwayne Bailey <dwayne@translate.org.za>
%        - Added 'Charset: UTF-8' information
%        - Update contact information
%        - Allign spellings of month and weekday names with Dept. of
%          Art and Culture's: Multilingual Mathematics Dictionary
% 0.2 (2004-10-29):
%      2004-10-29 Dwayne Bailey <dwayne@translate.org.za>
%        - Converted to <UNNNN> syntax for everything
%        - Correct yes/noexpr
%        - Corrected some days of the week
%      2004-10-28 Dwayne Bailey <dwayne@translate.org.za>
%        - Updated all contact information
%        - Added Translate.org.za to "source" for clarity
%      2004-03-30 Dwayne Bailey <dwayne@translate.org.za>
%        - Added country_ab2/3, country_num
%      2004-02-27 Dwayne Bailey <dwayne@translate.org.za>
%	     - Correct capatilisation of lang_name
% 0.1 (2004-02-24):
%	   2004-02-24 Dwayne Bailey <dwayne@translate.org.za>
%	     - Initial Venda locale for South Africa
%          by Zuza Software Foundation

LC_IDENTIFICATION
title      "Venda locale for South Africa"
source     "Zuza Software Foundation (Translate.org.za)"
address    "PO Box 28364, Sunnyside, 0132, South Africa"
contact    "Dwayne Bailey"
email      "dwayne@translate.org.za"
tel        "+27 12 460 1095"
fax        "+27 12 460 1095"
language   "Venda"
territory  "South Africa"
revision   "0.3"
date       "2005-10-13"
%
category  "ve_ZA:2004";LC_IDENTIFICATION
category  "ve_ZA:2004";LC_CTYPE
category  "ve_ZA:2004";LC_COLLATE
category  "ve_ZA:2004";LC_TIME
category  "ve_ZA:2004";LC_NUMERIC
category  "ve_ZA:2004";LC_MONETARY
category  "ve_ZA:2004";LC_MESSAGES
category  "ve_ZA:2004";LC_PAPER
category  "ve_ZA:2004";LC_NAME
category  "ve_ZA:2004";LC_ADDRESS
category  "ve_ZA:2004";LC_TELEPHONE
category  "ve_ZA:2004";LC_MEASUREMENT

END LC_IDENTIFICATION

LC_CTYPE
% Use the characters described in the charmap file "i18n.tgz"
copy "i18n"

translit_start
include  "translit_combining";""
translit_end
END LC_CTYPE

LC_COLLATE
% Copy the template from ISO/IEC 14651 i.e.
% use the rules there when making ordered lists of words.
copy "iso14651_t1"
END LC_COLLATE

LC_MONETARY
copy "en_ZA"
END LC_MONETARY

LC_NUMERIC
copy "en_ZA"
END LC_NUMERIC

LC_TIME

% abday - The abbreviations for the week days:
% - Swo, Mus, Vhi, Rar, L^a, T^an, Mug
abday       "<U0053><U0077><U006F>";/
            "<U004D><U0075><U0073>";/
            "<U0056><U0068><U0069>";/
            "<U0052><U0061><U0072>";/
            "<U1E4B><U0061>";/
            "<U1E70><U0061><U006E>";/
            "<U004D><U0075><U0067>"

% day - The full names of the week days:
% - Swondaha, Musumbuluwo, L^avhuvhili, L^avhuraru, L^avhun^a, L^avhut^anu, Mugivhela
day         "<U0053><U0077><U006F><U006E><U0064><U0061><U0068><U0061>";/
            "<U004D><U0075><U0073><U0075><U006D><U0062><U0075><U006C><U0075><U0077><U006F>";/
            "<U1E3C><U0061><U0076><U0068><U0075><U0076><U0068><U0069><U006C><U0069>";/
            "<U1E3C><U0061><U0076><U0068><U0075><U0072><U0061><U0072><U0075>";/
            "<U1E3C><U0061><U0076><U0068><U0075><U1E4B><U0061>";/
            "<U1E3C><U0061><U0076><U0068><U0075><U1E71><U0061><U006E><U0075>";/
            "<U004D><U0075><U0067><U0069><U0076><U0068><U0065><U006C><U0061>"

% abmon - The abbreviations for the months
% - Pha, Luh, Fam, Lam, Shu, Lwi, Lwa, Ngu, Khu, Tsh, L^ar, Nye
abmon       "<U0050><U0068><U0061>";"<U004C><U0075><U0068>";/
            "<U0046><U0061><U006D>";"<U004C><U0061><U006D>";/
            "<U0053><U0068><U0075>";"<U004C><U0077><U0069>";/
            "<U004C><U0077><U0061>";"<U004E><U0067><U0075>";/
            "<U004B><U0068><U0075>";"<U0054><U0073><U0068>";/
            "<U1E3C><U0061><U0072>";"<U004E><U0079><U0065>"

% mon - The full names of the months -
% - Phando, Luhuhi, T^hafamuhwe, Lambamai, Shundunthule, Fulwi
%   Fulwana, T^hangule, Khubvumedzi, Tshimedzi, L^ara, Nyendavhusiku
mon         "<U0050><U0068><U0061><U006E><U0064><U006F>";/
            "<U004C><U0075><U0068><U0075><U0068><U0069>";/
            "<U1E70><U0068><U0061><U0066><U0061><U006D><U0075><U0068><U0077><U0065>";/
            "<U004C><U0061><U006D><U0062><U0061><U006D><U0061><U0069>";/
            "<U0053><U0068><U0075><U006E><U0064><U0075><U006E><U0074><U0068><U0075><U006C><U0065>";/
            "<U0046><U0075><U006C><U0077><U0069>";/
            "<U0046><U0075><U006C><U0077><U0061><U006E><U0061>";/
            "<U1E70><U0068><U0061><U006E><U0067><U0075><U006C><U0065>";/
            "<U004B><U0068><U0075><U0062><U0076><U0075><U006D><U0065><U0064><U007A><U0069>";/
            "<U0054><U0073><U0068><U0069><U006D><U0065><U0064><U007A><U0069>";/
            "<U1E3C><U0061><U0072><U0061>";/
            "<U004E><U0079><U0065><U006E><U0064><U0061><U0076><U0068><U0075><U0073><U0069><U006B><U0075>"

% Abreviated date and time representation to be referenced by the "%c" field descriptor -
d_t_fmt     "<U0025><U0061><U0020><U0025><U0064><U0020><U0025><U0062><U0020><U0025><U0059><U0020><U0025><U0054><U0020><U0025><U005A>"
%
% "%a" (short weekday name),
% "%d" (day of month as a decimal number),
% "%b" (short month name),
% "%Y" (year with century as a decimal number),
% "%T" (24-hour clock time in format HH:MM:SS),
% "%Z" (Time zone name)

% Date representation to be referenced by the "%x" field descriptor -
d_fmt   "<U0025><U0064><U002F><U0025><U006D><U002F><U0025><U0059>"
% "%d/%m/%Y", day/month/year as decimal numbers (01/01/2000).

% Time representation to be referenced by the "%X" field descriptor -
t_fmt       "<U0025><U0054>"
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
% "^[yYeE]"
yesexpr     "<U005E><U005B><U0079><U0059><U0065><U0045><U005D>"

% The negative response - hai
% "^[nNhH]"
noexpr      "<U005E><U005B><U006E><U004E><U0068><U0048><U005D>"
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

% Salutation valid for all females - "" (no term)
% name_ms     ""

END LC_NAME

LC_ADDRESS
% Country name in Venda - "Afurika Tshipembe"
country_name "<U0041><U0066><U0075><U0072><U0069><U006B><U0061><U0020>/
<U0054><U0073><U0068><U0069><U0070><U0065><U006D><U0062><U0065>"

% Abbreviated country postal name - "ZA"
country_post "<U005A><U0041>"

% UN Geneve 1949:68 Distinguishing signs of vehicles in international traffic
% http://www.unece.org/trans/conventn/disting-signs-5-2001.pdf
% ZA
country_car   "<U005A><U0041>"

% FIXME define the following correctly
% country_isbn ""

% Language name in Venda - "Tshivend^a"
lang_name "<U0054><U0073><U0068><U0069><U0076><U0065><U006E><U1E13><U0061>"

% ISO 639 two and three letter language names
% see http://www.loc.gov/standards/iso639-2/englangn.html
% ve
lang_ab         "<U0076><U0065>"
% ven
lang_term       "<U0076><U0065><U006E>"
% ven
lang_lib        "<U0076><U0065><U006E>"

% Representation of postal addresses (minus the addressee's name) in South
% Africa. (Ignored for now)
postal_fmt    "<U0025><U0066><U0025><U004E><U0025><U0061><U0025><U004E>/
<U0025><U0064><U0025><U004E><U0025><U0062><U0025><U004E><U0025><U0073>/
<U0020><U0025><U0068><U0020><U0025><U0065><U0020><U0025><U0072><U0025>/
<U004E><U0025><U007A><U0020><U0025><U0054><U0025>/
<U004E><U0025><U0063><U0025><U004E>"
% "%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N", which gives -
% "firm name",
% "end of line",
% "C/O address",
% "end of line",
% "department name",
% "Building name",
% "end of line",
% "street or block name",
% "space",
% "house number or designation",
% "space",
% "floor number",
% "space",
% "room number, door designation",
% "end of line",
% "postal code",
% "space",
% "town, city",
% "end of line",
% "country designation for the <country_post> keyword",
% "end of line
%

% ISO 3166 country number and 2 and 3 letter abreviations
% http://www.unicode.org/onlinedat/countries.html
% "ZA", "ZAF"
country_num   710
country_ab2   "<U005A><U0041>"
country_ab3   "<U005A><U0041><U0046>"

END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              