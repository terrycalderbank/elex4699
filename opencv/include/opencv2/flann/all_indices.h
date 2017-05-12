escape_char /
comment_char %
%
% Slovak Language Locale for Slovak
% Source:
% Address: Narcisov<a'> 56, SK-821 01 Bratislava, Slovak Republic
% Contact: Stanislav Meduna
% Email:   stano@eunet.sk
% Tel:
% Fax:
% Language: sk
% Territory: SK
% Revision: 1.2
% Date: 1998-05-26
% Application: general
% Users: general
% Repertoiremap: mnemonic.ds
% Charset: ISO-8859-2
% Distribution and use is free, also for commercial purposes.

% 1997-05-14: Odvoden� z cs_CZ locale Vladim�ra Michla.
%             Collate algoritmy prevzat� bezo zmien (norma bola rovnak�),
%             vysvetlenie pozri cs_CZ

% spracovanie:
%%    localedef -i <tento-soubor> -f ISO-8859-2 sk_SK

%% Do s�boru /usr/share/locale/locale.alias je vhodn� dop�sa� nasledovn� aliasy:
%% sk	  sk_SK.ISO-8859-2
%% slovak sk_SK.ISO-8859-2

% Defin�cia typov znakov

LC_IDENTIFICATION
title      "Slovak locale for Slovak"
source     ""
address    "Narcisov<U00E1> 56, SK-821 01 Bratislava, Slovak Republic"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "Slovak"
territory  "Slovak"
revision   "1.0"
date       "2000-06-29"
%
category  "sk_SK:2000";LC_IDENTIFICATION
category  "sk_SK:2000";LC_CTYPE
category  "sk_SK:2000";LC_COLLATE
category  "sk_SK:2000";LC_TIME
category  "sk_SK:2000";LC_NUMERIC
category  "sk_SK:2000";LC_MONETARY
category  "sk_SK:2000";LC_MESSAGES
category  "sk_SK:2000";LC_PAPER
category  "sk_SK:2000";LC_NAME
category  "sk_SK:2000";LC_ADDRESS
category  "sk_SK:2000";LC_TELEPHONE
category  "sk_SK:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_CTYPE
copy "i18n"

translit_start
include  "translit_combining";""
translit_end
END LC_CTYPE

% Triedenie

LC_COLLATE
copy "cs_CZ"
END LC_COLLATE


%% LC_MESSAGES
%% ekvivalenty yes/no
%% -------------------------

LC_MESSAGES

yesexpr		"<U005E><U005B><U0061><U0041><U00E1><U00C1><U0079><U0059><U005D><U002E><U002A>"
noexpr  	"<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
yesstr		"<U00E1><U006E><U006F>"
nostr		"<U006E><U0069><U0065>"

END LC_MESSAGES

%% LC_MONETARY -- peniaze
%% -------------------------------------------------

LC_MONETARY

int_curr_symbol		"<U0045><U0055><U0052><U0020>"
currency_symbol		"<U20AC>"
mon_decimal_point	"<U002C>"
mon_thousands_sep	"<U00A0>"
mon_grouping      	3;3
positive_sign		""
negative_sign		"<U002D>"
int_frac_digits		2
frac_digits		2
p_cs_precedes		0
p_sep_by_space		1
n_cs_precedes		0
n_sep_by_space		1
p_sign_posn		1
n_sign_posn		1

END LC_MONETARY

%% ��sla
%% --------------

LC_NUMERIC

decimal_point		"<U002C>"
thousands_sep		"<U00A0>"
grouping		3;3

END LC_NUMERIC

%% �as

LC_TIME


abday		"<U004E><U0065>";/
		"<U0050><U006F>";/
		"<U0055><U0074>";/
		"<U0053><U0074>";/
		"<U0160><U0074>";/
		"<U0050><U0069>";/
		"<U0053><U006F>"

day		"<U004E><U0065><U0064><U0065><U013E><U0061>";/
		"<U0050><U006F><U006E><U0064><U0065><U006C><U006F><U006B>";/
		"<U0055><U0074><U006F><U0072><U006F><U006B>";/
		"<U0053><U0074><U0072><U0065><U0064><U0061>";/
		"<U0160><U0074><U0076><U0072><U0074><U006F><U006B>";/
		"<U0050><U0069><U0061><U0074><U006F><U006B>";/
		"<U0053><U006F><U0062><U006F><U0074><U0061>"

mon		"<U006A><U0061><U006E><U0075><U00E1><U0072>";/
		"<U0066><U0065><U0062><U0072><U0075><U00E1><U0072>";/
		"<U006D><U0061><U0072><U0065><U0063>";/
		"<U0061><U0070><U0072><U00ED><U006C>";/
		"<U006D><U00E1><U006A>";/
		"<U006A><U00FA><U006E>";/
		"<U006A><U00FA><U006C>";/
		"<U0061><U0075><U0067><U0075><U0073><U0074>";/
		"<U0073><U0065><U0070><U0074><U0065><U006D><U0062><U0065><U0072>";/
		"<U006F><U006B><U0074><U00F3><U0062><U0065><U0072>";/
		"<U006E><U006F><U0076><U0065><U006D><U0062><U0065><U0072>";/
		"<U0064><U0065><U0063><U0065><U006D><U0062><U0065><U0072>"

% Hm - m�me zau��van� skratky pre mesiace ?

abmon		"<U006A><U0061><U006E>";/
		"<U0066><U0065><U0062>";/
		"<U006D><U0061><U0072>";/
		"<U0061><U0070><U0072>";/
		"<U006D><U00E1><U006A>";/
		"<U006A><U00FA><U006E>";/
		"<U006A><U00FA><U006C>";/
		"<U0061><U0075><U0067>";/
		"<U0073><U0065><U0070>";/
		"<U006F><U006B><U0074>";/
		"<U006E><U006F><U0076>";/
		"<U0064><U0065><U0063>"

d_t_fmt		"<U0025><U0061><U00A0><U0025><U0065><U002E><U00A0><U0025><U0042><U00A0><U0025><U0059><U002C><U00A0><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U00A0><U0025><U005A>"

d_fmt 		"<U0025><U0064><U002E><U0025><U006D><U002E><U0025><U0059>"

t_fmt		"<U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053>"

t_fmt_ampm	"<U0025><U0049><U003A><U0025><U004D><U003A><U0025><U0053>"

am_pm   	"";""

date_fmt       "<U0025><U0061><U0020><U0025><U0062><U0020><U0025><U0065>/
<U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U005A><U0020><U0025><U0059>"

week		7;19971130;4
first_weekday	2
first_workday	2

END LC_TIME

%% END OF LOCALIZATION FILE for sk_SK.ISO-8859-2
%% Koniec lokaliza�n�ho s�boru pre slovensk� prostredie

LC_PAPER
% FIXME
height   297
% FIXME
width    210
END LC_PAPER

LC_TELEPHONE
tel_int_fmt    "<U002B><U0025><U0063><U0020><U0025><U0061><U0020><U0025>/
<U006C>"
int_prefix     "<U0034><U0032><U0031>"
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
country_ab2 "<U0053><U004B>"
country_ab3 "<U0053><U0056><U004B>"
country_num 703
% SK
country_car    "<U0053><U004B>"
% sk
lang_ab      "<U0073><U006B>"
% slk
lang_term    "<U0073><U006C><U006B>"
% slo
lang_lib    "<U0073><U006C><U006F>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                