U0417><U042C>"
collating-element <Z-ss> from "<U0417><U044C>"
collating-element <z-SS> from "<U0437><U042C>"
collating-element <z-ss> from "<U0437><U044C>"

collating-symbol <L+SS>
collating-element <L-SS> from "<U041B><U042C>"
collating-element <L-ss> from "<U041B><U044C>"
collating-element <l-SS> from "<U043B><U042C>"
collating-element <l-ss> from "<U043B><U044C>"

collating-symbol <N+SS>
collating-element <N-SS> from "<U041D><U042C>"
collating-element <N-ss> from "<U041D><U044C>"
collating-element <n-SS> from "<U043D><U042C>"
collating-element <n-ss> from "<U043D><U044C>"

collating-symbol <R+SS>
collating-element <R-SS> from "<U0420><U042C>"
collating-element <R-ss> from "<U0420><U044C>"
collating-element <r-SS> from "<U0440><U042C>"
collating-element <r-ss> from "<U0440><U044C>"

collating-symbol <S+SS>
collating-element <S-SS> from "<U0421><U042C>"
collating-element <S-ss> from "<U0421><U044C>"
collating-element <s-SS> from "<U0441><U042C>"
collating-element <s-ss> from "<U0441><U044C>"

collating-symbol <T+SS>
collating-element <T-SS> from "<U0422><U042C>"
collating-element <T-ss> from "<U0422><U044C>"
collating-element <t-SS> from "<U0442><U042C>"
collating-element <t-ss> from "<U0442><U044C>"

collating-symbol <TSE+SS>
collating-element <TS-SS> from "<U0426><U042C>"
collating-element <TS-ss> from "<U0426><U044C>"
collating-element <ts-SS> from "<U0446><U042C>"
collating-element <ts-ss> from "<U0446><U044C>"


collating-symbol <CAP-MIN>
collating-symbol <MIN-CAP>

% Taken from bg_BG 2.0.1:

% We have made the following changes to the basic collation scheme in
% the file iso14651_t1:
%   1. The Cyrillic script is first in the order.
%   2. The non-Bulgarian Cyrillic letters are sorted according to
%      their transliteration with Bulgarian Cyrillic letters.

% Local changes:
% Added <UKR-GHE> collation symbol at proper position.
% Reordering of <UKR-I>,<UKR-YI> to wrong positions (according to Ukrainian
% alhabet) was removed.

reorder-after <9>
<CYR-A>
<CYR-BE>
<CYR-VE>
<CYR-GHE>
<UKR-GHE>
<CYR-DE>
<CYR-GZHE>
<CYR-DJE>
<CYR-IE>
<UKR-IE>
<CYR-IO>
<CYR-ZHE>
<CYR-ZE>
<CYR-DZE>
<CYR-I>
<UKR-I>
<UKR-YI>
<CYR-IBRE>
<CYR-JE>
<CYR-KA>
<CYR-EL>
<CYR-LJE>
<CYR-EM>
<CYR-EN>
<CYR-NJE>
<CYR-O>
<CYR-PE>
<CYR-ER>
<CYR-ES>
<CYR-TE>
<CYR-KJE>
<CYR-TSHE>
<CYR-OU>
<CYR-OUBRE>
<CYR-EF>
<CYR-HA>
<CYR-TSE>
<CYR-CHE>
<CYR-DCHE>
<CYR-SHA>
<CYR-SHTSHA>
<CYR-SIGDUR>
<CYR-YEROU>
<CYR-SIGMOUIL>
<CYR-E>
<CYR-YOU>
<CYR-YA>

% Placing <UKR-GHE> to proper position.
reorder-after <U0413>
<U0490> <UKR-GHE>;<BAS>;<CAP>;IGNORE
<U0403> <CYR-GHE>;<CYR-GZHE>;<CAP>;IGNORE % Mac. gje
reorder-after <U0433>
<U0491> <UKR-GHE>;<BAS>;<MIN>;IGNORE
<U0453> <CYR-GHE>;<CYR-GZHE>;<MIN>;IGNORE % Mac. gje

reorder-after <U0414>
<U0402> "<U003C><U0043><U0059><U0052><U002D><U0044><U0045><U003E><U003C><U0043><U0059><U0052><U002D><U005A><U0048><U0045><U003E>";"<U003C><U004C><U0049><U0047><U003E><U003C><U004C><U0049><U0047><U003E>";"<U003C><U0043><U0041><U0050><U003E><U003C><U0043><U0041><U0050><U003E>";IGNORE % CYR-DJE
<U040F> "<U003C><U0043><U0059><U0052><U002D><U0044><U0045><U003E><U003C><U0043><U0059><U0052><U002D><U005A><U0048><U0045><U003E>";"<U003C><U0043><U0059><U0052><U002D><U0044><U0043><U0048><U0045><U003E><U003C><U004C><U0049><U0047><U003E>";"<U003C><U0043><U0041><U0050><U003E><U003C><U0043><U0041><U0050><U003E>";IGNORE % CYR-DCHE
<U0405> "<U003C><U0043><U0059><U0052><U002D><U0044><U0045><U003E><U003C><U0043><U0059><U0052><U002D><U005A><U0045><U003E>";"<U003C><U004C><U0049><U0047><U003E><U003C><U004C><U0049><U0047><U003E>";"<U003C><U0043><U0041><U0050><U003E><U003C><U0043><U0041><U0050><U003E>";IGNORE % CYR-DZE
reorder-after <U0434>
<U0452> "<U003C><U0043><U0059><U0052><U002D><U0044><U0045><U003E><U003C><U0043><U0059><U0052><U002D><U005A><U0048><U0045><U003E>";"<U003C><U004C><U0049><U0047><U003E><U003C><U004C><U0049><U0047><U003E>";"<U003C><U004D><U0049><U004E><U003E><U003C><U004D><U0049><U004E><U003E>";IGNORE % CYR-DJE
<U045F> "<U003C><U0043><U0059><U0052><U002D><U0044><U0045><U003E><U003C><U0043><U0059><U0052><U002D><U005A><U0048><U0045><U003E>";"<U003C><U0043><U0059><U0052><U002D><U0044><U0043><U0048><U0045><U003E><U003C><U004C><U0049><U0047><U003E>";"<U003C><U004D><U0049><U004E><U003E><U003C><U004D><U0049><U004E><U003E>";IGNORE % CYR-DCHE
<U0455> "<U003C><U0043><U0059><U0052><U002D><U0044><U0045><U003E><U003C><U0043><U0059><U0052><U002D><U005A><U0045><U003E>";"<U003C><U004C><U0049><U0047><U003E><U003C><U004C><U0049><U0047><U003E>";"<U003C><U004D><U0049><U004E><U003E><U003C><U004D><U0049><U004E><U003E>";IGNORE % CYR-DZE

reorder-after <U0435>
<U0454> <CYR-IE>;<UKR-IE>;<MIN>;IGNORE
<U0451> <CYR-IE>;<CYR-IO>;<MIN>;IGNORE
<U044D> <CYR-IE>;<CYR-E>;<MIN>;IGNORE
reorder-after <U0415>
<U0404> <CYR-IE>;<UKR-IE>;<CAP>;IGNORE
<U0401> <CYR-IE>;<CYR-IO>;<CAP>;IGNORE
<U042D> <CYR-IE>;<CYR-E>;<CAP>;IGNORE

reorder-after <U041A>
<U040C> <CYR-KA>;<CYR-KJE>;<CAP>;IGNORE
reorder-after <U043A>
<U045C> <CYR-KA>;<CYR-KJE>;<MIN>;IGNORE

