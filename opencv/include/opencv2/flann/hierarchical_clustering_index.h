escape_char  /
comment_char  %
% Irish language locale for Ireland with Euro
% Language: ga
% Territory: IE
% Option: euro
% Date: 2000-08-21
% Users: general
% Charset: ISO-8859-15
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "Irish locale for Ireland with Euro"
source     "Free Software Foundation, Inc."
address    "http:////www.gnu.org//software//libc//"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "Irish"
territory  "Ireland"
revision   "1.0"
date       "2000-08-21"
%
category  "ga_IE@euro:2000";LC_IDENTIFICATION
category  "ga_IE@euro:2000";LC_CTYPE
category  "ga_IE@euro:2000";LC_COLLATE
category  "ga_IE@euro:2000";LC_TIME
category  "ga_IE@euro:2000";LC_NUMERIC
category  "ga_IE@euro:2000";LC_MONETARY
category  "ga_IE@euro:2000";LC_MESSAGES
category  "ga_IE@euro:2000";LC_PAPER
category  "ga_IE@euro:2000";LC_NAME
category  "ga_IE@euro:2000";LC_ADDRESS
category  "ga_IE@euro:2000";LC_TELEPHONE
category  "ga_IE@euro:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_CTYPE
copy "ga_IE"
END LC_CTYPE

LC_COLLATE
copy "iso14651_t1"
END LC_COLLATE

LC_MONETARY
copy "ga_IE"
END LC_MONETARY

LC_NUMERIC
copy "ga_IE"
END LC_NUMERIC

LC_TIME
copy "ga_IE"
END LC_TIME

LC_MESSAGES
copy "ga_IE"
END LC_MESSAGES

LC_PAPER
copy "ga_IE"
END LC_PAPER

LC_TELEPHONE
copy "ga_IE"
END LC_TELEPHONE

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_NAME
copy "ga_IE"
END LC_NAME

LC_ADDRESS
copy "ga_IE"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                comment_char %
escape_char  /
%
% Catalan Language Locale for Andorra
% Language: ca
% Territory: AD
% Option: euro
% Revision: 1.0
% Date: 2006-01-16
% Application: general
% Users: general
% Charset: ISO-8859-15
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "Catalan locale for Andorra "
source     "Robert Millan"
address    ""
contact    ""
email      ""
tel        ""
fax        ""
language   "Catalan"
territory  "Andorra"
revision   "1.0"
date       "2006-01-16"
%
category  "ca_AD:2000";LC_IDENTIFICATION
category  "ca_AD:2000";LC_CTYPE
category  "ca_AD:2000";LC_COLLATE
category  "ca_AD:2000";LC_TIME
category  "ca_AD:2000";LC_NUMERIC
category  "ca_AD:2000";LC_MONETARY
category  "ca_AD:2000";LC_MESSAGES
category  "ca_AD:2000";LC_PAPER
category  "ca_AD:2000";LC_NAME
category  "ca_AD:2000";LC_ADDRESS
category  "ca_AD:2000";LC_TELEPHONE
category  "ca_AD:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_COLLATE
copy "ca_ES"
END LC_COLLATE

LC_CTYPE
copy "ca_ES"
END LC_CTYPE

LC_MESSAGES
copy "ca_ES"
END LC_MESSAGES

LC_MONETARY
copy "ca_ES"
END LC_MONETARY

LC_NUMERIC
copy "ca_ES"
END LC_NUMERIC

LC_TIME
copy "ca_ES"
END LC_TIME

LC_PAPER
copy "ca_ES"
END LC_PAPER

LC_TELEPHONE
tel_int_fmt    "<U002B><U0025><U0063><U0020><U0025><U0061><U0020><U0025>/
<U006C>"
int_prefix     "<U0033><U0037><U0036>"
END LC_TELEPHONE

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_NAME
copy "ca_ES"
END LC_NAME

