4E><U0061><U0041><U005D><U002E><U002A>"
END LC_MESSAGES

LC_NAME
% %p%t%g%m%t%f
name_fmt  "<U0025><U0070><U0025><U0074><U0025><U0067><U0025><U006D><U0025><U0074><U0025><U0066>"
% kaddol
name_gen  "<U006B><U0061><U0064><U0064><U006F><U006C>"
% sokna
name_miss "<U0073><U006F><U006B><U006E><U0061>"
% ceerno
name_mr   "<U0063><U0065><U0065><U0072><U006E><U006F>"
% sokna
name_mrs  "<U0073><U006F><U006B><U006E><U0061>"
% sokna
name_ms   "<U0073><U006F><U006B><U006E><U0061>"
END LC_NAME

LC_ADDRESS
% %a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N
postal_fmt  "<U0025><U0061><U0025><U004E><U0025><U0066><U0025><U004E><U0025><U0064><U0025>/
<U004E><U0025><U0062><U0025><U004E><U0025><U0068><U0020><U0025><U0073><U0020><U0025>/
<U0065><U0020><U0025><U0072><U0025><U004E><U0025><U0054><U002C><U0020><U0025>/
<U0053><U0020><U0025><U007A><U0025><U004E><U0025><U0063><U0025><U004E>"
% Senegaal
country_name  "<U0053><U0065><U006E><U0065><U0067><U0061><U0061><U006C>"
% SN
country_post  "<U0053><U004E>"
% SN
country_ab2  "<U0053><U004E>"
% SEN
country_ab3  "<U0053><U0045><U004E>"
country_num  686
% SN
country_car  "<U0053><U004E>"
% Pulaar
lang_name    "<U0050><U0075><U006C><U0061><U0061><U0072>"
% ff
lang_ab      "<U0066><U0066>"
% ful
lang_term    "<U0066><U0075><U006C>"
% ful
lang_lib    "<U0066><U0075><U006C>"
END LC_ADDRESS

LC_TELEPHONE
% %c %a %l
tel_int_fmt  "<U0025><U0063><U0020><U0025><U0061><U0020><U0025><U006C>"
% %a %l
tel_dom_fmt  "<U0025><U0061><U0020><U0025><U006C>"
% 00
int_select   "<U0030><U0030>"
% 221
int_prefix   "<U0032><U0032><U0031>"
END LC_TELEPHONE
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        comment_char %
escape_char  /
%
% Breton Language Locale for France
% Source: thanks to Denise.Peden@enst-bretagne.fr (Denise Derrien-Peden)
% Address:
% Contact: Pablo Saratxaga
% Email: srtxg@chanae.alphanet.ch
% Tel:
% Fax:
% Language: br
% Territory: FR
% Revision: 0.5
% Date: 2001-01-28
% Users: general
% Charset: ISO-8859-1
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title "Breton language locale for France"
source "Denise.Peden@enst-bretagne.fr (Denise Derrien-Peden)"
address ""
contact "Pablo Saratxaga"
email "pablo@mandrakesoft.com"
tel ""
fax ""
language "Breton"
territory "France"
revision "0.54"
date "2001-01-28"

category br_FR:2000;LC_IDENTIFICATION
category br_FR:2000;LC_CTYPE
category br_FR:2000;LC_COLLATE
category br_FR:2000;LC_TIME
category br_FR:2000;LC_NUMERIC
category br_FR:2000;LC_PAPER
category br_FR:2000;LC_TELEPHONE
category br_FR:2000;LC_MEASUREMENT
category br_FR:2000;LC_ADDRESS
category br_FR:2000;LC_MONETARY
category br_FR:2000;LC_MESSAGES

END LC_IDENTIFICATION


LC_COLLATE
copy "iso14651_t1"

%% a b c ch c'h d e f g h i j k l m n o p q r s t u v w x y z
collating-symbol  <c-h-br>
collating-element <C-H> from "<U0043><U0048>"
collating-element <c-h> from "<U0063><U0068>"
collating-element <C-h> from "<U0043><U0068>"
collating-element <c-H> from "<U0063><U0048>"
collating-symbol  <c-'-h-br>
collating-element <C'H> from "<U0043><U0027><U0048>"
collating-element <c'h> from "<U0063><U0027><U0068>"
collating-element <C'h> from "<U0043><U0027><U0068>"
collating-element <c'H> from "<U0063><U0027><U0048>"

collating-symbol <CAP-MIN>
collating-symbol <MIN-CAP>

reorder-after <MIN>
<MIN-CAP>

reorder-after <CAP>
<CAP-MIN>

reorder-after <c>
<c-h-br>
<c-'-h-br>

reorder-after <U0063>
<c-h>	<c-h-br>;<PCT>;<MIN>;IGNORE
<c-H>	<c-h-br>;<PCT>;<MIN-CAP>;IGNORE
<c'h>	<c-'-h-br>;<PCT>;<MIN>;IGNORE
<c'H>	<c-'-h-br>;<PCT>;<MIN-CAP>;IGNORE
reorder-after <U0043>
<C-H>	<c-h-br>;<PCT>;<CAP>;IGNORE
<C-h>	<c-h-br>;<PCT>;<CAP-MIN>;IGNORE
<C'H>	<c-'-h-br>;<PCT>;<CAP>;IGNORE
<C'h>	<c-'-h-br>;<PCT>;<CAP-MIN>;IGNORE

reorder-end

END LC_COLLATE

LC_CTYPE
copy "en_DK"
END LC_CTYPE