reorder-after <U041D>
<U040A> "<U003C><U0043><U0059><U0052><U002D><U0045><U004E><U003E><U003C><U0043><U0059><U0052><U002D><U0053><U0049><U0047><U004D><U004F><U0055><U0049><U004C><U003E>";"<U003C><U004C><U0049><U0047><U003E><U003C><U004C><U0049><U0047><U003E>";"<U003C><U0043><U0041><U0050><U003E><U003C><U0043><U0041><U0050><U003E>";IGNORE % CYR-NJE
reorder-after <U043D>
<U045A> "<U003C><U0043><U0059><U0052><U002D><U0045><U004E><U003E><U003C><U0043><U0059><U0052><U002D><U0053><U0049><U0047><U004D><U004F><U0055><U0049><U004C><U003E>";"<U003C><U004C><U0049><U0047><U003E><U003C><U004C><U0049><U0047><U003E>";"<U003C><U004D><U0049><U004E><U003E><U003C><U004D><U0049><U004E><U003E>";IGNORE % CYR-NJE

reorder-after <U0427>
<U040B> <CYR-CHE>;<CYR-TSHE>;<CAP>;IGNORE
reorder-after <U0447>
<U045B> <CYR-CHE>;<CYR-TSHE>;<MIN>;IGNORE

reorder-after <U041B>
<U0409> "<U003C><U0043><U0059><U0052><U002D><U0045><U004C><U003E><U003C><U0043><U0059><U0052><U002D><U0053><U0049><U0047><U004D><U004F><U0055><U0049><U004C><U003E>";"<U003C><U004C><U0049><U0047><U003E><U003C><U004C><U0049><U0047><U003E>";"<U003C><U0043><U0041><U0050><U003E><U003C><U0043><U0041><U0050><U003E>";IGNORE % CYR-LJE
reorder-after <U043B>
<U0459> "<U003C><U0043><U0059><U0052><U002D><U0045><U004C><U003E><U003C><U0043><U0059><U0052><U002D><U0053><U0049><U0047><U004D><U004F><U0055><U0049><U004C><U003E>";"<U003C><U004C><U0049><U0047><U003E><U003C><U004C><U0049><U0047><U003E>";"<U003C><U004D><U0049><U004E><U003E><U003C><U004D><U0049><U004E><U003E>";IGNORE % CYR-LJE

reorder-after <U0423>
<U040E> <CYR-OU>;<CYR-OUBRE>;<CAP>;IGNORE
reorder-after <U0443>
<U045E> <CYR-OU>;<CYR-OUBRE>;<MIN>;IGNORE

% Capital letters go before small letters. ("<U0041>"<"<U0061>")
reorder-after <CAP>
<CAP-MIN>
<MIN-CAP>
<MIN>


% Reorder letters with soft sign
% [<U0432><U0434><U0437><U043B><U043D><U0440><U0441><U0442><U0446>] + <U044C>

reorder-after <CYR-VE>
<V+SS>
reorder-after <U0412>
<V-SS> <CYR-VE>;<BAS>;<CAP>;<V+SS>
<V-ss> <CYR-VE>;<BAS>;<CAP-MIN>;<V+SS>
reorder-after <U0432>
<v-SS> <CYR-VE>;<BAS>;<MIN-CAP>;<V+SS>
<v-ss> <CYR-VE>;<BAS>;<MIN>;<V+SS>

reorder-after <CYR-DE>
<D+SS>
reorder-after <U0414>
<D-SS> <CYR-DE>;<BAS>;<CAP>;<D+SS>
<D-ss> <CYR-DE>;<BAS>;<CAP-MIN>;<D+SS>
reorder-after <U0434>
<d-SS> <CYR-DE>;<BAS>;<MIN-CAP>;<D+SS>
<d-ss> <CYR-DE>;<BAS>;<MIN>;<D+SS>

reorder-after <CYR-ZE>
<Z+SS>
reorder-after <U0417>
<Z-SS> <CYR-ZE>;<BAS>;<CAP>;<Z+SS>
<Z-ss> <CYR-ZE>;<BAS>;<CAP-MIN>;<Z+SS>
reorder-after <U0437>
<z-SS> <CYR-ZE>;<BAS>;<MIN-CAP>;<Z+SS>
<z-ss> <CYR-ZE>;<BAS>;<MIN>;<Z+SS>

reorder-after <CYR-EL>
<L+SS>
reorder-after <U041B>
<L-SS> <CYR-EL>;<BAS>;<CAP>;<L+SS>
<L-ss> <CYR-EL>;<BAS>;<CAP-MIN>;<L+SS>
reorder-after <U043B>
<l-SS> <CYR-EL>;<BAS>;<MIN-CAP>;<L+SS>
<l-ss> <CYR-EL>;<BAS>;<MIN>;<L+SS>

reorder-after <CYR-EN>
<N+SS>
reorder-after <U041D>
<N-SS> <CYR-EN>;<BAS>;<CAP>;<N+SS>
<N-ss> <CYR-EN>;<BAS>;<CAP-MIN>;<N+SS>
reorder-after <U043D>
<n-SS> <CYR-EN>;<BAS>;<MIN-CAP>;<N+SS>
<n-ss> <CYR-EN>;<BAS>;<MIN>;<N+SS>

reorder-after <CYR-ER>
<R+SS>
reorder-after <U0420>
<R-SS> <CYR-ER>;<BAS>;<CAP>;<R+SS>
<R-ss> <CYR-ER>;<BAS>;<CAP-MIN>;<R+SS>
reorder-after <U0440>
<r-SS> <CYR-ER>;<BAS>;<MIN-CAP>;<R+SS>
<r-ss> <CYR-ER>;<BAS>;<MIN>;<R+SS>

reorder-after <CYR-ES>
<S+SS>
reorder-after <U0421>
<S-SS> <CYR-ES>;<BAS>;<CAP>;<S+SS>
<S-ss> <CYR-ES>;<BAS>;<CAP-MIN>;<S+SS>
reorder-after <U0441>
<s-SS> <CYR-ES>;<BAS>;<MIN-CAP>;<S+SS>
<s-ss> <CYR-ES>;<BAS>;<MIN>;<S+SS>

reorder-after <CYR-TE>
<T+SS>
reorder-after <U0422>
<T-SS> <CYR-TE>;<BAS>;<CAP>;<T+SS>
<T-ss> <CYR-TE>;<BAS>;<CAP-MIN>;<T+SS>
reorder-after <U0442>
<t-SS> <CYR-TE>;<BAS>;<MIN-CAP>;<T+SS>
<t-ss> <CYR-TE>;<BAS>;<MIN>;<T+SS>

reorder-after <CYR-TSE>
<TSE+SS>
reorder-after <U0426>
<TS-SS> <CYR-TSE>;<BAS>;<CAP>;<TSE+SS>
<TS-ss> <CYR-TSE>;<BAS>;<CAP-MIN>;<TSE+SS>
reorder-after <U0446>
<ts-SS> <CYR-TSE>;<BAS>;<MIN-CAP>;<TSE+SS>
<ts-ss> <CYR-TSE>;<BAS>;<MIN>;<TSE+SS>

% To get back to correct but still unofficial pre-1991 alphabet uncomment the
% following lines that move soft sign (<CYR-YEROU>) to the end of the alphabet.
%
% reorder-after <CYR-YA>
% <CYR-YEROU>
% reorder-after <U042F>
% <U042C> <CYR-YEROU>;<BAS>;<CAP>;IGNORE
% reorder-after <U044F>
% <U044C> <CYR-YEROU>;<BAS>;<MIN>;IGNORE

reorder-end


END LC_COLLATE



LC_MESSAGES


% WARNING: symbols "<U0059>" and "<U0043><U0079><U0072><U0069><U006C><U006C><U0069><U0063><U005F><U004E>" are placed at one key in Ukrainian keyboard
% layout although the meaning is semantically opposite ("<U0059>" stands for "<U0059><U0065><U0073>"
% while "<U0043><U0079><U0072><U0069><U006C><U006C><U0069><U0063><U005F><U004E>" stands for "<U004E><U006F>").
%
% This problem may be dealt with by requiring at least two letters to be
% entered in Ukrainian language.