LC_ADDRESS
postal_fmt    "<U0025><U0066><U0025><U004E><U0025><U0061><U0025><U004E>/
<U0025><U0064><U0025><U004E><U0025><U0062><U0025><U004E><U0025><U0073>/
<U0020><U0025><U0068><U0020><U0025><U0065><U0020><U0025><U0072><U0025>/
<U004E><U0025><U007A><U0020><U0025><U0054><U0025>/
<U004E><U0025><U0063><U0025><U004E>"
country_ab2 "<U0041><U0044>"
country_ab3 "<U0041><U004E><U0044>"
country_num 20
% AND
country_car  "<U0041><U004E><U0044>"
% català
lang_name    "<U0063><U0061><U0074><U0061><U006C><U00E0>"
% ca
lang_ab      "<U0063><U0061>"
% cat
lang_term    "<U0063><U0061><U0074>"
% cat
lang_lib    "<U0063><U0061><U0074>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               comment_char %
escape_char /
% Charset: UTF-8

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% Min Nan Chinese locale for the Republic of China
%
% Prepared and contributed to glibc by Wei-Lun Chao <bluebat@member.fsf.org>
%
% build with: localedef -f UTF-8 -i nan_TW nan_TW
%
% This file is a part of GNU C Library (glibc) and contains locale data. The
% Free Software Foundation does not claim any copyright interest in the
% locale data contained in this file. The foregoing does not affect the
% license of GNU C Library (glibc) as a whole. It does not exempt you from the
% conditions of the license if your use would otherwise be governed by
% that license.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

LC_IDENTIFICATION
title        "Min Nan Chinese locale for the Republic of China"
source       ""
address      ""
contact      ""
email        "bug-glibc-locales@gnu.org"
tel          ""
fax          ""
language     "Min Nan Chinese"
territory    "Republic of China"
revision     "0.1"
date         "2013-06-02"
%
category  "nan_TW:2000";LC_IDENTIFICATION
category  "nan_TW:2000";LC_CTYPE
category  "nan_TW:2000";LC_COLLATE
category  "nan_TW:2000";LC_TIME
category  "nan_TW:2000";LC_NUMERIC
category  "nan_TW:2000";LC_MONETARY
category  "nan_TW:2000";LC_PAPER
category  "nan_TW:2000";LC_MEASUREMENT
category  "nan_TW:2000";LC_MESSAGES
category  "nan_TW:2000";LC_NAME
category  "nan_TW:2000";LC_ADDRESS
category  "nan_TW:2000";LC_TELEPHONE
END LC_IDENTIFICATION

LC_CTYPE
copy "i18n"
class	"hanzi"; /
<U3007>;/
<U3400>..<U4DBF>;/
<U4E00>..<U9FA5>;/
<UF900>..<UFA6A>;/
<U00020000>..<U0002A6D6>;/
<U0002F800>..<U0002FA1D>
END LC_CTYPE

LC_COLLATE
copy "iso14651_t1"
END LC_COLLATE

LC_TIME
% 一月, 二月, 三月, 四月, 五月, 六月, 七月, 八月, 九月, 十月, 十一月, 十二月
mon           "<U4E00><U6708>";/
     "<U4E8C><U6708>";/
     "<U4E09><U6708>";/
     "<U56DB><U6708>";/
     "<U4E94><U6708>";/
     "<U516D><U6708>";/
     "<U4E03><U6708>";/
     "<U516B><U6708>";/
     "<U4E5D><U6708>";/
     "<U5341><U6708>";/
     "<U5341><U4E00><U6708>";/
     "<U5341><U4E8C><U6708>"
%  1月,  2月,  3月,  4月,  5月,  6月,  7月,  8月,  9月, 10月, 11月, 12月
abmon         "<U0020><U0031><U6708>";/
       "<U0020><U0032><U6708>";/
       "<U0020><U0033><U6708>";/
       "<U0020><U0034><U6708>";/
       "<U0020><U0035><U6708>";/
       "<U0020><U0036><U6708>";/
       "<U0020><U0037><U6708>";/
       "<U0020><U0038><U6708>";/
       "<U0020><U0039><U6708>";/
       "<U0031><U0030><U6708>";/
       "<U0031><U0031><U6708>";/
       "<U0031><U0032><U6708>"
% 禮拜日, 禮拜一, 禮拜二, 禮拜三, 禮拜四, 禮拜五, 禮拜六
day           "<U79AE><U62DC><U65E5>";/
     "<U79AE><U62DC><U4E00>";/
     "<U79AE><U62DC><U4E8C>";/
     "<U79AE><U62DC><U4E09>";/
     "<U79AE><U62DC><U56DB>";/
     "<U79AE><U62DC><U4E94>";/
     "<U79AE><U62DC><U516D>"