LC_MESSAGES
yesexpr "<U005E><U005B><U006F><U004F><U0079><U0059><U005D><U002E><U002A>"
noexpr  "<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
END LC_MESSAGES

LC_MONETARY
copy "fr_FR"
END LC_MONETARY

LC_NUMERIC
copy "fr_FR"
END LC_NUMERIC

LC_TIME
abday   "<U0073><U0075><U006C>";"<U006C><U0075><U006E>";/
        "<U006D><U0065><U0075>";"<U006D><U0065><U0072>";/
        "<U0079><U0061><U006F>";"<U0067><U0077><U0065>";/
        "<U0073><U0061><U0064>"
day     "<U0073><U0075><U006C>";/
        "<U006C><U0075><U006E>";/
        "<U006D><U0065><U0075><U0072><U007A><U0068>";/
        "<U006D><U0065><U0072><U0063><U0027><U0068><U0065><U0072>";/
        "<U0079><U0061><U006F><U0075>";/
        "<U0067><U0077><U0065><U006E><U0065><U0072>";/
        "<U0073><U0061><U0064><U006F><U0072><U006E>"
abmon   "<U0047><U0065><U006E><U0020>";"<U0043><U0027><U0068><U0077>";/
        "<U004D><U0065><U0075><U0020>";"<U0045><U0062><U0072><U0020>";/
        "<U004D><U0061><U0065><U0020>";"<U0045><U0076><U0065><U0020>";/
        "<U0047><U006F><U0075><U0020>";"<U0045><U006F><U0073><U0020>";/
        "<U0047><U0077><U0065><U0020>";"<U0048><U0065><U0072><U0020>";/
        "<U0044><U0075><U0020><U0020>";"<U004B><U0065><U0072><U0020>"
mon     "<U0047><U0065><U006E><U0076><U0065><U0072>";/
        "<U0043><U0027><U0068><U0077><U0065><U0076><U0072><U0065><U0072>";/
        "<U004D><U0065><U0075><U0072><U007A><U0068>";/
        "<U0045><U0062><U0072><U0065><U006C>";/
        "<U004D><U0061><U0065>";/
        "<U004D><U0065><U007A><U0068><U0065><U0076><U0065><U006E>";/
        "<U0047><U006F><U0075><U0065><U0072><U0065>";/
        "<U0045><U006F><U0073><U0074>";/
        "<U0047><U0077><U0065><U006E><U0067><U006F><U006C><U006F>";/
        "<U0048><U0065><U0072><U0065>";/
        "<U0044><U0075>";/
        "<U004B><U0065><U0072><U007A><U0075>"
d_t_fmt "<U0044><U0027><U0061><U0072><U0020><U0025><U0041><U0020><U0025><U0064><U0020><U0061><U0020><U0076><U0069><U007A><U0020><U0025><U0042><U0020><U0025><U0059>"
% <U0025><U0054><U0020><U0025><U005A>"
d_fmt   "<U0025><U0064><U002E><U0025><U006D><U002E><U0025><U0059>"
t_fmt   "<U0025><U0054>"
am_pm   "<U0020>";"<U0020>"
t_fmt_ampm "<U0025><U0049><U0065><U0025><U004D><U003A><U0025><U0053><U0020><U0025><U0070>"
first_workday 2
first_weekday 2
END LC_TIME

LC_PAPER
copy "fr_FR"
END LC_PAPER

LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT

LC_NAME
% FIXME
copy "fr_FR"
END LC_NAME

LC_ADDRESS
% FIXME
postal_fmt    "<U0025><U0066><U0025><U004E><U0025><U0061><U0025><U004E>/
<U0025><U0064><U0025><U004E><U0025><U0062><U0025><U004E><U0025><U0073>/
<U0020><U0025><U0068><U0020><U0025><U0065><U0020><U0025><U0072><U0025>/
<U004E><U0025><U007A><U0020><U0025><U0054><U0025>/
<U004E><U0025><U0063><U0025><U004E>"
country_ab2 "<U0046><U0052>"
country_ab3 "<U0046><U0052><U0041>"
country_num 250
% F
country_car    "<U0046>"
% Brezhoneg
lang_name    "<U0042><U0072><U0065><U007A><U0068><U006F><U006E><U0065><U0067>"
% br
lang_ab      "<U0062><U0072>"
% bre
lang_term    "<U0062><U0072><U0065>"
% bre
lang_lib    "<U0062><U0072><U0065>"
END LC_ADDRESS

LC_TELEPHONE
copy "fr_FR"
END LC_TELEPHONE
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           comment_char    %
escape_char     /
% Kashmiri(devanagari) language locale for India.
% Contributed by Rakesh Pandit <rakesh.pandit@gmail.com> and
% Pravin Satpute <psatpute@redhat.com>

LC_IDENTIFICATION
title      "Kashmiri(devanagari) language locale for India"
source     ""
address    ""
contact    ""
email      "ks-gnome-trans-commits@lists.code.indlinux.net"
tel        ""
fax        ""
language   "Kashmiri"
territory  "India"
revision   "0.1"
date       "2008-08-26"
%
category  "ks_IN@devanagari:2008";LC_IDENTIFICATION
category  "ks_IN@devanagari:2008";LC_CTYPE
category  "ks_IN@devanagari:2008";LC_COLLATE
category  "ks_IN@devanagari:2008";LC_TIME
category  "ks_IN@devanagari:2008";LC_NUMERIC
category  "ks_IN@devanagari:2008";LC_MONETARY
category  "ks_IN@devanagari:2008";LC_MESSAGES
category  "ks_IN@devanagari:2008";LC_PAPER
category  "ks_IN@devanagari:2008";LC_NAME
category  "ks_IN@devanagari:2008";LC_ADDRESS
category  "ks_IN@devanagari:2008";LC_TELEPHONE
category  "ks_IN@devanagari:2008";LC_MEASUREMENT
END LC_IDENTIFICATION