% A regular expression that describes possible yes-responses
% "<U0079>", "<U0059>", "<U002B>", "<U0074><U0061>" or "<U0074><U0061><U006B>" in Cyrillic
yesexpr "<U005E><U0028><U005B><U0059><U0079><U002B><U005D><U007C><U005B><U0422><U0442><U005D><U005B><U0410><U0430><U005D><U005B><U041A><U043A><U005D><U003F><U0029><U0024>"

% WARNING: symbols "<U004E>" and "<U0043><U0079><U0072><U0069><U006C><U006C><U0069><U0063><U005F><U0054>" are placed at one key in Ukrainian
% keyboard layout although the meaning is semantically opposite ("<U004E>" stands for
% "<U004E><U006F>" while "<U0043><U0079><U0072><U0069><U006C><U006C><U0069><U0063><U005F><U0054>" stands for "<U0059><U0065><U0073>").
%
% We may require two Ukrainian letters as input to deal with this potential
% problem.

% A regular expression that describes possible no-responses.
% "<U006E>", "<U004E>", "<U002D>" or word "<U006E><U0069>" in Cyrillic
noexpr  "<U005E><U0028><U005B><U004E><U006E><U002D><U005D><U007C><U005B><U041D><U043D><U005D><U005B><U0406><U0456><U005D><U0029><U0024>"
% "<U006E>" "<U004E>" "<U002D>" or word "<U006E><U0069>" in Cyrillic


% Output string for ``yes'' ("<U0074><U0061><U006B>").
yesstr "<U0442><U0430><U043A>"

% Output string for ``no'' ("<U006E><U0069>").
nostr "<U043D><U0456>"

END LC_MESSAGES



LC_MONETARY

% Examples:
%
% 100,00 hr
% -100,00 hr
% UAH 100,00
% UAH -100,00
%
%         0,01 hr
%         0,10 hr
%         1,00 hr
%        10,00 hr
%       100,00 hr
%      1000,00 hr (EXCEPTION)
%    10 000,00 hr
%   100 000,00 hr
% 1 000 000,00 hr
% ...
%
% Note:
% There is potential conflict between "<U0068><U0072><U0079><U0076><U006E><U0079><U0061>" ("<U0068><U0072>", "<U0068><U0072><U0076><U002E>", money),
% "<U0068><U0072><U0061><U006D>" ("<U0068>","<U0068><U0072><U002E>", weight) and "<U0068><U006F><U0064><U0079><U006E><U0061>" ("<U0068><U006F><U0064>","<U0068><U006F><U0064><U002E>", time),
% because some people uses "<U0068>" for "<U0068><U006F><U0064><U0079><U006E><U0079>", "<U0068><U0072>" for "<U0068><U0072><U0061><U006D><U0079>", etc.
%
% 200h - 200 hram (weight)
% 200 hr. - 200 hram (weight)
% 200hd - 200 hodyn (time)
% 200 hod. - 200 hodyn (time)
% 200hr - 200 hryven (money)
% 200 hrv. - 200 hryven (money)

% the local currency symbol
currency_symbol           "<U0433><U0440><U043D><U002E>" % hr (hryvnya)

% This must be a 4-character string containing the international currency
% symbol as defined by the ISO 4217 standard (three characters) followed
% by a separator.
%
% DSTU ISO 3166
% Code   Name    Name in English language
% UAH    <U0433><U0440><U0438><U0432><U043D><U044F>  hryvnya
int_curr_symbol           "<U0055><U0041><U0048><U0020>"

% This string is used as the decimal delimiter when formatting monetary
% quantities.
% see LC_NUMERIC:decimal_point
mon_decimal_point         "<U002C>"

% This string is used as a thousands separator when formatting monetary
% quantities.
% see LC_NUMERIC:thousands separator
mon_thousands_sep         "<U00A0>" % <NBSP> (0xA0)

% Define  the  size of each group of digits in formatted monetary
% quantities.  The operand is a sequence of integers separated by
% semicolons. Each integer specifies the number of digits in each
% group,  with the initial integer defining the size of the group
% immediately  preceding the decimal delimiter, and the following
% integers  defining the preceding groups. If the last integer is
% not  -1,  then the size of the previous group (if any) shall be
% repeatedly  used  for  the remainder of the digits. If the last
% integer is -1, then no further grouping shall be performed.
%
% FIXME:
%   Note difference between "<U0031><U0032><U0033><U0020><U0034><U0035><U0036><U0020><U0037><U0038><U0039><U002C><U0030><U0031>" and "<U0031><U0032><U0033><U0034><U002C><U0035><U0036>".
%   Unfortunately, it can't be implemented with current (2.3.6) glibc.
mon_grouping              3;3

% String that is used to indicate a positive sign for monetary
% quantities
positive_sign             ""

% String that is used to indicate a negative sign for monetary
% quantities
negative_sign             "<U002D>"

% An integer representing the number of fractional digits (those to the right of
% the decimal delimiter) to be written in a formatted monetary quantity using
% int_curr_symbol.
int_frac_digits           2

% An integer representing the number of fractional digits (those to the right of
% the decimal delimiter) to be written in a formatted monetary quantity using
% currency_symbol.
frac_digits               2

% 1 - the currency_symbol or int_curr_symbol should precede the
% formatted monetary quantity.
% 0 - the symbol succeeds the value.
p_cs_precedes             0
int_p_cs_precedes         1

% 0 - the currency_symbol succeeds the negative value.
% 1 - the currency_symbol precedes the negative value.
n_cs_precedes             0
int_n_cs_precedes         1

% 0 - means that no space should be printed between the currency_symbol
% and the value for a monetary quantity with a non-negative value.
% 1 - means that a space should be printed between the currency_symbol
% and the value.
% 2 - means that a space should be printed between the symbol and the
% sign string, if adjacent.
p_sep_by_space            2
int_p_sep_by_space        2

% 0 - no space separates the currency_symbol or int_curr_symbol from the
% value for a negative monetary quantity.
% 1 - a space separates the symbol from the value.
% 2 - a space separates the symbol and the sign string, if adjacent.
n_sep_by_space            1
int_n_sep_by_space        1

% An integer set to a value indicating the positioning of the
% positive_sign for a monetary quantity with a non-negative value.
%
% 0 - Parentheses enclose the quantity and the currency_symbol or
% int_curr_symbol.
% 1 - The sign string precedes the quantity and the currency_symbol or the
% int_curr_symbol.
% 2 - The sign string succeeds the quantity and the currency_symbol or the
% int_curr_symbol.
% 3 - The sign string precedes the currency_symbol or the int_curr_symbol.
% 4 - The sign string succeeds the currency_symbol or the int_curr_symbol.
p_sign_posn               1
int_p_sign_posn           4

% An integer set to a value indicating the positioning of the
% negative_sign for a monetary quantity with a negative value.
%
% 0 - Parentheses enclose the quantity and the currency_symbol or
% int_curr_symbol.
% 1 - The sign string precedes the quantity and the currency_symbol or the
% int_curr_symbol.
% 2 - The sign string succeeds the quantity and the currency_symbol or the
% int_curr_symbol.
% 3 - The sign string precedes the currency_symbol or the int_curr_symbol.
% 4 - The sign string succeeds the currency_symbol or the int_curr_symbol.
n_sign_posn               1
int_n_sign_posn           4

END LC_MONETARY



LC_NUMERIC

% Examples:
%
%         1
%	 10
%       100
%      1000 (EXCEPTION)
%    10 000
%   100 000
% 1 000 000
%
% 1,0
% 0,1
% 0,01
% 0,001
% 0,0001
% 0,00001
%
%  1
% -1
%
% List with numbers - 1,0; 2,0; 3,0; 4,0.
%
% Note:
% We use ';' as separator between numbers.

% The string that will be used as the decimal delimiter when formatting
% numeric quantities.
decimal_point             "<U002C>" % see LC_MONETARY:mon_decimal_pint
% Comma cause lot of problems - changed to dot.
% decimal_point             "<U002E>" % see LC_MONETARY:mon_decimal_pint

% The string that will be used as a group separator when formatting
% numeric quantities.
% see LC_MONETARY:mon_thousands_sep
thousands_sep             "<U00A0>" % <NBSP> (0xA0)

