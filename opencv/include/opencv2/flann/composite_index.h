escape_char /
comment_char %
%
% Uyghur language locale for China
% Source:
% Contact:   Eagle Burkut
% Email:     eagle.burkut@gmail.com
% Language:  ug
% Territory: CN
% Revision:  2.00
% Date:      2012-02-26
% Users:     general
% Charset:   UTF-8
% Distribution and use is free, also
% for commercial purposes.

LC_IDENTIFICATION
title      "Uyghur locale for China"
source     ""
address    ""
contact    "Eagle Burkut"
email      "eagle.burkut@gmail.com"
tel        ""
fax        ""
language   "Uyghur"
territory  "China"
revision   "2.00"
date       "2011-02-26"
%
category  "ug_CN:2000";LC_IDENTIFICATION
category  "ug_CN:2000";LC_CTYPE
category  "ug_CN:2000";LC_COLLATE
category  "ug_CN:2000";LC_TIME
category  "ug_CN:2000";LC_NUMERIC
category  "ug_CN:2000";LC_MONETARY
category  "ug_CN:2000";LC_MEASUREMENT
category  "ug_CN:2000";LC_MESSAGES
category  "ug_CN:2000";LC_PAPER
category  "ug_CN:2000";LC_NAME
category  "ug_CN:2000";LC_ADDRESS
category  "ug_CN:2000";LC_TELEPHONE

END LC_IDENTIFICATION

LC_COLLATE

%
% http://en.wikipedia.org/wiki/Uyghur_language
%
% CODE - UNICODE CODE POINT
% UL   - UYGHUR LATIN
% IN?  - IN ISO 14651_T1
%
% NO CODE UL ENGLISH NAME         AR IN?
% ======================================
%  1 0627 a  alef                 ا
%  2 06d5 e  ae                   ە  ???
%  3 0628 b  beh                  ب
%  4 067e p  peh                  پ
%  5 062a t  teh                  ت
%  6 062c j  jeem                 ج
%  7 0686 ch tcheh                چ
%  8 062e x  khah                 خ
%  9 062f d  dal                  د
% 10 0631 r  reh                  ر
% 11 0632 z  zain                 ز
% 12 0698 zh jeh                  ژ
% 13 0633 s  seen                 س
% 14 0634 sh sheen                ش
% 15 063a gh ghain                غ
% 16 0641 f  feh                  ف
% 17 0642 q  qaf                  ق
% 18 0643 k  kaf                  ك
% 19 06af g  gaf                  گ
% 20 06ad ng ng                   ڭ ???
% 21 0644 l  lam                  ل
% 22 0645 m  meem                 م
% 23 0646 n  noon                 ن
% 24 06be h  heh doachashmee      ھ ???
% 25 0648 o  waw                  و
% 26 06c7 u  u                    ۇ ???
% 27 06c6 ö  oe                   ۆ ???
% 28 06c8 ü  yu                   ۈ ???
% 29 06cb w  ve                   ۋ ???
% 30 06d0 é  e                    ې ???
% 31 0649 i  alef maksura         ى
% 32 064a y  yeh                  ي ???
% -- 0626 '  yeh with hamza above ئ ???
%
copy "iso14651_t1"

% <yeh with hamza above> + <alef> = ئا
collating-symbol  <ARA_ywha_alef>

% <yeh with hamza above> + <ae> = ئە
collating-symbol  <ARA_ywha_ae>

% <ae> = ە
collating-symbol  <ARA_ae>

% <ng> = ڭ
collating-symbol  <ARA_ng>

% <heh doachashmee> = ھ
collating-symbol  <ARA_hehd>

% <yeh with hamza above> + <waw> = ئو
collating-symbol  <ARA_ywha_waw>

% <yeh with hamza above> + <u> = ئۇ
collating-symbol  <ARA_ywha_u>

% <u> = ۇ
collating-symbol  <ARA_u>

% <yeh with hamza above> + <oe> = ئۆ
collating-symbol  <ARA_ywha_oe>

% <oe> = ۆ
collating-symbol  <ARA_oe>

% <yeh with hamza above> + <yu> = ئۈ
collating-symbol  <ARA_ywha_yu>

% <yu> = ۈ
collating-symbol  <ARA_yu>

% <ve> = ۋ
collating-symbol  <ARA_ve>

% <yeh with hamza above> + <e> = ئې
collating-symbol  <ARA_ywha_e>

% <e> = ې
collating-symbol  <ARA_e>

% <yeh with hamza above> + <alef maksura> = ئى
collating-symbol  <ARA_ywha_alma>

% <yeh> = ي
collating-symbol  <ARA_yeh>