LC_CTYPE
copy "ks_IN"
END LC_CTYPE

LC_COLLATE
copy "ks_IN"
END LC_COLLATE

LC_MONETARY
copy "ks_IN"
END LC_MONETARY


LC_NUMERIC
copy "ks_IN"
END LC_NUMERIC


LC_TIME
% This is the POSIX Locale definition for the LC_TIME category.
% These are generated based on XML base Locale definition file
% for IBM Class for Unicode/Java
%
% Abbreviated weekday names (%a)
abday       "<U0906><U0925><U094D>";/
            "<U091A><U0928><U094D><U0926><U0930><U094D>";/
  	    "<U092C><U094B><U092E><U094D>";/
            "<U092C><U094B><U0918>";/
            "<U092C><U094D><U0930><U0938><U094D><U094D>";/
            "<U091C><U0941><U092E>";/
            "<U092C><U091F>"
%
% Full weekday names (%A)
day         "<U0906><U0925><U094D><U0935><U093E><U0930><U094D>";/
            "<U091A><U0928><U094D><U0926><U094D><U0930><U0935><U093E><U0930><U094D>";/
            "<U092C><U094B><U092E><U094D><U0935><U093E><U0930><U094D>";/
            "<U092C><U094B><U0918><U0935><U093E><U0930><U094D>";/
            "<U092C><U094D><U0930><U0938><U094D><U0935><U093E><U0930><U094D>";/
            "<U091C><U0941><U092E><U093E><U0939><U094D>";/
            "<U092C><U091F><U0935><U093E><U0930><U094D>"
%
% Abbreviated month names (%b)
abmon       "<U091C><U0928><U0935><U0930><U0940>";/
            "<U092B><U093C><U0930><U0935><U0930><U0940>";/
            "<U092E><U093E><U0930><U094D><U091A>";/
            "<U0905><U092A><U094D><U0930><U0947><U0932>";/
            "<U092E><U0908>";"<U091C><U0942><U0928>";/
            "<U091C><U0941><U0932><U093E><U0908>";/
            "<U0905><U0917><U0938><U094D><U0924>";/
            "<U0938><U093F><U0924><U092E><U094D><U092C><U0930>";/
            "<U0905><U0915><U094D><U091F><U0942><U092C><U0930>";/
            "<U0928><U0935><U092E><U094D><U092C><U0930>";/
            "<U0926><U093F><U0938><U092E><U094D><U092C><U0930>"
%
% Full month names (%B)
mon         "<U091C><U0928><U0935><U0930><U0940>";/
            "<U092B><U093C><U0930><U0935><U0930><U0940>";/
            "<U092E><U093E><U0930><U094D><U091A>";/
            "<U0905><U092A><U094D><U0930><U0947><U0932>";/
            "<U092E><U0908>";"<U091C><U0942><U0928>";/
            "<U091C><U0941><U0932><U093E><U0908>";/
            "<U0905><U0917><U0938><U094D><U0924>";/
            "<U0938><U093F><U0924><U092E><U094D><U092C><U0930>";/
            "<U0905><U0915><U094D><U091F><U0942><U092C><U0930>";/
            "<U0928><U0935><U092E><U094D><U092C><U0930>";/
            "<U0926><U093F><U0938><U092E><U094D><U092C><U0930>"
%
% Equivalent of AM PM
am_pm       "<U092A><U0942><U0930><U094D><U0935><U093E><U0939><U094D><U0928>";/
            "<U0905><U092A><U0930><U093E><U0939><U094D><U0928>"
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
date_fmt       "<U0025><U0061><U0020><U0025><U0062><U0020><U0025><U0065>/
<U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053><U0020>/
<U0025><U005A><U0020><U0025><U0059>"
%
first_weekday 1
END LC_TIME


LC_MESSAGES
yesexpr "<U005E><U005B><U0079><U0059><U005D><U002E><U002A>"
noexpr  "<U005E><U005B><U006E><U004E><U005D><U002E><U002A>"
END LC_MESSAGES


LC_PAPER
copy "hi_IN"
END LC_PAPER


LC_NAME
name_fmt    "<U0025><U0070><U0025><U0074><U0025><U0066><U0025><U0074>/
<U0025><U0067>"
name_gen    ""
name_mr     "<U0936><U094D><U0930><U0940><U002E>"
name_mrs    "<U0936><U094D><U0930><U0940><U092E><U0924><U0940><U002E>"
name_miss   "<U0915><U0941><U092E><U093E><U0930><U0940><U002E>"
name_ms     "<U0915><U0941><U092E><U093E><U0930><U002E>"

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
% कॉशुर
lang_name    "<U0915><U0949><U0936><U0941><U0930>"
% ks
lang_ab      "<U006B><U0073>"
% kas
lang_term    "<U006B><U0061><U0073>"
% kas
lang_lib    "<U006B><U0061><U0073>"
END LC_ADDRESS


LC_TELEPHONE
copy "hi_IN"
END LC_TELEPHONE