% A string that describes the formatting of numeric quantities.
%
% See mon_grouping
%
% FIXME:
%   Note difference between "<U0031><U0032><U0033><U0020><U0034><U0035><U0036><U0020><U0037><U0038><U0039><U002C><U0030><U0031>" and "<U0031><U0032><U0033><U0034><U002C><U0035><U0036>".
%   Unfortunately, it can't be implemented with current glibc.
grouping                  3;3

END LC_NUMERIC



LC_TIME

% Examples of date:
%
% sereda, chotyrnadtcyate travnya dvitysyachi tret`oho roku n.e.
% sereda, chotyrnadtcyate travnya dvitysyachi tret`oho roku
% sereda, 14-e travnya 2003-ho roku n.e.
% sereda, 1-e travnya 2003-ho roku
% sereda, 1 travnya 2003
% sereda, 01-tra-2003
% sr, 01-tra-03
% sr, 01-tra-2003
% 01.05.03 (Recomended by DSTU)
% 01.05.2003 (Allowed but not recomended by DSTU)
% 2003.05.01 (Allowed but not recomended by DSTU)
% 01/tra/03 (Deprecated, but still commonly used format)
% 1-e travnya (not "<U0031><U0020><U0074><U0072><U0061><U0076><U006E><U0079><U0061>" or "<U0031><U0020><U0074><U0072><U0061><U0076><U0065><U006E><U0060>" or "<U0031><U002D><U0074><U0072><U0061>")
%
% Notes:
%  month after day, year after month
%  all month/weekday names and abbreviations in lower case
%  month name in date must be used in another form, than in calendar
%  day name may be used in another form in another context
%  (sereda, v seredu, tciyeyi seredy, etc.)

% Examples of time:
% 23:59:59 +0200
% 00:00:00 +0200
% 00:00

% Week description, consists of three fields:
% 1. Number of days in a week.
% 2. Gregorian date that is a first weekday (19971130 for Sunday, 19971201 for Monday).
% 3. The weekday number to be contained in the first week of the year.
%
% ISO 8601 conforming applications should use the values 7, 19971201 (a
% Monday), and 4 (Thursday), respectively.
% week 7;19971201;4
% But see BUG below.
week 7;19971130;4

% A list of abbreviated weekday names. (%a)
%
% BUG: glibc-2.3.6
%   Violation of ISO/IEC TR14652:2002 - weekday list must correlate with value
%   of <week> keyword (e.g. start from Monday in our case) but glibc assumes that
%   it always starts from Sunday. Stick to Sunday too until the bug is fixed.