% 日, 一, 二, 三, 四, 五, 六
abday         "<U65E5>";/
       "<U4E00>";/
       "<U4E8C>";/
       "<U4E09>";/
       "<U56DB>";/
       "<U4E94>";/
       "<U516D>"
% %Y年%m月%d日 (%A) %H點%M分%S秒
d_t_fmt       "<U0025><U0059><U5E74><U0025><U006D><U6708><U0025><U0064><U65E5><U0020><U0028><U0025><U0041><U0029><U0020><U0025><U0048><U9EDE><U0025><U004D><U5206><U0025><U0053><U79D2>"
% %Y年%m月%d日
d_fmt         "<U0025><U0059><U5E74><U0025><U006D><U6708><U0025><U0064><U65E5>"
% %H點%M分%S秒
t_fmt         "<U0025><U0048><U9EDE><U0025><U004D><U5206><U0025><U0053><U79D2>"
% 頂晡, 下晡
am_pm         "<U9802><U6661>";/
       "<U4E0B><U6661>"
% %p %I點%M分%S秒
t_fmt_ampm    "<U0025><U0070><U0020><U0025><U0049><U9EDE><U0025><U004D><U5206><U0025><U0053><U79D2>"
% %Y年 %b %e日 %A %H:%M:%S %Z
date_fmt      "<U0025><U0059><U5E74><U0020><U0025><U0062><U0020><U0025><U0065><U65E5><U0020><U0025><U0041><U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U0020><U0025><U005A>"
END LC_TIME

LC_NUMERIC
% .
decimal_point "<U002E>"
% ,
thousands_sep "<U002C>"
grouping      4
END LC_NUMERIC

LC_MONETARY
% NT$
currency_symbol    "<U004E><U0054><U0024>"
% TWD
int_curr_symbol    "<U0054><U0057><U0044><U0020>"
% .
mon_decimal_point  "<U002E>"
% ,
mon_thousands_sep  "<U002C>"
mon_grouping       4
positive_sign      ""
% -
negative_sign      "<U002D>"
frac_digits        2
int_frac_digits    2
p_cs_precedes      1
p_sep_by_space     0
n_cs_precedes      1
n_sep_by_space     0
p_sign_posn        1
n_sign_posn        1
int_p_cs_precedes  1
int_p_sep_by_space 0
int_n_cs_precedes  1
int_n_sep_by_space 0
int_p_sign_posn    1
int_n_sign_posn    1
END LC_MONETARY

LC_PAPER
height 297
width  210
END LC_PAPER

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_MESSAGES
% ^[yY是]
yesexpr "<U005E><U005B><U0079><U0059><U662F><U005D>"
% ^[nN伓]
noexpr  "<U005E><U005B><U006E><U004E><U4F13><U005D>"
END LC_MESSAGES

LC_NAME
% %f%t%g%t%d
name_fmt  "<U0025><U0066><U0025><U0074><U0025><U0067><U0025><U0074><U0025><U0064>"
% 君
name_gen  "<U541B>"
% 小姐
name_miss "<U5C0F><U59D0>"
% 先生
name_mr   "<U5148><U751F>"
% 夫人
name_mrs  "<U592B><U4EBA>"
% 女士
name_ms   "<U5973><U58EB>"
END LC_NAME

LC_ADDRESS
% %c%N%T%N%s %h %e %r%N%b%N%d%N%f%N%a%N
postal_fmt   "<U0025><U0063><U0025><U004E><U0025><U0054><U0025><U004E><U0025><U0073><U0020><U0025><U0068><U0020><U0025><U0065><U0020><U0025><U0072><U0025><U004E><U0025><U0062><U0025><U004E><U0025><U0064><U0025><U004E><U0025><U0066><U0025><U004E><U0025><U0061><U0025><U004E>"
% 中華民國
country_name "<U4E2D><U83EF><U6C11><U570B>"
% TW
country_post "<U0054><U0057>"
% TW
country_ab2  "<U0054><U0057>"
% TWN
country_ab3  "<U0054><U0057><U004E>"
country_num  158
country_isbn 957
% 漢語閩南語
lang_name    "<U6F22><U8A9E><U95A9><U5357><U8A9E>"
% nan
lang_term    "<U006E><U0061><U006E>"
% nan
lang_lib     "<U006E><U0061><U006E>"
END LC_ADDRESS