LC_MEASUREMENT
% metric
measurement 1
END LC_MEASUREMENT
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          comment_char %
escape_char  /
%
% Northern Saami Language Locale for Norway
% Source: http://www.hum.uit.no/a/trond/loc.html
% Contact: Børre Gaup
% Email: boerre.gaup@pc.nu
% Language: se
% Territory: NO
% Revision: 0.1
% Date: 2001-11-03
% Application: general
% Users: general
% Charset: UTF-8
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title "Northern Saami language locale for Norway"
source "http://www.hum.uit.no/a/trond/loc.html"
address ""
contact "Børre Gaup"
email "boerre.gaup@pc.nu"
tel ""
fax ""
language "Northern Saami"
territory "Norway"
revision "0.1"
date "2001-11-09"

category se_NO:2000;LC_IDENTIFICATION
category se_NO:2000;LC_CTYPE
category se_NO:2000;LC_COLLATE
category se_NO:2000;LC_TIME
category se_NO:2000;LC_NUMERIC
category se_NO:2000;LC_PAPER
category se_NO:2000;LC_TELEPHONE
category se_NO:2000;LC_MEASUREMENT
category se_NO:2000;LC_ADDRESS
category se_NO:2000;LC_MONETARY
category se_NO:2000;LC_MESSAGES

END LC_IDENTIFICATION


LC_COLLATE
copy "iso14651_t1"

collating-symbol <aring>
collating-symbol <atilde>
collating-symbol <acircumflex>
collating-symbol <agrave>
collating-symbol <aacute>
collating-symbol <noae>
collating-symbol <svae>
collating-symbol <ccedilla>
collating-symbol <ccaron>
collating-symbol <ezh>
collating-symbol <ezhcaron>
collating-symbol <dstroke>
collating-symbol <eth>
collating-symbol <fhook>
collating-symbol <gcaron>
collating-symbol <gstroke>
collating-symbol <kcaron>
collating-symbol <otilde>
collating-symbol <oe>
collating-symbol <ssharp>
collating-symbol <scaron>
collating-symbol <oumlaut>
collating-symbol <oslash>

%
reorder-after <CAP>
<MIN>

reorder-after <a>
<agrave>
<atilde>
<aacute>
<acircumflex>


reorder-after <c>
<ccaron>
<ccedilla>
<ezh>
<ezhcaron>

reorder-after <d>
<dstroke>
<eth>

reorder-after <f>
<fhook>

reorder-after <g>
<gcaron>
<gstroke>

reorder-after <k>
<kcaron>

reorder-after <s>
<ssharp>
<scaron>

reorder-after <th>
<noae>
<oslash>
<aring>
<svae>
<oumlaut>

reorder-after <U0061>
<U00E0> <agrave>;<GRA>;<MIN>;IGNORE % 201 à
<U00E1> <aacute>;<ACA>;<MIN>;IGNORE % 200 á
<U00E2> <acircumflex>;<CIR>;<MIN>;IGNORE % 202 â
<U00E3> <atilde>;<TIL>;<MIN>;IGNORE % 203 ã

reorder-after <U0041>
<U00C0> <agrave>;<GRA>;<CAP>;IGNORE % 321 À
<U00C1> <aacute>;<ACA>;<CAP>;IGNORE % 320 Á
<U00C2> <acircumflex>;<CIR>;<CAP>;IGNORE % 322 Â
<U00C3> <atilde>;<TIL>;<CAP>;IGNORE % 323 Ã

reorder-after <U0063>
<U00E7> <ccedilla>;<CDI>;<MIN>;IGNORE % 212 ç
<U010D> <ccaron>;<CAR>;<MIN>;IGNORE % 215 <c<>

reorder-after <U0043>
<U00C7> <ccedilla>;<CDI>;<CAP>;IGNORE % 332 Ç
<U010C> <ccaron>;<CAR>;<CAP>;IGNORE % 335 <C<>

reorder-after <U010B>
<U0292> <ezh>;<BAS>;<MIN>;IGNORE % ezh
<U01EF> <ezhcaron>;<CAR>;<MIN>;IGNORE % ezh caron

reorder-after <U010A>
<U01B7> <ezh>;<BAS>;<CAP>;IGNORE % EZH
<U01EE> <ezhcaron>;<CAR>;<CAP>;IGNORE % EZH caron

reorder-after <U0064>
<U00F0> <eth>;<PCL>;<MIN>;IGNORE % 218 ð
<U0111> <dstroke>;<OBL>;<MIN>;IGNORE % 220 <d//>

reorder-after <U0044>
<U00D0> <eth>;<PCL>;<CAP>;IGNORE % 338 Ð
<U0110> <dstroke>;<OBL>;<CAP>;IGNORE % 340 <D//>

reorder-after <U0066>
<U0192> <fhook>;<BAS>;<MIN>;IGNORE % f WITH HOOK

reorder-after <U0123>
<U01E7> <gcaron>;<CAR>;<MIN>;IGNORE % gcaron
<U01E5> <gstroke>;<OBL>;<MIN>;IGNORE % gstroke

reorder-after <U0122>
<U01E6> <gcaron>;<CAR>;<MIN>;IGNORE % Gcaron
<U01E4> <gstroke>;<OBL>;<MIN>;IGNORE % Gstroke

reorder-after <U0137>
<U01E9> <kcaron>;<CAR>;<MIN>;IGNORE % kcaron
reorder-after <U0136>
<U01E8> <kcaron>;<CAR>;<CAP>;IGNORE % Kcaron