% <yeh with hamza above> = ئ
collating-symbol  <ARA_ywha>

collating-element <ara_h_alef> from "<U0626><U0627>" % ئا
collating-element <ara_h_ae>   from "<U0626><U06D5>" % ئە
collating-element <ara_h_waw>  from "<U0626><U0648>" % ئو
collating-element <ara_h_u>    from "<U0626><U06C7>" % ئۇ
collating-element <ara_h_oe>   from "<U0626><U06C6>" % ئۆ
collating-element <ara_h_yu>   from "<U0626><U06C8>" % ئۈ
collating-element <ara_h_e>    from "<U0626><U06D0>" % ئې
collating-element <ara_h_alma> from "<U0626><U0649>" % ئى

reorder-after <alef>
<ARA_ywha_alef>
<alef>
<ARA_ywha_ae>
<ARA_ae>

reorder-after <gaf>
<ARA_ng>

reorder-after <noon>
<ARA_hehd>

reorder-after <waw>
<ARA_ywha_waw>
<waw>
<ARA_ywha_u>
<ARA_u>
<ARA_ywha_oe>
<ARA_oe>
<ARA_ywha_yu>
<ARA_yu>
<ARA_ve>
<ARA_ywha_e>
<ARA_e>
<ARA_ywha_alma>
<alef_maksura>
<ARA_yeh>
<ARA_ywha>

reorder-after   <U0627>
<ara_h_alef>    <ARA_ywha_alef>;<BAS>;<MIN>;IGNORE
<U0627>         <alef>;<BAS>;<MIN>;IGNORE
<ara_h_ae>      <ARA_ywha_ae>;<BAS>;<MIN>;IGNORE
<U06D5>         <ARA_ae>;<BAS>;<MIN>;IGNORE

reorder-after   <U06AF>
<U06AD>         <ARA_ng>;<BAS>;<MIN>;IGNORE

reorder-after   <U0646>
<U06BE>         <ARA_hehd>;<BAS>;<MIN>;IGNORE

reorder-after   <U0648>
<ara_ywha_waw>  <ARA_ywha_waw>;<BAS>;<MIN>;IGNORE
<U0648>         <waw>;<BAS>;<MIN>;IGNORE
<ara_ywha_u>    <ARA_ywha_u>;<BAS>;<MIN>;IGNORE
<U06C7>         <ARA_u>;<BAS>;<MIN>;IGNORE
<ara_ywha_oe>   <ARA_ywha_oe>;<BAS>;<MIN>;IGNORE
<U06C6>         <ARA_oe>;<BAS>;<MIN>;IGNORE
<ara_ywha_yu>   <ARA_ywha_yu>;<BAS>;<MIN>;IGNORE
<U06C8>         <ARA_yu>;<BAS>;<MIN>;IGNORE
<U06CB>         <ARA_ve>;<BAS>;<MIN>;IGNORE
<ara_ywha_e>    <ARA_ywha_e>;<BAS>;<MIN>;IGNORE
<U06D0>         <ARA_e>;<BAS>;<MIN>;IGNORE
<ara_ywha_alma> <ARA_ywha_alma>;<BAS>;<MIN>;IGNORE
<U0649>         <alef_maksura>;<BAS>;<MIN>;IGNORE
<U064A>         <ARA_yeh>;<BAS>;<MIN>;IGNORE
<U0626>         <ARA_ywha>;<BAS>;<MIN>;IGNORE

reorder-end

END LC_COLLATE

LC_CTYPE
copy "i18n"
END LC_CTYPE

LC_MONETARY
copy "zh_CN"
END LC_MONETARY

LC_NUMERIC
copy "zh_CN"
END LC_NUMERIC

LC_TELEPHONE
copy "zh_CN"
END LC_TELEPHONE

LC_TIME

abday "<U064A>";/
      "<U062F>";/
      "<U0633>";/
      "<U0686>";/
      "<U067E>";/
      "<U062C>";/
      "<U0634>"
day   "<U064A><U06D5><U0643><U0634><U06D5><U0646><U0628><U06D5>";/
      "<U062F><U06C8><U0634><U06D5><U0646><U0628><U06D5>";/
      "<U0633><U06D5><U064A><U0634><U06D5><U0646><U0628><U06D5>";/
      "<U0686><U0627><U0631><U0634><U06D5><U0646><U0628><U06D5>";/
      "<U067E><U06D5><U064A><U0634><U06D5><U0646><U0628><U06D5>";/
      "<U062C><U06C8><U0645><U06D5>";/
      "<U0634><U06D5><U0646><U0628><U06D5>"
abmon "<U0642><U06D5><U06BE><U06