LC_TELEPHONE
% +%c-%a-%l
tel_int_fmt "<U002B><U0025><U0063><U002D><U0025><U0061><U002D><U0025><U006C>"
% %A-%l
tel_dom_fmt "<U0025><U0041><U002D><U0025><U006C>"
% 00
int_select  "<U0030><U0030>"
% 886
int_prefix  "<U0038><U0038><U0036>"
END LC_TELEPHONE
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    escape_char /
comment_char %

% Transliterations of wide equivalents.
% Generated through
%   $ grep '^[^;]*;[^;]*;[^;]*;[^;]*;[^;]*;<wide>[^;]*;' UnicodeData.txt | \
%     sed -e 's/^\([^;]*\);\([^;]*\);[^;]*;[^;]*;[^;]*;<wide> \([^;]*\);.*$/<U\1> <U\3> % \2/'

LC_CTYPE

translit_start

<U3000> <U0020> % IDEOGRAPHIC SPACE
<UFF01> <U0021> % FULLWIDTH EXCLAMATION MARK
<UFF02> <U0022> % FULLWIDTH QUOTATION MARK
<UFF03> <U0023> % FULLWIDTH NUMBER SIGN
<UFF04> <U0024> % FULLWIDTH DOLLAR SIGN
<UFF05> <U0025> % FULLWIDTH PERCENT SIGN
<UFF06> <U0026> % FULLWIDTH AMPERSAND
<UFF07> <U0027> % FULLWIDTH APOSTROPHE
<UFF08> <U0028> % FULLWIDTH LEFT PARENTHESIS
<UFF09> <U0029> % FULLWIDTH RIGHT PARENTHESIS
<UFF0A> <U002A> % FULLWIDTH ASTERISK
<UFF0B> <U002B> % FULLWIDTH PLUS SIGN
<UFF0C> <U002C> % FULLWIDTH COMMA
<UFF0D> <U002D> % FULLWIDTH HYPHEN-MINUS
<UFF0E> <U002E> % FULLWIDTH FULL STOP
<UFF0F> <U002F> % FULLWIDTH SOLIDUS
<UFF10> <U0030> % FULLWIDTH DIGIT ZERO
<UFF11> <U0031> % FULLWIDTH DIGIT ONE
<UFF12> <U0032> % FULLWIDTH DIGIT TWO
<UFF13> <U0033> % FULLWIDTH DIGIT THREE
<UFF14> <U0034> % FULLWIDTH DIGIT FOUR
<UFF15> <U0035> % FULLWIDTH DIGIT FIVE
<UFF16> <U0036> % FULLWIDTH DIGIT SIX
<UFF17> <U0037> % FULLWIDTH DIGIT SEVEN
<UFF18> <U0038> % FULLWIDTH DIGIT EIGHT
<UFF19> <U0039> % FULLWIDTH DIGIT NINE
<UFF1A> <U003A> % FULLWIDTH COLON
<UFF1B> <U003B> % FULLWIDTH SEMICOLON
<UFF1C> <U003C> % FULLWIDTH LESS-THAN SIGN
<UFF1D> <U003D> % FULLWIDTH EQUALS SIGN
<UFF1E> <U003E> % FULLWIDTH GREATER-THAN SIGN
<UFF1F> <U003F> % FULLWIDTH QUESTION MARK
<UFF20> <U0040> % FULLWIDTH COMMERCIAL AT
<UFF21> <U0041> % FULLWIDTH LATIN CAPITAL LETTER A
<UFF22> <U0042> % FULLWIDTH LATIN CAPITAL LETTER B
<UFF23> <U0043> % FULLWIDTH LATIN CAPITAL LETTER C
<UFF24> <U0044> % FULLWIDTH LATIN CAPITAL LETTER D
<UFF25> <U0045> % FULLWIDTH LATIN CAPITAL LETTER E
<UFF26> <U0046> % FULLWIDTH LATIN CAPITAL LETTER F
<UFF27> <U0047> % FULLWIDTH LATIN CAPITAL LETTER G
<UFF28> <U0048> % FULLWIDTH LATIN CAPITAL LETTER H
<UFF29> <U0049> % FULLWIDTH LATIN CAPITAL LETTER I
<UFF2A> <U004A> % FULLWIDTH LATIN CAPITAL LETTER J
<UFF2B> <U004B> % FULLWIDTH LATIN CAPITAL LETTER K
<UFF2C> <U004C> % FULLWIDTH LATIN CAPITAL LETTER L
<UFF2D> <U004D> % FULLWIDTH LATIN CAPITAL LETTER M
<UFF2E> <U004E> % FULLWIDTH LATIN CAPITAL LETTER N
<UFF2F> <U004F> % FULLWIDTH LATIN CAPITAL LETTER O
<UFF30> <U0050> % FULLWIDTH LATIN CAPITAL LETTER P
<UFF31> <U0051> % FULLWIDTH LATIN CAPITAL LETTER Q
<UFF32> <U0052> % FULLWIDTH LATIN CAPITAL LETTER R
<UFF33> <U0053> % FULLWIDTH LATIN CAPITAL LETTER S
<UFF34> <U0054> % FULLWIDTH LATIN CAPITAL LETTER T
<UFF35> <U0055> % FULLWIDTH LATIN CAPITAL LETTER U
<UFF36> <U0056> % FULLWIDTH LATIN CAPITAL LETTER V
<UFF37> <U0057> % FULLWIDTH LATIN CAPITAL LETTER W
<UFF38> <U0058> % FULLWIDTH LATIN CAPITAL LETTER X
<UFF39> <U0059> % FULLWIDTH LATIN CAPITAL LETTER Y
<UFF3A> <U005A> % FULLWIDTH LATIN CAPITAL LETTER Z
<UFF3B> <U005B> % FULLWIDTH LEFT SQUARE BRACKET
<UFF3C> <U005C> % FULLWIDTH REVERSE SOLIDUS
<UFF3D> <U005D> % FULLWIDTH RIGHT SQUARE BRACKET
<UFF3E> <U005E> % FULLWIDTH CIRCUMFLEX ACCENT
<UFF3F> <U005F> % FULLWIDTH LOW LINE
<UFF40> <U0060> % FULLWIDTH GRAVE ACCENT
<UFF41> <U0061> % FULLWIDTH LATIN SMALL LETTER A
<UFF42> <U0062> % FULLWIDTH LATIN SMALL LETTER B
<UFF43> <U0063> % FULLWIDTH LATIN SMALL LETTER C
<UFF44> <U0064> % FULLWIDTH LATIN SMALL LETTER D
<UFF45> <U0065> % FULLWIDTH LATIN SMALL LETTER E
<UFF46> <U0066> % FULLWIDTH LATIN SMALL LETTER F
<UFF47> <U0067> % FULLWIDTH LATIN SMALL LETTER G
<UFF48> <U0068> % FULLWIDTH LATIN SMALL LETTER H
<UFF49> <U0069> % FULLWIDTH LATIN SMALL LETTER I
<UFF4A> <U006A> % FULLWIDTH LATIN SMALL LETTER J
<UFF4B> <U006B> % FULLWIDTH LATIN SMALL LETTER K
<UFF4C> <U006C> % FULLWIDTH LATIN SMALL LETTER L
<UFF4D> <U006D> % FULLWIDTH LATIN SMALL LETTER M
<UFF4E> <U006E> % FULLWIDTH LATIN SMALL LETTER N
<UFF4F> <U006F> % FULLWIDTH LATIN SMALL LETTER O
<UFF50> <U0070> % FULLWIDTH LATIN SMALL LETTER P
<UFF51> <U0071> % FULLWIDTH LATIN SMALL LETTER Q
<UFF52> <U0072> % FULLWIDTH LATIN SMALL LETTER R
<UFF53> <U0073> % FULLWIDTH LATIN SMALL LETTER S
<UFF54> <U0074> % FULLWIDTH LATIN SMALL LETTER T
<UFF55> <U0075> % FULLWIDTH LATIN SMALL LETTER U
<UFF56> <U0076> % FULLWIDTH LATIN SMALL LETTER V
<UFF57> <U0077> % FULLWIDTH LATIN SMALL LETTER W
<UFF58> <U0078> % FULLWIDTH LATIN SMALL LETTER X
<UFF59> <U0079> % FULLWIDTH LATIN SMALL LETTER Y
<UFF5A> <U007A> % FULLWIDTH LATIN SMALL LETTER Z
<UFF5B> <U007B> % FULLWIDTH LEFT CURLY BRACKET
<UFF5C> <U007C> % FULLWIDTH VERTICAL LINE
<UFF5D> <U007D> % FULLWIDTH RIGHT CURLY BRACKET
<UFF5E> <U007E> % FULLWIDTH TILDE
<UFF5F> <U2985> % FULLWIDTH LEFT WHITE PARENTHESIS
<UFF60> <U2986> % FULLWIDTH RIGHT WHITE PARENTHESIS
<UFFE0> <U00A2> % FULLWIDTH CENT SIGN
<UFFE1> <U00A3> % FULLWIDTH POUND SIGN
<UFFE2> <U00AC> % FULLWIDTH NOT SIGN
<UFFE3> <U00AF> % FULLWIDTH MACRON
<UFFE4> <U00A6> % FULLWIDTH BROKEN BAR
<UFFE5> <U00A5> % FULLWIDTH YEN SIGN
<UFFE6> <U20A9> % FULLWIDTH WON SIGN