reorder-after <U0073>
<U00DF> <ssharp>;"<LIG><LIG>";"<MIN><MIN>";IGNORE % ß
<U0161> <scaron>;<CAR>;<MIN>;IGNORE % 288 <s<>
reorder-after <U0053>
<U0160> <scaron>;<CAR>;<CAP>;IGNORE % 405 <S<>


reorder-after <U00E3>
<U00E4> <svae>;<REU>;<MIN>;IGNORE % ä
<U00E5> <aring>;<RNE>;<MIN>;IGNORE % å
<U00E6> <noae>;<LIG>;<MIN>;IGNORE % æ
reorder-after <U00F5>
<U00F6> <oumlaut>;<REU>;<MIN>;IGNORE % ö
<U00F8> <oslash>;<OBL>;<MIN>;IGNORE % ø

reorder-after <U00C3>
<U00C4> <svae>;<REU>;<CAP>;IGNORE % Ä
<U00C5> <aring>;<RNE>;<CAP>;IGNORE % Å
<U00C6> <noae>;<LIG>;<CAP>;IGNORE % Æ
reorder-after <U00D5>
<U00D6> <oumlaut>;<REU>;<CAP>;IGNORE % Ö
<U00D8> <oslash>;<OBL>;<CAP>;IGNORE % Ø

% ü/Ü is treated like y/Y but is sorted after the latter
reorder-after <U00FB>
<U00FC> <y>;<REU>;<MIN>;IGNORE % ü
reorder-after <U00DB>
<U00DC> <y>;<REU>;<CAP>;IGNORE % Ü
reorder-end

END LC_COLLATE

LC_CTYPE
copy "i18n"

translit_start
include  "translit_combining";""
translit_end
END LC_CTYPE

LC_MONETARY
int_curr_symbol         "<U004E><U004F><U004B><U0020>"
currency_symbol         "<U0020><U0072><U0075>"
mon_decimal_point       "<U002C>"
mon_thousands_sep       "<U002E>"
mon_grouping            3;3
positive_sign           ""
negative_sign           "<U002D>"
int_frac_digits         2
frac_digits             2
p_cs_precedes           1
p_sep_by_space          0
n_cs_precedes           1
n_sep_by_space          0
p_sign_posn             4
n_sign_posn             4
END LC_MONETARY

LC_NUMERIC
decimal_point           "<U002C>"
thousands_sep           "<U002E>"
grouping                3;3
END LC_NUMERIC


LC_TIME
abday       "<U0073><U006F><U0074><U006E>";"<U0076><U0075><U006F><U0073>";/
	    "<U006D><U0061><U014B>";"<U0067><U0061><U0073><U006B>";/
	    "<U0064><U0075><U006F><U0072>";"<U0062><U0065><U0061><U0072>";/
	    "<U006C><U00E1><U0076>"
day         "<U0073><U006F><U0074><U006E><U0061><U0062><U0065><U0061><U0069><U0076><U0069>";/
            "<U0076><U0075><U006F><U0073><U0073><U00E1><U0072><U0067><U0061>";/
            "<U006D><U0061><U014B><U014B><U0065><U0062><U0061><U0072><U0067><U0061>";/
            "<U0067><U0061><U0073><U006B><U0061><U0076><U0061><U0068><U006B><U006B><U0075>";/
            "<U0064><U0075><U006F><U0072><U0061><U0073><U0064><U0061><U0074>";/
            "<U0062><U0065><U0061><U0072><U006A><U0061><U0064><U0061><U0074>";/
            "<U006C><U00E1><U0076><U0076><U0061><U0072><U0064><U0061><U0074>"
abmon       "<U006F><U0111><U0111><U006A>";"<U0067><U0075><U006F><U0076>";/
            "<U006E><U006A><U0075><U006B>";"<U0063><U0075><U006F><U014B>";/
            "<U006D><U0069><U0065><U0073>";"<U0067><U0065><U0061><U0073>";/
            "<U0073><U0075><U006F><U0069>";"<U0062><U006F><U0072><U0067>";/
            "<U010D><U0061><U006B><U010D>";"<U0067><U006F><U006C><U0067>";/
            "<U0073><U006B><U00E1><U0062>";"<U006A><U0075><U006F><U0076>"
mon         "<U006F><U0111><U0111><U0061><U006A><U0061><U0067><U0065><U006D><U00E1><U006E><U0075>";/
	    "<U0067><U0075><U006F><U0076><U0076><U0061><U006D><U00E1><U006E><U0075>";/
            "<U006E><U006A><U0075><U006B><U010D><U0061><U006D><U00E1><U006E><U0075>";/
	    "<U0063><U0075><U006F><U014B><U006F><U006D><U00E1><U006E><U0075>";/
            "<U006D><U0069><U0065><U0073><U0073><U0065><U006D><U00E1><U006E><U0075>";/
	    "<U0067><U0065><U0061><U0073><U0073><U0065><U006D><U00E1><U006E><U0075>";/
            "<U0073><U0075><U006F><U0069><U0064><U006E><U0065><U006D><U00E1><U006E><U0075>";/
            "<U0062><U006F><U0072><U0067><U0065><U006D><U00E1><U006E><U0075>";/
            "<U010D><U0061><U006B><U010D><U0061><U006D><U00E1><U006E><U0075>";/
	    "<U0067><U006F><U006C><U0067><U0067><U006F><U0074><U006D><U00E1><U006E><U0075>";/
            "<U0073><U006B><U00E1><U0062><U006D><U0061><U006D><U00E1><U006E><U0075>";/
            "<U006A><U0075><U006F><U0076><U006C><U0061><U006D><U00E1><U006E><U0075>"