% Note:
% Never use three letters for day abbreviations because of conflict between
% SEReda (day name) and
% SERpen` (month name).
abday /
        "<U043D><U0434>"; %nd  /
        "<U043F><U043D>"; %pn  /
        "<U0432><U0442>"; %vt  /
        "<U0441><U0440>"; %sr  /
        "<U0447><U0442>"; %cht /
        "<U043F><U0442>"; %pt  /
        "<U0441><U0431>"  %sb

% A list of weekday names starting with first day of week as defined by <week> keyword. (%A)
%
% BUG: glibc-2.3.6
%   Violation of ISO/IEC TR14652:2002 - weekday list must correlate with value
%   of <week> keyword (e.g. start from Monday in our case) but glibc assumes that
%   it always starts from Sunday. Stick to Sunday too until the bug is fixed.

day /
        "<U043D><U0435><U0434><U0456><U043B><U044F>";    %nedilya   /
	"<U043F><U043E><U043D><U0435><U0434><U0456><U043B><U043E><U043A>"; %ponedilok /
        "<U0432><U0456><U0432><U0442><U043E><U0440><U043E><U043A>";  %vivtorok  /
	"<U0441><U0435><U0440><U0435><U0434><U0430>";    %sereda    /
        "<U0447><U0435><U0442><U0432><U0435><U0440>";    %chetver   /
        "<U043F><U0027><U044F><U0442><U043D><U0438><U0446><U044F>";  %pjatnycya /
        "<U0441><U0443><U0431><U043E><U0442><U0430>"     %subota

% A list of abbreviated month names. (%b)
abmon /
        "<U0441><U0456><U0447>"; %sich /
        "<U043B><U044E><U0442>"; %lyut /
        "<U0431><U0435><U0440>"; %ber  /
        "<U043A><U0432><U0456>"; %kvi  /
        "<U0442><U0440><U0430>"; %tra  /
        "<U0447><U0435><U0440>"; %cher /
        "<U043B><U0438><U043F>"; %lyp  /
        "<U0441><U0435><U0440>"; %ser  /
        "<U0432><U0435><U0440>"; %ver  /
        "<U0436><U043E><U0432>"; %zhov /
        "<U043B><U0438><U0441>"; %lys  /
        "<U0433><U0440><U0443>"  %hru

% A list of month names in proper form for calendar, see alt_digits. (%B)
mon /
        "<U0441><U0456><U0447><U0435><U043D><U044C>";   %sichen`  /
        "<U043B><U044E><U0442><U0438><U0439>";    %lyutyj   /
        "<U0431><U0435><U0440><U0435><U0437><U0435><U043D><U044C>"; %berezen` /
        "<U043A><U0432><U0456><U0442><U0435><U043D><U044C>";  %kviten`  /
        "<U0442><U0440><U0430><U0432><U0435><U043D><U044C>";  %traven`  /
        "<U0447><U0435><U0440><U0432><U0435><U043D><U044C>";  %cherven` /
        "<U043B><U0438><U043F><U0435><U043D><U044C>";   %lypen`   /
        "<U0441><U0435><U0440><U043F><U0435><U043D><U044C>";  %serpen`  /
        "<U0432><U0435><U0440><U0435><U0441><U0435><U043D><U044C>"; %veresen` /
        "<U0436><U043E><U0432><U0442><U0435><U043D><U044C>";  %zhovten` /
        "<U043B><U0438><U0441><U0442><U043E><U043F><U0430><U0434>"; %lystopad /
        "<U0433><U0440><U0443><U0434><U0435><U043D><U044C>"   %hruden`

% Initially alt_digits was supposed to hold alternative symbols for _digits_,
% corresponding to %O modified conversion specification.
% Although in Ukrainian language alternate _names_ are used instead of digits.
% We'll use this keyword to present a list of month names in proper form for
% date, see mon.  (%Om)
%
% This hack is dedicated for months it won't work for other %O* modifiers
% (weeks, days etc).
%
alt_digits "<U0030>";	     % digits are starting from zero /
        "<U0441><U0456><U0447><U043D><U044F>";     % sichnya   /
        "<U043B><U044E><U0442><U043E><U0433><U043E>";    % lyutoho   /
        "<U0431><U0435><U0440><U0435><U0437><U043D><U044F>";   % bereznya  /
        "<U043A><U0432><U0456><U0442><U043D><U044F>";    % kvitnya   /
        "<U0442><U0440><U0430><U0432><U043D><U044F>";    % travnya   /
        "<U0447><U0435><U0440><U0432><U043D><U044F>";    % chervnya  /
        "<U043B><U0438><U043F><U043D><U044F>";     % lypnya    /
        "<U0441><U0435><U0440><U043F><U043D><U044F>";    % serpnya   /
        "<U0432><U0435><U0440><U0435><U0441><U043D><U044F>";   % veresnya  /
        "<U0436><U043E><U0432><U0442><U043D><U044F>";    % zhovtnya  /
        "<U043B><U0438><U0441><U0442><U043E><U043F><U0430><U0434><U0430>"; % lystopada /
        "<U0433><U0440><U0443><U0434><U043D><U044F>"     % hrudnya

% Appropriate date representation for date(1).
date_fmt       "<U0025><U0041><U002C><U0020><U0025><U002D><U0064><U0020><U0025><U004F><U006D><U0020><U0025><U0059><U0020><U0025><U0058><U0020><U0025><U007A>"

% The appropriate date and time format. (%c)
d_t_fmt  "<U0025><U0061><U002C><U0020><U0025><U0064><U002D><U0025><U0062><U002D><U0025><U0059><U0020><U0025><U0058><U0020><U0025><U007A>"

% The appropriate date format. (%x)
d_fmt     "<U0025><U0064><U002E><U0025><U006D><U002E><U0025><U0079>"

% The appropriate time format. (%X)
t_fmt     "<U0025><U0054>"

% The appropriate time format when using 12h clock format. (%r)
% If the string is empty the 12-hour format is not supported by in the FDCC-set.
t_fmt_ampm ""

%The appropriate representation of the am and pm strings. (%p)
%am_pm     "<U0434><U043E>";"<U043F><U043E>"   % "<U0064><U006F>" ; "<U0070><U006F>" - do obidu/po obidi
% Empty strings are used to force 24h time format.
am_pm     "";""

% Define the first day of the week to be displayed in a calendar.
% This weekday is relative to the date defined in the <week> keyword.
first_weekday 2

% Define the first workday relative to the <week> keyword
first_workday 2

% Zymovyj CHas (winter time) or z.ch. (or nothing)
% Litnij CHas (summer time) or l.ch.
%
% ( or EET/EEST (Easter Europe [Summer] Time) )
% ( or Europe/Kyiv (or Kiev, in Russian) )
%
% Format:
%
% <ZoneName><Offset><ZoneName><Offset>,<rule>,<rule>[,...]
%
%  ZoneName - at least 3 letters, up to 10
%  Offset - (+|-)hh[:mm[:ss]]
%     - - time zone is east of Prime Meridian
%     + - time zone is west of Prime Meridian
%  rule: <date>[/time[/year]]
%   date:
%     J<JulianDay> , 1-365 (without 29.02)
%     <JulianDay> , 0-364 (without 29.02)
%     M<m>.<n>.<d> - m - month(1-12)
%                    n - week(1-5)
%                    d - day of week(0-7), day zero and day seven is Sunday
%   time - the same as <offset> (but without leading +/-)
%
timezone "<U0437><U002E><U0447><U002E><U002D><U0030><U0032><U003A><U0030><U0030><U043B><U002E><U0447><U002E><U002D><U0030><U0033><U003A><U0030><U0030><U002C><U004D><U0033><U002E><U0035><U002E><U0030><U002F><U0030><U0033><U003A><U0030><U0030><U002C><U004D><U0031><U0030><U002E><U0035><U002E><U0030><U002F><U0030><U0034><U003A><U0030><U0030>"

% Example:
%
%           traven`         cherven`
% pn      5 12 19 26       2  9 16 23 30
% vt      6 13 20 27       3 10 17 24
% sr      7 14 21 28       4 11 18 25
% ct  +1+ 8 15 22 29       5 12 19 26
% pt  +2++9+16 23 30       6 13 20 27
% *sb* *3*10*17*24*31*     *7*14*21+28+
% +nd+ +4+11+18+25+    +1+ +8+15+22+29+
%
% + - means red color
% * - means bold font
%
% Direction of the display of calendar dates:
% 1 - left-right from top
% 2 - top-down from left
% 3 - right-left from top
cal_direction 2

END LC_TIME



LC_PAPER
% Default paper: A4
height   297 % in millimeters
width    210 % in millimeters
END LC_PAPER



LC_TELEPHONE

% Format of a telephone number for international use.
%
% a area code without nationwide prefix (prefix is often <0>).
% A area code including nationwide prefix (prefix is often <0>).
% l local number (within area code).
% e extension (to local number)
% c country code
% C alternate carrier service code used for dialling abroad
% t Insert a <space> if the previous descriptor's value was not an empty
%  string; otherwise ignore.
%
% Example: +380 44 4908888
%
tel_int_fmt    "<U002B><U0025><U0063><U0020><U0025><U0061><U0020><U0025><U006C>"

% Format of a telephone number for domestic use.
% See tel_int_fmt.
%
% Example:  (044) 4908888
%
tel_dom_fmt    "<U0028><U0025><U0041><U0029><U0020><U0025><U006C>"

% Prefix to call international phone numbers.
int_select     "<U0038><U007E><U0031><U0030>"

% Prefix used from other countries to dial Ukraine. (%c)
int_prefix     "<U0033><U0038><U0030>"

END LC_TELEPHONE



LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT



LC_NAME
% Examples:
% Full name: pan Volodymyr Mykolayovych Lisivka
% Means:
%     pan - mister
%     Volodymyr - the man name (be Lord of the World :) )
%     Mykolayovych - middle name (son of Mykola)
%     Lisivka - family name
%
% For documents: Lisivka V. M.
% Regular name: pan Volodymyr Lisivka
% Bossname: Volodymyr Mykolayovych
% For friends: Volodya
% For family: Vovka (for brothers), Vova(for mother)
%
% Begining of official letters:
%  Shanovnyj(-na) Volodymyre Lisivka, ...
%
% A salutation to not well known person:
%   pane Lisivka
%
% A salutation to boss:
%   Volodymyre Mykolayovychu
%
% A salutation to well known person (but not a friend):
%   pane Volodymyre
%
% FIXME:
%  to make proper salutation, we must change person name and middle name
%  to proper forms (klychna forma), but this is imposible without
%  ispell-like rules.
%  Now I use regular form, like in Russian (sic!) langauge.

% Field descriptors for the <name_fmt> keyword:
% f - family name
% F - family name in uppercase
% g - first given name
% G - first given initial
% l - first given name with Latin letters
% o - other shorter name
% m - additional given name
% M - initials for additional given names
% p - profession
% s - salutation, such as "<U0044><U006F><U0063><U0074><U006F><U0072>"
% S - abbreviated salutation, such as "<U004D><U0072><U002E>" or "<U0044><U0072><U002E>"
% d - salutation, using the FDCC-sets conventions
%    1 for the name_gen
%    2 for name_mr
%    3 for name_mrs
%    4 for name_miss
%    5 for name_ms
% t - if the preceding field descriptor resulted in an empty string,
%     then the empty string, else a <space>.
name_fmt    "<U0025><U0064><U0025><U0074><U0025><U0067><U0025><U0074><U0025><U006D><U0025><U0074><U0025><U0066>" % pan Volodymyr Mykolayovych Lisivka

% A salutation valid for all persons
name_gen    "<U0448><U0430><U043D><U043E><U0432><U043D><U0438><U0439><U0028><U002D><U043D><U0430><U0029>" % shanovnyj(-na)

% A salutation valid for males
name_mr     "<U043F><U0430><U043D>" % pane

% A salutation valid for all females
name_ms     "<U043F><U0430><U043D><U0456>" % pani

% A salutation valid for married females
name_mrs    "<U043F><U0430><U043D><U0456>" % pani

% A salutation valid for unmarried females
name_miss   "<U043F><U0430><U043D><U043D><U0430>" % panna

END LC_NAME



LC_ADDRESS

% Example of address in a city:
%
%  Volodymyru Lisivtci
%  vul. Pul`uya 9, kv. 21
%  m. L`viv
%  79005
%
% Means:
%  Volodymyru Lisivtci - to what person
%  vul. Pul`uya 9, kv. 21 - street and building, apartment number (or firm name)
%  m. L`viv - city name (m. - misto)
%  79005 - ZIP code
%
% Example of firm address in a city:
%
%  Volodymyru Lisivtci, firma "<U004D><U0069><U0073><U0074><U0065><U0072><U0069><U0079><U0061>"
%  vul. Naukova 5a, 2-yj poverh, k. 239
%  m. L`viv
%  79005
%
% Means:
%  firma "<U004D><U0069><U0073><U0074><U0065><U0072><U0069><U0079><U0061>" - firm name
%  2-yj poverh - floor number (ground floor has number one)
%
% Example of address in a town:
%
%  Volodymyru Lisivtci
%  vul. Myru, kv. 19
%  m. Zdolbuniv
%  Rivnens`koji oblasti
%  00000
%
% Means:
%  Rivnens`koji oblasti - in region of city Rivne (oblast`)
%
% Example of address in a village:
%
%  Volodymyru Lisivtci
%  vul. Hranychna 7
%  s. Bohdashiv
%  Zdolbunivs`koho rajonu Rivnens`koji oblasti
%  00000
%
% Means:
%  vul. Hranychna 7 - street and building
%  s. Bohdashiv - village name (s. - selo)
%  Zdolbunivs`koho rajonu - in region of town Zdolbuniv (rajon)


% n Person's name, possibly constructed with the LC_NAME <name_fmt> keyword.
% a Care of person, or organization.
% f Firm name.
% d Department name.
% b Building name.
% s Street or block (eg. Japanese) name.
% h House number or designation.
% N Insert an <end-of-line> if the previous descriptor s value was not an empty
% string; otherwise ignore.
% t Insert a <space> if the previous descriptor s value was not an empty string;
% otherwise ignore.
% r Room number, door designation.
% e Floor number.
% C Country designation, from the <country_post> keyword.
% l Local township within town or city
% z Zip number, postal code.
% T Town, city.
% S State, province, or prefecture.
% c Country, as taken from data record.
%
% Each field descriptor may have an <R> after the <%> to specify that the
% information is taken from a Romanized version string of the
% entity.
%
% BUG: %n escape sequence from ISO/IEC 14652:2002 is not supported by glibc-2.3.2.
% BUG: %l escape sequence from ISO/IEC 14652:2002 is not supported by glibc-2.3.2.
%postal_fmt "<U0025><U0061><U0025><U0074><U0025><U006E><U0025><U0074><U0025><U0066><U0025><U0074><U0025><U0064><U0025><U004E><U0025><U0073><U0025><U0074><U0025><U0068><U0025><U0074><U002C><U0020><U0025><U0062><U0025><U0074><U0025><U0065><U0025><U0074><U0025><U0072><U0025><U004E><U0025><U006C><U0025><U0074><U0025><U0054><U0025><U0074><U0025><U0053><U0025><U004E><U0025><U007A><U0025><U004E><U0025><U0063>"
postal_fmt "<U0025><U0061><U0025><U0074><U0025><U0066><U0025><U0074><U0025><U0064><U0025><U004E><U0025><U0073><U0025><U0074><U0025><U0068><U0025><U0074><U002C><U0020><U0025><U0062><U0025><U0074><U0025><U0065><U0025><U0074><U0025><U0072><U0025><U004E><U0025><U0054><U0025><U0074><U0025><U0053><U0025><U004E><U0025><U007A><U0025><U004E><U0025><U0063>"

% Giving:
%
% Care of person Person's name Firm Department
% Street Number, Building Floor Room
% Town City State
% Zip
% Country

% Country name in the language of the current document.
country_name  "<U0423><U043A><U0440><U0430><U0457><U043D><U0430>" % Ukrayina

% Language name in the language of the current document.
lang_name     "<U0443><U043A><U0440><U0430><U0457><U043D><U0441><U044C><U043A><U0430>" % ukrayins`ka [mova]

% Abbreviation of the country, see CERT-MAILCODES. (%c)
country_post  "<U0055><U0041>"

% Two-letter abbreviation of the country, see ISO 3166.
country_ab2   "<U0055><U0041>"

% Three-letter abbreviation of the country, see ISO 3166.
country_ab3   "<U0055><U004B><U0052>"

% Numeric country code, see ISO 3166.
country_num   804

% Code for country car number.
country_car   "<U0055><U0041>"

% ISBN code, for books.
country_isbn  966

% Two-letter abbreviation of the language, see ISO 639.
lang_ab       "<U0075><U006B>"
% lang_ab2      "<U0075><U006B>" % ISO/IEC 14652:2002

% Three-letter abbreviation of the language, see ISO 639-2.
lang_term     "<U0075><U006B><U0072>"
% lang_ab3_term "<U0075><U006B><U0072>" % ISO/IEC 14652:2002

% Three-letter abbreviation of the language for library use, see ISO 639-2.
lang_lib      "<U0075><U006B><U0072>"
% lang_ab3_lib  "<U0075><U006B><U0072>" % ISO/IEC 14652:2002

END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     comment_char %
escape_char  /
%
% Portuguese Language Locale for Portugal with Euro
% Language: pt
% Territory: PT
% Option: euro
% Date: 2000-08-20
% Users: general
% Charset: ISO-8859-15
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "Portuguese locale for Portugal with Euro"
source     "Free Software Foundation, Inc."
address    "http:////www.gnu.org//software//libc//"
contact    ""
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "Portuguese"
territory  "Portugal"
revision   "1.0"
date       "2000-08-20"
%
category  "pt_PT@euro:2000";LC_IDENTIFICATION
category  "pt_PT@euro:2000";LC_CTYPE
category  "pt_PT@euro:2000";LC_COLLATE
category  "pt_PT@euro:2000";LC_TIME
category  "pt_PT@euro:2000";LC_NUMERIC
category  "pt_PT@euro:2000";LC_MONETARY
category  "pt_PT@euro:2000";LC_MESSAGES
category  "pt_PT@euro:2000";LC_PAPER
category  "pt_PT@euro:2000";LC_NAME
category  "pt_PT@euro:2000";LC_ADDRESS
category  "pt_PT@euro:2000";LC_TELEPHONE
category  "pt_PT@euro:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_COLLATE
copy "iso14651_t1"
END LC_COLLATE

LC_MESSAGES
copy "pt_PT"
END LC_MESSAGES

LC_MONETARY
copy "pt_PT"
END LC_MONETARY

LC_CTYPE
copy "pt_PT"
END LC_CTYPE

LC_NUMERIC
copy "pt_PT"
END LC_NUMERIC

LC_TIME
copy "pt_PT"
END LC_TIME

LC_PAPER
copy "pt_PT"
END LC_PAPER

LC_TELEPHONE
copy "pt_PT"
END LC_TELEPHONE

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_NAME
copy "pt_PT"
END LC_NAME

LC_ADDRESS
copy "pt_PT"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             comment_char    %
escape_char     /


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% Afar language locale for Eritrea (Cadu/Laaqo Dialects).
%
% Charset: UTF-8
%
% Afar terms provided by Mohamed Obakar <loubak@6sens.com> of the
% Afar Civilization Researcher, Melka Werer Research Center.
% Prepared and contributed to glibc by Daniel Yacob <locales@geez.org>.
%
% This locale data has been developed under the Yeha Project:
%      http://yeha.sourceforge.net/
%
% build with: localedef -f UTF-8 -i aa_ER aa_ER
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


LC_IDENTIFICATION
%
title      "Afar language locale for Eritrea (Cadu/Laaqo Dialects)."
source     "Ge'ez Frontier Foundation"
address    "7802 Solomon Seal Dr., Springfield, VA 22152, USA"
contact    ""
email      "locales@geez.org"
tel        ""
fax        ""
language   "aa"
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
%  Afar/ER Specific Data:
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

LC_ADDRESS
%
% This is the ISO_IEC TR14652 Locale definition for the LC_ADDRESS category.
%
postal_fmt    "<U0025><U007A><U0025><U0063><U0025><U0054><U0025><U0073>/
<U0025><U0062><U0025><U0065><U0025><U0072>"
country_name  "<U0045><U0072><U0065><U0074><U0072><U0069><U0061>"
country_post  "<U0045><U0052><U0049>"
country_ab2   "<U0045><U0052>"
country_ab3   "<U0045><U0052><U0049>"
country_num   232
% ER
country_car  "<U0045><U0052>"
% country_isbn  unknown, Need ISO 2108
lang_name     "<U0051><U0061><U0066><U0061><U0072>"
% aa
lang_ab       "<U0061><U0061>"
% aar
lang_term     "<U0061><U0061><U0072>"
% aar
lang_lib      "<U0061><U0061><U0072>"
%
END LC_ADDRESS


LC_MESSAGES
copy "aa_ET"
END LC_MESSAGES


LC_NAME
%
% This is the ISO_IEC TR14652 Locale definition for the LC_NAME category.
%
name_fmt    "<U0025><U0064><U0025><U0074><U0025><U0067><U0025><U0074>/
<U0025><U006D><U0025><U0074><U0025><U0066>"
name_gen    ""
name_mr     "<U0054><U006F><U006F><U0062><U006F><U006B><U006F><U0079><U0074><U0061>"
name_mrs    "<U0047><U0069><U0073><U0074><U0069>"
name_miss   "<U004D><U0061><U0071><U0061><U006E><U0078><U0061>"
name_ms     ""
%
END LC_NAME


LC_TIME
%
% Abbreviated weekday names (%a)
%
abday    "<U0041><U0063><U0061>";/
         "<U0045><U0074><U006C>";/
         "<U0054><U0061><U006C>";/
         "<U0041><U0072><U0062>";/
         "<U004B><U0061><U006D>";/
         "<U0047><U0075><U006D>";/
         "<U0053><U0061><U0062>"
%
% Full weekday names (%A)
%
day      "<U0041><U0063><U0061><U0061><U0064><U0061>";/
         "<U0045><U0074><U006C><U0065><U0065><U006E><U0069>";/
         "<U0054><U0061><U006C><U0061><U0061><U0074><U0061>";/
         "<U0041><U0072><U0062><U0061><U0071><U0061>";/
         "<U004B><U0061><U006D><U0069><U0069><U0073><U0069>";/
         "<U0047><U0075><U006D><U0071><U0061><U0074><U0061>";/
         "<U0053><U0061><U0062><U0074><U0069>"
%
% Abbreviated month names (%b)
%
abmon    "<U0051><U0075><U006E>";/
         "<U004E><U0061><U0068>";/
         "<U0043><U0069><U0067>";/
         "<U0041><U0067><U0064>";/
         "<U0043><U0061><U0078>";/
         "<U0051><U0061><U0073>";/
         "<U0051><U0061><U0064>";/
         "<U004C><U0065><U0071>";/
         "<U0057><U0061><U0079>";/
         "<U0044><U0069><U0074>";/
         "<U0058><U0069><U006D>";/
         "<U004B><U0061><U0078>"
%
% Full month names (%B)
%
mon      "<U0051><U0075><U006E><U0078><U0061><U0020><U0047><U0061><U0072><U0061><U0062><U006C><U0075>";/
         "<U004E><U0061><U0068><U0061><U0072><U0073><U0069><U0020><U004B><U0075><U0064><U006F>";/
         "<U0043><U0069><U0067><U0067><U0069><U006C><U0074><U0061><U0020><U004B><U0075><U0064><U006F>";/
         "<U0041><U0067><U0064><U0061><U0020><U0042><U0061><U0078><U0069><U0073><U0073><U006F>";/
         "<U0043><U0061><U0078><U0061><U0068><U0020><U0041><U006C><U0073><U0061>";/
         "<U0051><U0061><U0073><U0061><U0020><U0044><U0069><U0072><U0072><U0069>";/
         "<U0051><U0061><U0064><U006F><U0020><U0044><U0069><U0072><U0072><U0069>";/
         "<U004C><U0065><U0071><U0065><U0065><U006E><U0069>";/
         "<U0057><U0061><U0079><U0073><U0075>";/
         "<U0044><U0069><U0074><U0065><U006C><U0069>";/
         "<U0058><U0069><U006D><U006F><U006C><U0069>";/
         "<U004B><U0061><U0078><U0078><U0061><U0020><U0047><U0061><U0072><U0061><U0062><U006C><U0075>"
%
% Equivalent of AM PM
%
am_pm    "<U0073><U0061><U0061><U006B><U0075>";/
         "<U0063><U0061><U0072><U0072><U0061>"
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
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  comment_char %
escape_char  /

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% This file is derived from pap_AN ver0.2 (after AN was deprecated in ISO-3166)
% revision "0.2" date "2000-11-15"
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
title "Papiamento language for Curaçao"
source "information from native speaker"
address ""
contact "Pablo Saratxaga"
email "pablo@mandrakesoft.com"
tel ""
fax ""
language "pap"
territory "CW"
revision "1.0"
date "2013-09-27"

category i18n:2000;LC_IDENTIFICATION
category i18n:2000;LC_COLLATE
category i18n:2000;LC_CTYPE
category i18n:2000;LC_MESSAGES
category i18n:2000;LC_MONETARY
category i18n:2000;LC_NUMERIC
category i18n:2000;LC_TIME
category i18n:2000;LC_PAPER
category i18n:2000;LC_MEASUREMENT
category i18n:2000;LC_TELEPHONE
category i18n:2000;LC_ADDRESS

% ISO/IEC 14652: Converted comments to LC_IDENTIFICATION
%  added LC_PAPER, LC_MEASUREMENT, LC_TELEPHONE, LC_ADDRESS
% -- mckinstry@computer.org, 2000-07-03

END LC_IDENTIFICATION

LC_ADDRESS
postal_fmt "<U0025><U0064><U0025><U004E><U0025><U0066><U0025><U004E><U0025><U0064><U0025><U004E><U0025><U0062><U0025><U004E>/
<U0025><U0073><U0020><U0025><U0068><U0020><U0035><U0065><U0020><U0025><U0072><U0025><U004E>/
<U0025><U0043><U0025><U007A><U0020><U0025><U0054><U0025><U004E><U0025><U0063><U0025><U004E>"
% FIXME country_name for Antilles in Paplamento
% FIXME country_post MAIL_CEPTCODE for Nederland Antilles, AN?
% CW
country_ab2  "<U0043><U0057>"
% CUW
country_ab3  "<U0043><U0055><U0057>"
country_num  531
country_car  ""
country_isbn ""
% Papiamento
lang_name    "<U0050><U0061><U0070><U0069><U0061><U006D><U0065><U006E><U0074><U006F>"
% lang_ab
% pap
lang_term    "<U0070><U0061><U0070>"
% pap
lang_lib     "<U0070><U0061><U0070>"
END LC_ADDRESS

LC_CTYPE
copy "en_DK"
END LC_CTYPE

LC_COLLATE
copy "en_DK"
END LC_COLLATE

LC_MESSAGES
yesexpr "<U005E><U005B><U006A><U004A><U0079><U0059><U005D><U002E><U002A>"
noexpr  "<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
END LC_MESSAGES


LC_MONETARY
int_curr_symbol           "<U0041><U004E><U0047><U0020>"
currency_symbol           "<U0066>"
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
n_sign_posn               2
END LC_MONETARY

LC_TIME
abday   "<U0064><U006F>";"<U006C><U0075>";"<U006D><U0061>";/
        "<U0077><U0065>";"<U0072><U0061>";"<U0062><U0069>";/
        "<U0073><U0061>"
day     "<U0044><U006A><U0061><U0064><U006F><U006D><U0069><U006E><U0067><U006F>";/
        "<U0044><U006A><U0061><U006C><U0075><U006E><U0061>";/
        "<U0044><U006A><U0061><U006D><U0061><U0072><U0073>";/
        "<U0044><U006A><U0061><U0077><U0065><U0062><U0073>";/
        "<U0044><U006A><U0061><U0072><U0061><U0073><U006F><U006E>";/
        "<U0044><U006A><U0061><U0062><U0069><U0065><U0072><U006E><U0065>";/
        "<U0044><U006A><U0061><U0073><U0061><U0062><U0072><U0061>"
abmon   "<U0059><U0061><U006E>";"<U0046><U0065><U0062>";/
        "<U004D><U0061><U0072>";"<U0041><U0070><U0072>";/
        "<U004D><U0065><U0069>";"<U0059><U00FC><U006E>";/
        "<U0059><U00FC><U006C>";"<U004F><U0075><U0067>";/
        "<U0053><U00E8><U0070>";"<U004F><U006B><U0074>";/
        "<U004E><U006F><U0076>";"<U0044><U0065><U0073>"
mon     "<U0059><U0061><U006E><U00FC><U0061><U0072><U0069>";/
        "<U0046><U0065><U0062><U0072><U00FC><U0061><U0072><U0069>";/
        "<U004D><U0061><U0072><U0074>";/
        "<U0041><U0070><U0072><U0065><U006C>";/
        "<U004D><U0065><U0069>";/
        "<U0059><U00FC><U006E><U0069>";/
        "<U0059><U00FC><U006C><U0069>";/
        "<U004F><U0075><U0067><U00F9><U0073><U0074><U00F9><U0073>";/
        "<U0053><U00E8><U0070><U0074><U00E8><U006D><U0062><U0065><U0072>";/
        "<U004F><U006B><U0074><U006F><U0062><U0065><U0072>";/
        "<U004E><U006F><U0076><U00E8><U006D><U0062><U0065><U0072>";/
        "<U0044><U0065><U0073><U00E8><U006D><U0062><U0065><U0072>"
d_t_fmt "<U0025><U0061><U0020><U0025><U0064><U0020><U0025><U0062><U0020><U0025><U0059><U0020><U0025><U0054><U0020><U0025><U005A>"
d_fmt   "<U0025><U0064><U002D><U0025><U006D><U002D><U0025><U0079>"
t_fmt   "<U0025><U0054>"
am_pm   "";""
t_fmt_ampm ""
END LC_TIME

LC_NUMERIC
decimal_point             "<U002C>"
thousands_sep             ""
grouping                  0;0
END LC_NUMERIC

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

% Default paper: A4
LC_PAPER
height 297
width 210
END LC_PAPER

LC_TELEPHONE
tel_int_fmt "<U002B><U0025><U0063><U0020><U0025><U0061><U0020><U0025><U006C>"
% FIXME FIND tel_dom_fmt
% 00
int_select  "<U0030><U0030>"
% 599
int_prefix  "<U0035><U0039><U0039>"
END LC_TELEPHONE

LC_NAME
% Todo
copy "en_DK"
END LC_NAME
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             comment_char %
escape_char  /

% German Language Locale for Austria
% Source: O:sterreiches Normungsinstitut
% Address: Postfach 130, A-1021 Wien
% Contact: Gerhard Budin
% Email: not available
% Tel: +43-222-25 75 35 ext 310
% Fax: +43-222-216 32 72
% Language: de
% Territory: AT
% Revision: 4.3
% Date: 1996-10-15
% Users: general
% Charset: ISO-8859-1
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "German locale for Austria"
source     "O:sterreiches Normungsinstitut"
address    "Postfach 130, A-1021 Wien"
contact    "Gerhard Budin"
email      "bug-glibc-locales@gnu.org"
tel        ""
fax        ""
language   "German"
territory  "Austria"
revision   "1.0"
date       "2000-06-28"
%
category  "de_AT:2000";LC_IDENTIFICATION
category  "de_AT:2000";LC_CTYPE
category  "de_AT:2000";LC_COLLATE
category  "de_AT:2000";LC_TIME
category  "de_AT:2000";LC_NUMERIC
category  "de_AT:2000";LC_MONETARY
category  "de_AT:2000";LC_MESSAGES
category  "de_AT:2000";LC_PAPER
category  "de_AT:2000";LC_NAME
category  "de_AT:2000";LC_ADDRESS
category  "de_AT:2000";LC_TELEPHONE
category  "de_AT:2000";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_CTYPE
copy "de_DE"
END LC_CTYPE

LC_COLLATE
% Copy the template from ISO/IEC 14651
copy "iso14651_t1"
END LC_COLLATE

LC_MESSAGES
yesexpr "<U005E><U005B><U006A><U004A><U0079><U0059><U005D><U002E><U002A>"
noexpr  "<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
END LC_MESSAGES

LC_MONETARY
int_curr_symbol           "<U0045><U0055><U0052><U0020>"
currency_symbol           "<U20AC>"
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
copy "de_DE"
END LC_NUMERIC

LC_TIME
abday   "<U0053><U006F><U006E>";"<U004D><U006F><U006E>";/
	"<U0044><U0069><U0065>";"<U004D><U0069><U0074>";/
	"<U0044><U006F><U006E>";"<U0046><U0072><U0065>";/
	"<U0053><U0061><U006D>"
day     "<U0053><U006F><U006E><U006E><U0074><U0061><U0067>";/
	"<U004D><U006F><U006E><U0074><U0061><U0067>";/
	"<U0044><U0069><U0065><U006E><U0073><U0074><U0061><U0067>";/
	"<U004D><U0069><U0074><U0074><U0077><U006F><U0063><U0068>";/
	"<U0044><U006F><U006E><U006E><U0065><U0072><U0073><U0074><U0061><U0067>";/
	"<U0046><U0072><U0065><U0069><U0074><U0061><U0067>";/
	"<U0053><U0061><U006D><U0073><U0074><U0061><U0067>"
abmon   "<U004A><U00E4><U006E>";"<U0046><U0065><U0062>";/
	"<U004D><U00E4><U0072>";"<U0041><U0070><U0072>";/
	"<U004D><U0061><U0069>";"<U004A><U0075><U006E>";/
	"<U004A><U0075><U006C>";"<U0041><U0075><U0067>";/
	"<U0053><U0065><U0070>";"<U004F><U006B><U0074>";/
	"<U004E><U006F><U0076>";"<U0044><U0065><U007A>"
mon     "<U004A><U00E4><U006E><U006E><U0065><U0072>";/
	"<U0046><U0065><U0062><U0072><U0075><U0061><U0072>";/
	"<U004D><U00E4><U0072><U007A>";/
	"<U0041><U0070><U0072><U0069><U006C>";/
	"<U004D><U0061><U0069>";/
	"<U004A><U0075><U006E><U0069>";/
	"<U004A><U0075><U006C><U0069>";/
	"<U0041><U0075><U0067><U0075><U0073><U0074>";/
	"<U0053><U0065><U0070><U0074><U0065><U006D><U0062><U0065><U0072>";/
	"<U004F><U006B><U0074><U006F><U0062><U0065><U0072>";/
	"<U004E><U006F><U0076><U0065><U006D><U0062><U0065><U0072>";/
	"<U0044><U0065><U007A><U0065><U006D><U0062><U0065><U0072>"
d_t_fmt "<U0025><U0061><U0020><U0025><U0064><U0020><U0025><U0062><U0020><U0025><U0059><U0020><U0025><U0054><U0020><U0025><U005A>"
d_fmt   "<U0025><U0059><U002D><U0025><U006D><U002D><U0025><U0064>"
t_fmt   "<U0025><U0054>"
am_pm   "";""
t_fmt_ampm ""
date_fmt	"<U0025><U0061><U0020><U0025><U0062><U0020><U0025><U0065>/
<U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U005A><U0020><U0025><U0059>"
week    7;19971130;4
first_weekday 2
first_workday 2
END LC_TIME

LC_PAPER
height   297
width    210
END LC_PAPER

LC_TELEPHONE
tel_int_fmt    "<U002B><U0025><U0063><U0020><U0025><U0061><U0020><U0025>/
<U006C>"
tel_dom_fmt    "<U0025><U0061><U0020><U0025><U006C>"
int_prefix     "<U0034><U0033>"
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
country_ab2 "<U0041><U0054>"
country_ab3 "<U0041><U0055><U0054>"
country_num 040
% A
country_car    "<U0041>"
% Deutsch
lang_name     "<U0044><U0065><U0075><U0074><U0073><U0063><U0068>"
% de
lang_ab       "<U0064><U0065>"
% deu
lang_term     "<U0064><U0065><U0075>"
% ger
lang_lib      "<U0067><U0065><U0072>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   comment_char %
escape_char  /
%
% French Language Locale for Luxemburg
% Source: RAP
% Address: Sankt Jo//rgens Alle 8
%    DK-1615 Ko//benhavn V, Danmark
% Contact: Keld Simonsen
% Email: Keld.Simonsen@dkuug.dk
% Tel: +45 - 31226543
% Fa