translit_end

END LC_CTYPE
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          comment_char %
escape_char /
% Charset: UTF-8

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% Akan locale for Ghana
%
% Prepared and contributed to glibc by Chris Leonard <cjl@sugarlabs.org>
% and Jojoo Imbeah <jojoo.imbeah@kasahorow.com>
%
% This locale data has been developed by:
% Sugar Labs,  http://www.sugarlabs.org/
% kasahorow, http://www.kasahorow.org/
%
% build with: localedef -f UTF-8 -i ak_GH ak_GH
%
% This file is a part of GNU C Library (glibc) and contains locale data. The
% Free Software Foundation does not claim any copyright interest in the
% locale data contained in this file. The foregoing does not affect the
% license of GNU C Library (glibc) as a whole. It does not exempt you from the
% conditions of the license if your use would otherwise be governed by
% that license.
%
%
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

LC_IDENTIFICATION
title        "Akan locale for Ghana"
source       "Sugar Labs / OLPC"
address      ""
contact      "sugarlabs.org"
email        "libc-alpha@sourceware.org"
tel          ""
fax          ""
language     "Akan"
territory    "Ghana"
revision     "1.0"
date         "2013-08-24"
%
category  "ak_GH:2013";LC_IDENTIFICATION
category  "ak_GH:2013";LC_CTYPE
category  "ak_GH:2013";LC_COLLATE
category  "ak_GH:2013";LC_TIME
category  "ak_GH:2013";LC_NUMERIC
category  "ak_GH:2013";LC_MONETARY
category  "ak_GH:2013";LC_PAPER
category  "ak_GH:2013";LC_MEASUREMENT
category  "ak_GH:2013";LC_MESSAGES
category  "ak_GH:2013";LC_NAME
category  "ak_GH:2013";LC_ADDRESS
category  "ak_GH:2013";LC_TELEPHONE
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
% Sanda-Ɔpɛpɔn, Kwakwar-Ɔgyefuo, Ebɔw-Ɔbenem, Ebɔbira-Oforisuo, Esusow Aketseaba-Kɔtɔnimba, Obirade-Ayɛwohomumu, Ayɛwoho-Kitawonsa, Difuu-Ɔsandaa, Fankwa-Ɛbɔ, Ɔbɛsɛ-Ahinime, Ɔberɛfɛw-Obubuo, Mumu-Ɔpɛnimba
mon           "<U0053><U0061><U006E><U0064><U0061><U002D><U0186><U0070><U025B><U0070><U0254><U006E>";/
     "<U004B><U0077><U0061><U006B><U0077><U0061><U0072><U002D><U0186><U0067><U0079><U0065><U0066><U0075><U006F>";/
     "<U0045><U0062><U0254><U0077><U002D><U0186>