% usual date representation
% Linjen nedenfor er: %a, %b %e b. %Y %T %Z
% f.eks. bear, geas 14. b. 2001 21:15:11 CEST
d_t_fmt     "<U0025><U0061><U002C><U0020><U0025><U0062><U0020><U0025><U0065><U002E><U0020><U0062><U002E><U0020><U0025><U0059><U0020><U0025><U0054><U0020><U0025><U005A>"
%Linjen nedenfor er: %Y-%m-%d
%f.eks 2001-04-26
d_fmt       "<U0025><U0059><U002D><U0025><U006D><U002D><U0025><U0064>"
t_fmt       "<U0025><U0054>"
am_pm       "";""
t_fmt_ampm  ""

% Denne linjen vil gi f.eks.:
% duorasdat, borgem<U00E1>nu 23. b. 2001 00:47:57 CEST
date_fmt       "<U0025><U0041><U002C><U0020><U0025><U0042><U0020><U0025><U0064><U002E>/
<U0020><U0062><U002E><U0020><U0025><U0059><U0020><U0025><U0048><U003A><U0025><U004D><U003A><U0025><U0053>/
<U0020><U0025><U005A>"

% %a %b-%e %H:%M:%S %Z %Y søn jan-31 21:15:11 CET 2001
%  FIXME: found in CLDR
first_weekday 2
first_workday 2
END LC_TIME

LC_MESSAGES
yesexpr     "<U005E><U005B><U004A><U006A><U0059><U0079><U005D><U002E><U002A>"
noexpr      "<U005E><U005B><U0049><U0069><U005D><U002E><U002A>"
END LC_MESSAGES


LC_PAPER
height   297
width    210
END LC_PAPER

LC_TELEPHONE
tel_int_fmt    "<U002B><U0025><U0063><U0020><U0025><U006C>"
tel_dom_fmt    "<U0025><U006C>"
int_select     "<U0030><U0030>"
int_prefix     "<U0034><U0037>"
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
country_ab2 "<U004E><U004F>"
country_ab3 "<U004E><U004F><U0052>"
country_num 578
% N
country_car    "<U004E>"
% Davvisámegiella
lang_name    "<U0044><U0061><U0076><U0076><U0069><U0073><U00E1><U006D><U0065><U0067><U0069><U0065><U006C><U006C><U0061>"
% se
lang_ab      "<U0073><U0065>"
% sme
lang_term    "<U0073><U006D><U0065>"
% sme
lang_lib    "<U0073><U006D><U0065>"
END LC_ADDRESS
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                comment_char %
escape_char  /
%
% Copyright (C) 2003-2006 Volodymyr M. Lisivka <v_lisivka@sourceforge.net>
% Copyright (C) 2006 Max Kutny <mkutny@gmail.com>
%
% Ukrainian Language Locale for Ukraine
% Source:
% Contact: Volodymyr M. Lisivka
% Email: v_lisivka@users.sourceforge.net
% Contact: Max Kutny
% Email: mkutny@gmail.com
% Language: uk
% Territory: UA
% Revision: 2.1.12
% Date: 2006-05-20
% Application: general
% Users: general
% Charset: UTF-8
%
% Distribution and use is free, also for commercial purposes.
%
% Keywords in this file are treated according to ISO/IEC 14652
% http://anubis.dkuug.dk/jtc1/sc22/wg20/docs/14652fcd.txt
%
% Minor fixes and overall cleanup by Max Kutny <mkutny@gmail.com>
%


LC_IDENTIFICATION

% Title of document: Ukrainian Language Locale for Ukraine
title      "Ukrainian Language Locale for Ukraine"

% Organization name.
source     ""

% Organization postal address.
address    ""

% Name of contact person.
contact    "GNU libc maintainers"

% Electronic address of organization or contact person.
email      "bug-glibc-locales@gnu.org"

% Telephone number of organization in international format.
tel        ""

% Fax number of organization in international format.
fax        ""

% Code of language, to which this document applies.
language   "uk"

% Code of country/geographic extent (ISO 3166), to which this document applies.
territory  "UA"

% Intended user audience.
audience   "general"

% If for use with special application, a description of this application.
application "general"

% Short name.
abbreviation "ULU-2.1.12"

% Revision (numbers and dots).
revision   "2.1.12"

% Revision date
date       "2006-05-20"

category  "i18n:2002";LC_IDENTIFICATION
category  "i18n:2002";LC_CTYPE
category  "i18n:2002";LC_COLLATE
category  "i18n:2000";LC_TIME
category  "posix:1993";LC_NUMERIC
category  "i18n:2002";LC_MONETARY
category  "i18n:2002";LC_MESSAGES
category  "i18n:2002";LC_PAPER
category  "i18n:2002";LC_NAME
category  "i18n:2000";LC_ADDRESS
category  "i18n:2002";LC_TELEPHONE
category  "posix:1993";LC_MEASUREMENT

END LC_IDENTIFICATION


LC_CTYPE

copy "<U0069><U0031><U0038><U006E>"

translit_start

% http://www.rada.gov.ua/translit.htm
% UKRAINIAN-ENGLISH TRANSLITERATION TABLE
%
% On 19 April 1996, an official Ukrainian-English transliteration system
% was adopted by the Ukrainian Legal Terminology Commission (Decision
% No 9).
%
%    * Use of the approved system is not mandatory for the transliteration
% of foreign names into Ukrainian.
%    * Transliteration should be made directly between Ukrainian and English
% without the use of any intermediary languages.
%    * Decision No9, in accordance with the Legal Terminology Commission's
% express authority, is binding only for the transliteration of Ukrainian
% names in English in legislative and official acts.
%    * For brevity's sake, the system routinely allows for names such as the
% city of 'Zaporizhzhia' to be given as 'Zaporizhia,' 'L`viv' as 'Lviv',
% etc. Also included is a short list of official spellings for miscellaneous
% terms: 'Ukraine' (no use of the article 'the'), 'Crimea' (as opposed to
% 'Krym'), 'Black Sea,' and 'Sea of Azov'. In certain cases, 'traditional'
% forms may be shown in parentheses after the official form:
% 'Dnipro (Dnieper).'
%    * In addition, apostrophe marks and softening marks may be omitted upon
%  transliteration into English.
%
% Ukrainian  English  Note  Example
% letter     letter
%

% <U0410>	<U0410>	-	<U0410><U043B><U0443><U0448><U0442><U0430> - Alushta
<U0410> "<U0041>"
<U0430> "<U0061>"

% <U0411>	B	-	<U0411><U043E><U0440><U0449><U0430><U0433><U0456><U0432><U043A><U0430> - Borschahivka
<U0411> "<U0042>"
<U0431> "<U0062>"

% <U0412>	V	-	<U0412><U0438><U0448><U0433><U043E><U0440><U043E><U0434> - Vyshhorod
<U0412> "<U0056>"
<U0432> "<U0076>"

% <U0413>	H, gh	<U041D>-in most cases, gh - when recreating the combination "<U0437><U0433>"	<U0413><U0430><U0434><U044F><U0447> - Hadiach; <U0417><U0433><U043E><U0440><U0430><U043D><U0438> - Zghorany
<U0413> "<U0048>"
<U0433> "<U0068>"
<U0417><U0413> "<U005A><U0047><U0048>"
<U0417><U0433> "<U005A><U0067><U0068>"
<U0437><U0413> "<U007A><U0047><U0048>"
<U0437><U0433> "<U007A><U0067><U0068>"

% <U0490>	G	-	<U0490><U0430><U043B><U0430><U0491><U0430><U043D> - Galagan
<U0490> "<U0047>"
<U0491> "<U0067>"

% <U0414>	D	-	<U0414><U043E><U043D> - Don
<U0414> "<U0044>"
<U0434> "<U0064>"

% <U0415>	E	-	<U0420><U0456><U0432><U043D><U0435> - Rivne
<U0415> "<U0045>"
<U0435> "<U0065>"

% <U0404>	Ye, ie	Ye - at the beginning of words, ie - in other positions 	<U0404><U043D><U0430><U043A><U0456><U0454><U0432><U0435> - Yenakiieve; <U041D><U0430><U0454><U043D><U043A><U043E> - Naienko
<U0404> "<U0059><U0045>"
<U0454> "<U0079><U0065>"
% TODO: 'ie' if after any letter

% <U0416>	Zh	-	<U0416><U0438><U0442><U043E><U043C><U0438><U0440> - Zhytomyr
<U0416> "<U005A><U0048>"
<U0436> "<U007A><U0068>"

% <U0417>	Z	-	<U0417><U0430><U043A><U0430><U0440><U043F><U0430><U0442><U0442><U044F> - Zakarpattia
<U0417> "<U005A>"
<U0437> "<U007A>"

% <U0418>	Y	-	<U041C><U0435><U0434><U0432><U0438><U043D> - Medvyn
<U0418> "<U0059>"
<U0438> "<U0079>"

% <U0406>	I	-	<U0406><U0440><U0448><U0430><U0432><U0430> - Irshava
<U0406> "<U0049>"
<U0456> "<U0069>"

% <U0407>	Yi, I	Yi - at the beginning of words, i - in other positions	<U0407><U0436><U0430><U043A><U0435><U0432><U0438><U0447> - Yizhakevych; <U041A><U0430><U0434><U0456><U0457><U0432><U043A><U0430> - Kadiivka
<U0407> "<U0059><U0049>"
<U0457> "<U0079><U0069>"

% TODO: 'i' if after any letter
% <U0419>	Y, i	Y - at the beginning of words, i - in other positions	<U0419><U043E><U0441><U0438><U043F><U0456><U0432><U043A><U0430> - Yosypivka; <U0421><U0442><U0440><U0438><U0439> - Stryi
<U0419> "<U0059>"
<U0439> "<U0079>"
% TODO: 'i' if after any letter

% <U041A>	K	-	<U041A><U0438><U0457><U0432> - Kyiv
<U041A> "<U004B>"
<U043A> "<U006B>"

% <U041B>	L	-	<U041B><U0435><U0431><U0435><U0434><U0438><U043D> - Lebedyn
<U041B> "<U004C>"
<U043B> "<U006C>"

% <U041C>	M	-	<U041C><U0438><U043A><U043E><U043B><U0430><U0457><U0432> - Mykolaiv
<U041C> "<U004D>"
<U043C> "<U006D>"

% <U041D>	N	-	<U041D><U0456><U0436><U0438><U043D> - Nizhin
<U041D> "<U004E>"
<U043D> "<U006E>"

% <U041E>	O	-	<U041E><U0434><U0435><U0441><U0430> - Odesa
<U041E> "<U004F>"
<U043E> "<U006F>"

% <U041F>	P	-	<U041F><U043E><U043B><U0442><U0430><U0432><U0430> - Poltava
<U041F> "<U0050>"
<U043F> "<U0070>"

% <U0420>	R	-	<U0420><U043E><U043C><U043D><U0438> - Romny
<U0420> "<U0052>"
<U0440> "<U0072>"

% <U0421>	S	-	<U0421><U0443><U043C><U0438> - Sumy
<U0421> "<U0053>"
<U0441> "<U0073>"

% <U0422>	T	-	<U0422><U0435><U0442><U0435><U0440><U0456><U0432> - Teteriv
<U0422> "<U0054>"
<U0442> "<U0074>"

% <U0423>	U	-	<U0423><U0436><U0433><U043E><U0440><U043E><U0434> - Uzhhorod
<U0423> "<U0055>"
<U0443> "<U0075>"

% <U0424>	F	-	<U0424><U0430><U0441><U0442><U0456><U0432> - Fastiv
<U0424> "<U0046>"
<U0444> "<U0066>"

% <U0425>	Kh	-	<U0425><U0430><U0440><U043A><U0456><U0432> - Kharkiv
<U0425> "<U004B><U0048>"
<U0445> "<U006B><U0068>"

% <U0426>	Ts	-	<U0411><U0456><U043B><U0430> <U0426><U0435><U0440><U043A><U0432><U0430> - Bila Tserkva
<U0426> "<U0054><U0053>"
<U0446> "<U0074><U0073>"

% <U0427>	Ch	-	<U0427><U0435><U0440><U043D><U0456><U0432><U0446><U0456> - Chernivtsi
<U0427> "<U0043><U0048>"
<U0447> "<U0063><U0068>"

% <U0428>	Sh	-	<U0428><U043E><U0441><U0442><U043A><U0430> - Shostka
<U0428> "<U0053><U0048>"
<U0448> "<U0073><U0068>"

% <U0429>	Sch	-	<U0413><U043E><U0449><U0430> - Hoscha
<U0429> "<U0053><U0043><U0048>"
<U0449> "<U0073><U0063><U0068>"

% <U042C>	`	(see commentary)	<U0420><U0443><U0441><U044C> - Rus`; <U041B><U044C><U0432><U0456><U0432> - L`viv
<U042C> "<U0060>"
<U044C> "<U0060>"

% <U042E>	Yu, iu	Yu - at the beginning of words, iu - in other positions 	<U042E><U0440><U0456><U0439> - Yurii;<U041A><U0440><U044E><U043A><U0456><U0432><U043A><U0430> - Krukivka
<U042E> "<U0059><U0055>"
<U044E> "<U0079><U0075>"
% TODO: 'iu' if after any letter

% <U042F>	Ya, ia	Ya - at the beginning of words, ia - in other positions 	<U042F><U0433><U043E><U0442><U0438><U043D> - Yahotyn;I<U0447><U043D><U044F> - Ichnia
<U042F> "<U0059><U0041>"
<U044F> "<U0079><U0061>"

% TODO: 'ia' if after any letter
% '	'	(see commentary)	<U0417><U043D><U0430><U043C>'<U044F><U043D><U043A><U0430> - Znamianka


% Specials:

% NUMERO SIGN
<U2116> "<U004E><U006F>"

% LEFT-POINTING DOUBLE ANGLE QUOTATION MARK
<U00AB> "<U003C><U003C>"

% RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK
<U00BB> "<U003E><U003E>"

translit_end

END LC_CTYPE



LC_COLLATE
% Ukrainian Alpahabet (1881-1933) (old and correct)
%
% <U0410><U0430> <U0411><U0431> <U0412><U0432> <U0413><U0433>
% <U0490><U0491> <U0414><U0434> <U0415><U0435> <U0404><U0454>
% <U0416><U0436> <U0417><U0437> <U0418><U0438> <U0406><U0456>
% <U0407><U0457> <U0419><U0439> <U041A><U043A> <U041B><U043B>
% <U041C><U043C> <U041D><U043D> <U041E><U043E> <U041F><U043F>
% <U0420><U0440> <U0421><U0441> <U0422><U0442> <U0423><U0443>
% <U0424><U0444> <U0425><U0445> <U0426><U0446> <U0427><U0447>
% <U0428><U0448> <U0429><U0449> <U042E><U044E> <U042F><U044F>
% <U042C><U044C>
%
%
% Ukrainian Alpahabet (1933-1991) (old)
%
% <U0410><U0430> <U0411><U0431> <U0412><U0432> <U0413><U0433>
% <U0414><U0434> <U0415><U0435> <U0404><U0454> <U0416><U0436>
% <U0417><U0437> <U0418><U0438> <U0406><U0456> <U0407><U0457>
% <U0419><U0439> <U041A><U043A> <U041B><U043B> <U041C><U043C>
% <U041D><U043D> <U041E><U043E> <U041F><U043F> <U0420><U0440>
% <U0421><U0441> <U0422><U0442> <U0423><U0443> <U0424><U0444>
% <U0425><U0445> <U0426><U0446> <U0427><U0447> <U0428><U0448>
% <U0429><U0449> <U042E><U044E> <U042F><U044F> <U042C><U044C>
%
% Note:
% Ukrainian letter GHE_WITH_UPTURN (<U0490>) was removed from Ukrainian
% alphabet by Stalin in 1933 and was returned back in 1991 when
% Ukraine became independent from Soviet Union.
%
% Ukrainian Alphabet (1991) (current but not correct)
%
% <U0410><U0430> <U0411><U0431> <U0412><U0432> <U0413><U0433>
% <U0490><U0491> <U0414><U0434> <U0415><U0435> <U0404><U0454>
% <U0416><U0436> <U0417><