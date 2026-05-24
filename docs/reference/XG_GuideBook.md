---
author: ''
category: ''
converted_by: MarkItDown Desktop UI
date: '2026-05-24T19:54:05.640218'
source_file: F:\Downloads\XG_GuideBook.pdf
tags:
- imported
- manual
title: XG_GuideBook
---


Contents

Seminar 1 ................................................................ 1

He who rules the effects rules XG!?

Seminar 2 .............................................................. 11

Sound editing has come a long way!

Seminar 3 .............................................................. 22

Minimum XG for the compatibility-conscious

Seminar 4 .............................................................. 33

Mixing techniques add the finishing touch to your music

Seminar 5 .............................................................. 45

Onward!  Exploring the XG extensions

The contents of this seminar are also provided as pages on the XG website.
For the sample data that is referred to in this document, refer to the appropriate
web page.
Seminars 1—5 in this document correspond to seminars 4—8 of the web pages.

http://www.yamaha.co.jp/english/xg/lecture/index.html

Seminar 1

Seminar 1

He who rules the effects rules XG!?

Although the XG format is based on GM, it provides over three times
as  many  sounds,  and  since  each  of  the  sounds  can  be  edited  in  a
variety of ways, this gives you an incredible range of musical poten-
tial. And it also provides an unbeatably powerful helper in the area
of creating sounds and sound fields — the Effect block. Effects refer
to  the  applying  of  various  changes  to  the  sound.  There  are  many
such  effects,  including  for  example  the  “Delay”  effect  (in  karaoke
often  called  “echo”)  that  adds  repeating  echoes  to  the  sound,  the
“Reverb” effect that applies reverberation, the “Distortion” effect in-
dispensable  for  powerful  electric  guitar  sounds,  and  the  “Chorus”
effect that gives depth and spaciousness to the sound.
In the following sections we are going to talk about how you can take
full advantage of these effects.

1. “System Effects” — faithfully supporting the background
2. Batter number four — the “Variation Effect”
3. Creating some common sound fields

1

Seminar 1

1. “System Effects” — faithfully supporting the background
To be blunt, GM does not really define anything regarding effects. It is even possible
for a tone generator that has no effects at all to call itself a GM-compatible tone gen-
erator, and some low-cost models actually do this. Of course most GM-compatible tone
generators do provide the “reverb” and “chorus” effects mentioned above, and MIDI
GM files generally assume that reverb and chorus will be used. XG tone generators
also  contain  the  two  effect  blocks  “reverb”  and  “chorus,”  and  these  are  handled  in
basically the same way as in GM. These two effects are completely independent, and
can  be  used  simultaneously.  The  way  in  which  the  effects  apply  to  each  of  the  16
instrumental parts is determined by the amount of sound that is transmitted from
each part to the effect blocks (the “Effect Send Level”). It is normal for XG as well as
for GM to make this adjustment using control changes #91 (Effect 1 Depth; for Reverb)
and #93 (Effect 3 Depth; for Chorus).

(Figure 1-1)

In the XG format, effects which are applied to all parts in this way are referred to as
“system effects.” Of the system effects, reverb plays an extremely important role in
defining the overall feeling of the music and the sense of scale (room size). * Sample
data 4-1, 4-2 and 4-3 contain exactly the same performance, but use “no reverb,” “a
room  about  the  size  of  a  practice  studio”  and  “concert  hall”  respectively.  Listen  to
these and hear the difference.

* The sample data can be downloaded from the web pages.

2

Seminar 1

The functionality we have been discussing until this point has been more or less within
the  scope  of  GM.  However  XG  lets  you  edit  the  system  effects  in  great  detail.  For
example simply by selecting the reverb or chorus type, you have the following options
(refer to the XG Specification effect map).

Reverb block
NO EFFECT
HALL1
HALL2
ROOM1
ROOM2
ROOM3
STAGE1
STAGE2
PLATE

Chorus block
NO EFFECT
CHORUS1
CHORUS2
CHORUS3
CELESTE1
CELESTE2
CELESTE3
FLANGER1
FLANGER2

These are the required effects which every XG tone generator must provide. Although
actual MU series instruments provide many more types, it is safest to use only the
required effects if you wish to ensure that the MIDI files you distribute are compat-
ible. Of course if you are creating data just for your own system, you can use all of the
effects provided by your XG tone generator. This applies not only to effects, but to all
types of functionality. Check the XG specification to see whether a particular function
is required by XG, or is an optional or extended function.

When you actually wish to insert this type of effect setting into your MIDI data, you
will need to refer to table 3-3 “Parameter Change” of the XG Specification. For exam-
ple if you want to select “ROOM2” for the reverb, you would transmit the SysEx mes-
sage shown in figure 1-2.

3

Seminar 1

(Figure 1-2)

You can also use SysEx messages to edit effect settings in more detail. For example if
you wish to change the reverb time of “ROOM2” from its default (initial) setting of 1.5
seconds to 1.2 seconds, you would transmit the SysEx message shown in figure 1-3.
On the MU series tone generators, you can view these SysEx messages inthe LCD by
setting the desired value and double-clicking the ENTER button. This makes it easy
for you to take advantage of the full potential of these messages.

Caution!!
When you change the type of the effect, all of the detailed settings you have modified
will return to their default values. This means that you should first input the SysEx
message that selects the effect type, and then transmit the SysEx messages that modify
the effect parameters.

(Figure 1-3)

4

Seminar 1

2. Batter number four — the “Variation Effect”
In addition to the reverb and chorus blocks discussed above, every XG tone generator
is required to have at least one “Variation” effect block. This of course means that you
can apply an additional independent effect.
As the name suggests, the Variation effect block provides a wide variety of effects, but
only one of these can be used at a time. Please remember this point. Also, while the
Variation effect can be used as a third system effect, it can also be used as an “inser-
tion effect” that is applied only to a specific part. Figure 1-4 shows the concept of the
Variation effect.

(Figure 1-4)

Some of the Variation effect types are required by XG while other types are not, so
refer to the “Effect Map” of the XG Specification.

By default, the Variation effect will function as an insertion effect. If you wish to use
the Variation effect as a system effect, transmit the appropriate SysEx message to
select the effect type, and then transmit another SysEx message of
F0 43 10 4C 03 01 5A 01 F7
Then use CC#94 (Effect Depth 4) to adjust the effect send level of each part.

5

Seminar 1

(Figure 1-5)

Variation effect settings can also be edited in detail using SysEx messages.
The available parameters will depend on the effect type that is selected, so refer to the
“Effect Parameter List” of the XG Specification as you work with your XG tone gen-
erator. There are effect parameters in addition to those that appear in the display of
the tone generator. Numbers 1—10 in the “Effect Parameter List” are required by XG,
and the others are optional. If compatibility of your song data is a concern, you should
not modify/input parameter numbers 11 or later.

On the MU series tone bers 1—10 in the “Effect Parameter List” are required by XG,
and the others are optional. If compatibility of your song data is a concern, you should
not modify/input parameter numbers 11 or later.

6

Seminar 1

(Figure 1-6)

If you are using the Variation effect as an insertion effect, it can be applied only to one
part. This may give you the impression that the Variation effect is better used as a
system effect, but this is not necessarily the case. Unless you really need to apply that
effect to two or more parts, it is simpler and more effective to use it as an insertion
effect.
For example if you wish to apply distortion to a guitar that is panned to the left, using
the Variation effect as a system effect would require you to first select the effect type,
set the Variation Connection to “SYS,” use CC#94 to adjust the send level, and insert
a message of CC#94=0 for all other parts. In addition, you will need to transmit SysEx
data to move the pan (stereo position) of the variation effect to the left, so that the
guitar that should be heard at the left will not move to the center. This is a fairly
complicated procedure.

H Procedure
1. Select the effect type F0 43 10 4C 02 01 40 49 00 F7

2. Specify variation connection F0 43 10 4C 03 01 5A 01 F7

3. Variation pan settings (full left) F0 43 10 4C 02 01 57 01 F7

7

t
t
t
Seminar 1

4. Set CC#94 for the desired part

Desired value

5. Set CC#94=0 for all other parts (all channels)

On the other hand if you apply this as an insertion effect, all you have to do is specify
the part to which the effect will apply.

H Procedure
1. Select the effect type

F0 43 10 4C 02 01 40 49 00 F7
(Since this is set to “Insertion” by default, it is not necessary to specify the connection.)

2. Specify the part to which it will be applied (Example of part 2)

F0 43 10 4C 02 01 5B 01 F7
(Variation Pan need not be set; the pan setting of the part will remain valid.)

We could go much deeper into the connections and settings of the Variation effect, and
how it can be used, but since our space is limited, we will save this for another occa-
sion.

8

t
t
Seminar 1

3. Creating some common sound fields
You may not be familiar with the term “sound field,” but without being too specific, it
refers to the size and depth of the space in which music is occurring, and the location
of each instrument within that space. The reverb effect plays a major role in defining
the sound field, so here we will be introducing several examples of different reverb
settings. You can see the detailed settings by * downloading the sample file and check-
ing the settings in your sequencer or the front panel of your tone generator.

Sample 4-4 Classical orchestra
This is a larger hall. The low pass filter of the reverb is used to cut the high frequency
range slightly to create a subdued feeling, and the reverb return is raised somewhat
to increase the amount of reverberation.

Jazz club

Sample 4-5
This is a small club for live jazz. Plate reverb is used to produce the impression of a
slightly older recording.

Sample 4-6 Heavy metal
The somewhat grandiose reverb on the drum is created by adding Gate Reverb from
the Variation effect to get a tighter feel.

Sample 4-7 Fusion live
This is a simulation of a live performance. As the name suggests, we use Stage Reverb,
and simulate the feeling of a live performance by using the Variation effect to add a bit
of delay.

Tip 1. Distortion effects are not just for guitar
One of the most frequently-used types of variation effect are the “distortion” effect
such as Distortion, Overdrive and Amp Simulator etc. These are designed mainly for
guitar and bass, and make these sounds appear more like the real thing. But that is
not the only way in which they can be used.
By nature, these effects can also be used as a kind of equalizer or booster. By taking
advantage of this, you can create the kind of old-fashioned (extreme lo-fi ?!) sounds
that you will hear in sample 4-8, or you can apply a booster effect to give the overall
sound more power.

* The sample data can be downloaded from the web pages.

9

Seminar 1

(Figure 1-7)

Also, you can apply distortion effects to many types of sound other than guitars to
create some surprising new sounds. Spend some time trying this out.

Tip 2. What is the secret weapon “Assignable Controller”?
Each  type  of  Variation  effect  provides  one  parameter  which  can  be  controlled  by  a
specified control change message. This parameter will be marked by a dot in the XG
Specification “Effect Parameter List,” and by controlling this parameter you can make
your performance come alive.
The control change used in this case is called the Assignable Controller. By default
this  is  CC#16,  but  you  may  change  this.  The  sensitivity  with  which  this  control  is
received is specified by the “AC1 VarCtrl” setting in the VAR section of EFFECT mode.
This function can be used only when the Variation block is set to Insertion Effect; it is
not available when the Variation is used as a system effect.
* In sample 4-9, a rotary speaker effect is applied to the organ, and its speed of rota-
tion is varied in realtime to simulate a performance technique often used in organ
playing. If you have an XG tone generator, be sure to check this out!

* The sample data can be downloaded from the web pages.

10

Seminar 2

Seminar 2

Sound editing has come a long way!

In  this  section  we’re  going  to  talk  about  the  flexible  and  effective
sound editing that is a unique feature of XG-format tone generators.
To appreciate this, let’s take another brief look at the GM standard.
GM contains no definitions of how sounds are edited. In other words,
even if the specifications of each tone generator allow editing, it is
not possible to tweak the sounds from within song data that is being
created in compliance with GM.
In  contrast  to  this,  the  XG  format  allows  you  to  tweak  all  sound
editing parameters that would normally be meaningful to edit, and
naturally this data can be embedded in song data to modify the sounds
in realtime. For example you can extend the release time of a spe-
cific sound to emphasize its decay, or modify the cutoff frequency of
the low pass filter to adjust the brightness ... and much more. The
true advantage of XG tone generators and the XG format lies in the
incredible flexibility made possible by using this type of sound edit-
ing  in  conjunction  with  the  rich  array  of  effects  that  has  already
been described.

1. Look what you can do even without effects!
2. Take advantage of the ever-popular CC#71—74
3. Instant wah guitar technique
4. Be careful of extending the release time
5. Don’t be limited by the name of the instrument

11

Seminar 2

1. Look what you can do even without effects!
Any tone generator that complies with the XG format provides editing parameters to
modify the sound in the following ways. Since these parameters can be embedded in a
MIDI file in the form of NRPN or SysEx data etc., you can use them to modify the
sound continuously and in realtime.
When including these parameters in a MIDI file, you should use NRPN messages as
far as possible. Although it is of course possible to use SysEx data (refer to the table
3—7 XG Parameter Change Table (Multi Part) in the specification), SysEx data occu-
pies  more  data  volume  and  is  more  trouble  to  enter,  so  it  is  cleaner  to  use  NRPN
messages.

n Parameters related to the brightness of the sound
Here are the parameters that are related to the brightness of the sound, making the
sound more or less “brilliant,” “mellow,” or “darkly muted.”

1. FILTER CUTOFF FREQUENCY
Each sound of an XG tone generator has a low pass filter, a type of filter which cuts the
frequency  components  which  lie  above  a  given  frequency.  By  adjusting  this  “given
frequency” (= cutoff frequency) you can adjust the amount of high frequency compo-
nents in the sound, which will increase or decrease the brilliance of the sound (figure
2-1).

(Figure 2-1)

It is important to realize that this low pass filter is not an EQ (equalizer), and is not
able  to  boost  the  high  frequency  components  beyond  the  amount  contained  in  the
original sound (waveform). This means that for some sounds, raising the value of this
parameter beyond a certain point will have no further effect on the tone.

12

Seminar 2

Setting method: NRPN MSB (CC#99) 1, NRPN LSB (CC#98) 32, Data Entry (CC#6)

0—127 (default=64)

2. FILTER RESONANCE
The Resonance of the low pass filter adjusts the way in which the overtones in the
region of the cutoff frequency are emphasized. The human ear tends to differentiate
different sounds not by their fundamental frequency but by their overtone structure.
When the overtones are boosted or cut, the tone will change in obvious ways. If you
increase resonance to boost the overtones in this region, the sound will become brighter
and harder. If you continue to raise the value toward the maximum, you can produce
the “meow” tone that is often heard on analog synthesizers (figure 2-2).

(Figure 2-2)

Setting method: NRPN MSB (CC#99) 1, NRPN LSB (CC#98) 33, Data Entry (CC#6)

0—127 (default=64)

13

Seminar 2

n Envelope-related parameters
The graphic representation of how the volume changes from the beginning to the end
of a note is called the “envelope” (figure 2-3). Along with the waveform and the over-
tone structure, the shape of the envelope is an important element in determining the
character of a sound. The XG format provides the following parameters.

(Figure 2-3)

14

Seminar 2

1. ATTACK TIME
This is the time from when the sound begins until the maximum volume is reached.
On instruments such as piano, guitar and drums, this time is relatively short (fast),
and on bowed string instruments it is relatively long (slow) (figure 2-4).

(Figure 2-4)

Setting method: NRPN MSB (CC#99) 1, NRPN LSB (CC#98) 99, Data Entry (CC#6)

0—127 (default=64)

15

Seminar 2

2. DECAY TIME
This is the time from when the volume reaches the maximum level until it falls to the
level  at  which  it  will  remain  (the  System  Level).  On  instruments  such  as  piano  or
guitar, this is fairly long.

Setting method: NRPN MSB (CC#99) 1, NRPN LSB (CC#98) 100, Data Entry (CC#6)

0—127 (default=64)

3. RELEASE TIME
This  is  the  time  from  when  the  key  is  released  (key-off)  until  the  sound  decays  to
silence. On a piano this will be 0 or close to it, while on a vibraphone or cymbal it will
be long.

Setting method: NRPN MSB (CC#99) 1, NRPN LSB (CC#98) 102, Data Entry (CC#6)

0—127 (default=64)

On tone generators such as the MU series, this parameter is found in the “EG” section
of Edit mode. You will also find “Pitch EG” related parameters such as “PEGAtakTime.”
However since these are extensions of the XG format, it is safest not to use them if
compatibility of your song data is a concern.

Tips
As  you  can  see  from  the  fact  that  there  is  no  Sustain  Level  setting,  the  EG-related
parameters on an XG tone generator are not intended to be used for creating a sound
from  scratch,  but  rather  for  modifying  an  existing  sound  relative  to  the  previously-
specified values. Since we are dealing mainly with desktop music systems and PCM
tone generators, this is an appropriate method. This means that there will be situations
in which, for example, raising the value of the Attack Time parameter will not speed up
the actual attack time any faster than the original waveform, or lengthening the Re-
lease Time will not prevent the sound from decaying to silence at some point (figure 2-
5). It is important to be aware of the original sound as you make adjustments.

16

(Figure 2-5)

Seminar 2

n Vibrato parameters
Vibrato does not directly have a major influence on the tone, but is an important part
of the musical expressiveness of an instrument.

1. VIBRATO RATE
This parameter adjusts the modulation speed of the vibrato. Increasing the value will
speed up the vibrato, and decreasing it will slow down the vibrato.

Setting method: NRPN MSB (CC#99) 1, NRPN LSB (CC#98) 8, Data Entry (CC#6)

0—127 (default=64)

2. VIBRATO DEPTH
This adjusts the depth (amount) of modulation. Since this parameter is related to the
Vibrato Rate, it is a good idea to check the Depth if you have adjusted the Rate.

Setting method: NRPN MSB (CC#99) 1, NRPN LSB (CC#98) 9, Data Entry (CC#6)

0—127 (default=64)

3. VIBRATO DELAY
On most instruments, the performer does not begin to apply vibrato immediately from
the beginning of each note. Rather, vibrato is applied after a suitable interval, which
will depend on the musical context and the tempo. The Vibrato Delay parameter lets
you adjust the length of this interval.

Setting method: NRPN MSB (CC#99) 1, NRPN LSB (CC#98) 10, Data Entry (CC#6)

0—127 (default=64)

(Figure 2-6)

17

Seminar 2

2. Take advantage of the ever-popular CC#71—74
We have mentioned that NRPN and Data Entry messages are used to insert the above-
described sound editing messages into a MIDI file. However with this method, three
control changes must be used to change one parameter. Thus, XG allows control changes
71 through 74 to be used to perform the four most frequently used parameter changes.

* FILTER CUTOFF FREQUENCY: Brightness (CC#74) 0—127 (default=64)
* FILTER RESONANCE: Harmonic Content (CC#71) 0—127 (default=64)
* EG ATTACK TIME: Attack Time (CC#73) 0—127 (default=64)
* EG RELEASE TIME: Release Time (CC#72) 0—127 (default=64)

Since by using these controllers you can edit each parameter with just a single mes-
sage, your data entry task becomes much simpler, especially when you wish to create
a curve of continuous change, or create a change that occurs frequently.

18

Seminar 2

3. Instant wah guitar technique
The easiest way to simulate the wah pedal technique often used in rhythm or solo
guitar is to use the “AUTO WAH” Variation effect. However if you wish to use the
Variation effect elsewhere, or if you wish to apply the wah effect at a complex timing,
it’s time to use the CC#74 and CC#71 messages that we introduced above.
The wah effect is actually produced by smoothly modifying the center frequency of an
equalizer  (figure  2-7).  If  you  wish  to  simulate  this  effect  without  an  EQ,  you  can
smoothly  modify  the  cutoff  frequency  of  the  filter.  That’s  where  CC#74  comes  in.
* Download the sample 5-1 file and check out how it works and how it sounds.

(Figure 2-7)

* The sample data can be downloaded from the web pages.

19

Seminar 2

4. Be careful of extending the release time

In particular for classical styles of music, the way in which each note of an instrument
decays is important. Skillful use of reverb is the answer to most situations, but ex-
tending the Release Time slightly longer than normal is also helpful in producing a
more natural decay, and people experienced in creating MIDI data frequently use this
technique.
However in DTM setups where a single tone generator is usually called on to play all
of the parts, you should know that this technique may cause a serious problem with
“stolen  notes.”  XG  tone  generators  are  required  to  have  a  capacity  of  “32  notes  or
more,” which is fairly generous. However to be precise, this is actually “32 elements or
more.”
Some XG voices use two elements to create a single voice, so if each of the voices you
are using is a two-element voice, your maximum polyphony will actually be only 16
notes.

(Figure 2-8)

Take a look at figure 2-8. If you are using the two-element voice “S.Strngs,” overlaps
in  the  duration  (gate  time)  and  extended  release  times  (as  mentioned  above)  may
actually cause 20 elements to be used. If several other parts are also sounding at this
time, you can see how easy it would be for more than 32 elements to be used.
Since “last note priority” is the rule for XG tone generators, exceeding the maximum
polyphony  will  cause  the  first-sounded  note  to  be  cut  off  (“stolen”)  while  it  is  still
sounding.  If  this  happens,  of  course,  we  are  not  talking  about  a  “natural-sounding
decay!” Be careful with duration and release settings. For some sounds, the release is
long to begin with, so remember to take this into account.
20

Seminar 2

5. Don’t be limited by the name of the instrument
When actually creating MIDI song data, one of the biggest questions is what sound to
use for the melody part. True, using an instrument that actually exists — like sax or
organ — is usually a safe choice, but as you know if you have any experience with
creating song data, it’s not easy to create data that brings out the feeling and perform-
ance style of the actual instrument.
Might this be the reason that many people muddy the waters (sorry!) by using a synth-
type lead sound for the melody? Of course, if this is the most suitable choice for the
song, that’s fine. We don’t want to say that it’s wrong to use synth-lead sounds.
But since you are using XG, how about using the sound editing and effect techniques
that we have been describing to create a sound that will really make people sit up and
take notice?

Tips for creating sounds
1. Slow down a fast-attack sound
2. Try a dramatic lengthening of the release (* sample 5-2)
3. Modify the filter cutoff frequency and resonance
4. Apply a distortion-type effect (* sample 5-3)
5. Play the instrument out of its natural pitch range (* sample 5-4)
6. Use two or more of the above
7. Try layering two sounds

Go ahead and try these out!

* The sample data can be downloaded from the web pages.

21

Seminar 3

Seminar 3

Minimum XG for the compatibility-conscious

The XG format includes a concept known as “scalability.”
“When XG-format compatible MIDI data is played back on an XG-format
compatible tone generator, the level of the reproduced result will be com-
mensurate to the grade of the tone generator.”

This is “scalability.” The term may be unfamiliar, but in a sense, scalability
may be the greatest advantage of the XG format.
Take effects, for example. Upper-level models of tone generator such as the
MU100 and MU90 provide two “insertion effect blocks” in addition to the
Variation effect which is standard for XG. If data which takes full advan-
tage of these effects is played back on an average XG tone generator such
as the MU50, it is obvious that these insertion effects will not be applied.
However, this means simply that the effects will not be applied, and does
not mean that the corresponding part will be silent or that the perform-
ance will stop. In other words, the music will play “more or less” as ex-
pected.
However this also means that MIDI data which was created with an up-
per-level XG model in mind may not sound quite as good as it should when
played on a standard model, or may sound a bit differently than intended.
If the data is intended only for a specific model, this is not a problem. But
if you want your data to be heard by as many XG tone generator owners as
possible, or if you are producing XG format MIDI files for commercial pur-
poses, this is a problem.
To prevent this, you need to create MIDI data that will sound sufficiently
good using only the basic functionality of XG. And if you feel bad about not
taking advantage of the functionality of an upper-level model, just be care-
ful to create your data so that the performance won’t be significantly im-
paired by the lack of that functionality. In this session we’re going to inves-
tigate this area in detail.

1. Extension banks can be used thus far
2. Effects can be used thus far
3. Optional areas of multi-part parameter editing
4. Channels and parts
5. Element Reserve and how to use it

22

Seminar 3

1. Extension banks can be used thus far
n Normal voices are basically no problem
In the case of extension bank sounds for normal instrumental sounds (Normal voices)
such  as  found  in  GM,  the  capital  sounds  (the  basic  GM  sounds  of  bank  0)  will  be
substituted if the particular tone generator does not posses the requested extension
bank. (figure 3-1).

(Figure 3-1)

Most extension bank sounds are the same type of instrument as the corresponding
capital sound, so the substitution should not sound too unnatural. However some of
the sounds are really quite different in character, and if you wish to use such sounds,
you will need to make a musical decision. For example “FluglHrn” (flugelhorn) which
is found in the trumpet extension bank 96 is a brass instrument shaped the same as a
trumpet, and with the same pitch range and performance technique. Naturally, the
sound is unmistakably that of a brass instrument, but has a softer character than
that of a trumpet. Since the XG standard does not provide the “FluglHrn” sound, the
MU50 etc. will sound this using a trumpet. As you create your data, you must make a
decision as to whether or not you can tolerate this difference (figure 3-2).

23

Seminar 3

(Figure 3-2)

n Be resigned to “Silence” when using an SFX voice
In the case of sounds in the SFX bank (Bank Select MSB=064), the LCD panel will
indicate  “Silence”  if  the  requested  sound  is  not  found,  and  there  will  be  no  sound.
Since SFX sounds are sound-effects, any substitution of them for a different sound
could create a totally inappropriate result. For example if you needed a human voice
to scream at some point, but the tone generator substituted a human voice laughing,
the audible result would be totally inappropriate, even though the substituted sound
was also a human voice. In such cases, it is preferable for there to be no sound at all.
If you wish to use SFX sounds which are not supported as standard, you must make
sure that the overall result will not be fatally impaired if that SFX sound is not heard.
Also, for some of the optional SFX sounds, it is possible to produce the same result by
using a normal voice such as “B.Slide” as * shown in sample 6-1. True, it would be
easier to use an SFX sound, but perhaps taking time to create your data is part of the
enjoyment of desktop music.

* Since some items in sample 6-1 use optional SFX sounds, there will be a portion of
silence on models such as the MU50. The same pattern is repeated twice, and if an
SFX sound is used on the first time, the second is created using normal sounds and
musical data.

* The sample data can be downloaded from the web pages.

24

Seminar 3

n Drum voices
Care must be taken in the case of drum voices. Upper-level models such as the MU90
and MU100 provide many optional drum voices in addition to the 9 standard XG kits.
These are not yet listed in the currently-available XG specification, and are of course
optional, so that if data which uses these is played on a standard XG tone generator,
“StandKit” will be substituted for all of these voices. Even though they are all drum
voices, differences in tone may produce a substantially different musical impression,
so please be aware of this situation when using kits other than those listed below.

* The following 9 drum voices are standard for XG
1. Standard Kit (StandKit)
2. Standard 2 Kit (Stnd2Kit)
3. Room Kit (Room Kit)
4. Rock Kit (Rock Kit)
5. Electronic Kit (ElectKit)
6. Analog Kit (AnalgKit)
7. Jazz Kit (Jazz Kit)
8. Brush Kit (BrushKit)
9. Classic Kit (ClascKit)

25

Seminar 3

2. Effects can be used thus far
n Reverb and chorus blocks
You are safe as long as you are using only the effects which are indicated in the XG
specification as “required by XG.” Figure 6-3 shows an example of reverb, and since
the lightest shade of gray indicates optional effects, you should use effect types other
than these. Take a look at the actual XG specification to verify this.

(Figure 3-3)

n Variation block
As in the case of reverb etc., you are safe as long as you use Variation block effects
which are indicated in the XG specification as “required by XG.”

PITCH CHANGE
AURAL EXCITER
TOUCH WAH or TOUCH WAH+DIST
COMPRESSOR
NOISE GATE
55 VOICE CANCEL

Since these effects are not standard for XG, they will be treated as “THRU” on models
which do not provide them, and the variation block will not apply any effect.

26

Seminar 3

CHORUS4
CELESTE4
FLANGER3
PHASER2

When these effects are used, the corresponding type of required effect whose effect
type LSB value is closest (e.g., CHORUS3, FLANGER2) will be substituted.

n Insertion effect block
The insertion effect block itself is an optional part of XG. Even if your settings use
these effects, they will be ignored completely by models which do not provide them.
Thus, you should be careful about the volume, in particular when using distortion-
type effects or equalizer-type effects. Even if the volume is just right when the effect is
applied, there may be cases in which the volume is dramatically lower when the effect
is not applied. To minimize this problem, you should also check the volume without
the effect.

(Figure 3-4)

In general, therefore, insertion effects should not be used when creating XG format
data for commercial purposes.

27

Seminar 3

n Multi EQ block
This block is also optional, but may be used, as we will explain below. Only be aware
that if you set the volume balance when this block has been used to perform major
equalization, the balance may be disrupted when the data is played back on a model
which does not have EQ. If you do use EQ, it is safest to use it only in subtle touches.

n Part EQ
The Part EQ provided on the MU90 and MU100 is a wonderful tool which lets you
apply independent bass and treble equalization to each of the 16 (32) parts. Unfortu-
nately, this functionality is not standard for XG (figure 3-5). Here too, be aware of the
potential volume difference when this effect is used or not used.

(Figure 3-5)

28

Seminar 3

3. Optional areas of multi-part parameter editing
A large number of multi-part parameters can be edited using system exclusive mes-
sages. Some of these can also be edited using control change messages (including RPN
and NRPN), and when this is possible, you should use control change messages in
preference to system exclusive messages.

(Figure 3-6)

Even in other cases, it is safest to avoid using parameters which are marked [Ext.] in
the XG specification. However as an exception, the following three [Ext.] can be used.
(Refer to “Guidelines for creating XG song data,” figure 3-6.) Even on tone generators
which do not support these parameters, there will be little or no impact on the play-
back result, so the use of these parameters is permitted.

H Multi EQ Data parameter change
As described above.

H Display Data parameter change
This is a parameter which displays text or graphics etc. in the LCD of the tone genera-
tor, and will simply be ignored on tone generators which do not have this capability.

H AD Part Data parameter change
This is a parameter for tone generators which provide an AD part (MU80, 90, 100,
DB60XG etc.), and allows the rich variety of XG effects to be applied to a mic input or
to an instrumental input such as guitar. As you can imagine, this is extremely conven-
ient for karaoke and when practicing a musical instrument. This setting will simply
be ignored by tone generators which do not have an AD part, but for example if you
applied  the  variation  effect  to  this  part  with  a  setting  of  “Insertion,”  the  variation
effect will obviously be unavailable for use by another part.

29

Seminar 3

4. Channels and parts
The section “2. Concerning channels” of the “Guidelines for creating XG song data”
describes how MIDI channels and musical parts should correspond. This has to do
with the relative note priority of each channel and with the “XF format” proposed by
Yamaha,  but  normally  when  you  create  data  you  do  not  need  to  be  aware  of  this.
However if you are creating XG format data for commercial sale, you should in princi-
ple follow these guidelines. Since nothing is particularly specified for channels 6 and
following, you may wish to assign parts with a higher note priority (greater impor-
tance) to lower-numbered channels (figure 3-7).

(Figure 3-7)

30

Seminar 3

5. Element Reserve and how to use it
On XG tone generators, channel 10 (the rhythm channel) is given the highest priority,
and thereafter, channels are prioritized with lower-numbered channels having higher
priority. When the maximum number of simultaneous notes (32 notes is standard for
XG) is exceeded, “last note priority” will be applied to turn off the oldest sounding
note, and then the note data which was received later will be played (figure 3-8). At
this  time,  higher-numbered  channels  will  be  more  likely  to  experience  interrupted
notes if notes on two or more channels were played at the same time.

(Figure 3-8)

However if the notes of a certain channel failed completely to sound, a minimum of
two notes are reserved for each part other than the drum part. This is referred to as
“element reserve,” and it is worth knowing that the user can modify this value for
each channel.

As we mentioned briefly in the previous section (2-4. Be careful of extending the re-
lease time), the word “element” refers to a component which is used to create a sound,
and “maximum simultaneous notes” is actually the “maximum simultaneous elements.”
Since some voices use two elements to produce each note, data that plays only three
notes may actually use six elements. The number of elements used by each voice is
given in the sound map of the XG specification or in the voice list of your tone genera-
tor.

Suppose that you what to raise the element reserve setting of channel 6 to eight ele-
ments. With the default settings, channel 10 has zero elements, and the other chan-
nels have two elements, meaning that 30 elements are already reserved. If you now
simply attempt to raise the channel 6 setting to eight elements, this would mean that
a total of 36 elements would be reserved (figure 3-9).

31

Seminar 3

(Figure 3-9)

However since 32 is the maximum number of elements, we have a problem here. In
actuality, element reserve will not function with such settings. In order to use element
reserve, we must first reduce the reserve setting for a less-needed channel (in other
words, the channel of a part whose total absence, in the worst case, would not be a
major problem). After making the necessary reduction, we can then insert a system
exclusive message to increase the element reserve settings for the desired channels. It
is important to observe this order (figure 6-10). Remember that the element reserve
function does not increase the available polyphony, but simply reserves a guaranteed
minimum number of notes for each part.

(Figure 3-10)

32

Seminar 4

Seminar 4

Mixing techniques add the finishing touch to your music

Whether or not you are using an XG tone generator, mixdown tech-
nique (just as when producing a music CD) is always an important
part of desktop music, where a single tone generator is used to play
all the parts of your song. In this section we’re going to introduce
some mixing techniques by which the “data” that you created can be
transformed into “music.”

1. Creating a volume balance
2. Secrets of the pro’s for using effects
3. Use universal exclusive messages for a fade-out

33

Seminar 4

1. Creating a volume balance
The basic purpose of mixing is to create a volume balance between the parts, and in
desktop music, CC#7 (Main Volume) is normally used to make this volume adjust-
ment. This is widely known, but there is another popular control change message that
is also used to adjust the volume — CC#11 (Expression) — and you need to be aware
that these two messages are not intended to be used as simple replacements for each
other.

CC#7: Use this message to specify the volume balance between parts: i.e., normally
this will be placed only in the setup measure located before the music actually begins,
and will not be used during the performance.
* However,  exceptions  can  be  made  if  the  balance  needs  to  be  re-created,  such  as
when a program change occurs during a song, or if the mood of the song undergoes
a dramatic change.

CC#11: Use this message to create expressive dynamics during a performance (cre-
scendo and decrescendo), or to modify the envelope of notes: i.e., this message is usu-
ally used to create continuous change.

Unless you divide the responsibilities of the two messages as described above, you can
probably imagine that you will run into real difficulties during mixing (figure 4-1).

34

Seminar 4

(Figure 4-1)

Tip 1. Velocity and volume
Normally, raising the velocity will also increase the volume. However except for some
low-cost tone generators and for some special sounds, be aware that the tonal charac-
ter of the sound will also be affected. This is easy to understand when you consider the
sound of an acoustic instrument. For example, a softly blown note on a trumpet has a
mild character, and the tone will become brighter as the note is blown more forcefully.
On XG tone generators, this type of tonal change is usually produced by raising or
lowering the cutoff frequency of the low pass filter according to the velocity. Thus, it is
important that the velocity of the data you create is appropriate for the musical con-
tent of that part. Depending on velocity alone to adjust the volume of a part is not
recommended. Also, some voices are set up so that the tonal character changes dra-
matically around a certain velocity value (the sounds of bank 43).

35

Seminar 4

Now let’s go through the actual mixing procedure.

1. Select a type of reverb that is appropriate for that song
Set the reverb send level of each part to an appropriate (provisional) level, and decide
what type of reverb you will be using. If necessary, edit the parameters of the reverb.

2. Set the volume of the drum part
If your song contains drums, first set the volume of the drums. You’ll probably want to
set CC#7 to a basic level of 100. In the case of the lively rock song, you might want to
set this a little higher. If necessary, use NRPN to set the volume balance, pan and
reverb amount of each drum part.

3. Set the volume and pan of the bass
If your song has a bass part, set the bass volume following the drums. For most pop
songs, virtually no reverb is applied to the bass, to avoid blurring the sound. At this
time, you will need to use the Mute or Solo functions of your sequencer so that only the
drums and bass can be heard (figure 4-2). If your song has no drums or bass part, start
your volume adjustments with the part that corresponds to the bass part.

(Figure 4-2)

36

Seminar 4

4. Set the volume and pan of the major accompaniment parts
Set the volume and pan (use CC#10 to adjust) of parts which are always sounding,
such as keyboard instruments, pads, and rhythm guitar etc.

5. Set the volume and pan for the other accompaniment parts, and for any melodic parts in
the introduction or break
Set the volume and pan for obligatos, parts which appear occasionally, and counter-
melodies.

6. Set the volume and pan for the main melodic part
If at this time, raising CC#7 does not give you enough volume, re-do steps 1 through 5.
Although not recommended, you could also raise the velocity or modify the sound used
for the melody.

7. Set the reverb send level of each part
Use CC#91 to set the reverb of each part. Here too, it is best to start with the drums.

8. Set the chorus send level of each part
Use CC#93 to set the chorus send level of each part. This also applies if a different
effect such as flanger etc. is selected for the chorus effect block.

37

Seminar 4

9. Adjust the variation effect
If you will be using a variation effect, the adjustment method will differ depending on
whether it is being used as a system effect or an insertion effect. In the case of an
insertion effect, set the effect parameters to the appropriate settings, and then use
CC#7 to re-adjust the volume of that part. If you are using the variation effect as a
system effect, set the effect parameters to the appropriate settings, adjust CC#94 for
each part to which you wish to apply the effect (set CC#94 to zero for parts to which
you do not wish to apply the effect), and then use CC#7 to adjust the volume (figure 4-
3).

(Figure 4-3)

38

Seminar 4

10. Overall adjustments
Once the effect-related settings have been made, you can make fine adjustments to
volume, effects and pan. At this time, try listening to the song at both loud and soft
volumes as well as through headphones, and make adjustments so that the song sounds
good in all conditions (figure 4-4). As far as possible, avoid changing the volume of the
drums or bass at this time, since this will essentially mean starting over from the
beginning.

(Figure 4-4)

39

Seminar 4

2. Secrets of the pro’s for using effects
The basics of mixing have been outlined above, but in actual mixing, the way in which
effects are used is one of the most important topics. In particular, XG offers a very rich
variety of effects, which means that you can create sound on a much higher level than
with previous desktop music systems, but also requires a corresponding level of know-
how to take advantage of the possibilities. The paragraphs below will give you some
tips and know-how to help you get the most out of effects.

1. Don’t forget the return level adjustment for reverb
In general, you will use the Send Level to adjust the reverb depth for each part. How-
ever for classical orchestral pieces, or when creating special sound fields, there may be
situations in which raising CC#91 all the way does not produce sufficient reverb. In
such cases, you can adjust the Reverb Return parameter to get an even deeper effect.
* Sample data 7-1 and 7-2 have the identical reverb-related settings, but the reverb
return has been increased for sample 7-2. Listen to the two and compare.

SysEx for setting Reverb Return
F0 43 10 4C 02 01 0C mm F7 (mm is the data; default value is 40H)

* The return level can also be adjusted for the chorus effect block and for the varia-

tion effect (if it is being used as a system effect).

* You can also adjust the volume of the sound which is not processed by the effect (the

“dry” sound). (Refer to table 3-7 DRY LEVEL in the specification.)

2. Don’t overdo the reverb
It’s important to avoid excess when applying any effect, not just reverb. In particular,
excessive use of system effects such as reverb or chorus will impair the overall clarity
of the sound, cause it to feel less powerful, or produce unwanted resonances which will
muddy the sound. However there are times when you will want to use effects boldly, so
it’s difficult to make hard-and-fast rules here.

3. Watch out for the gain when using distortion or EQ!
When an effect is applied, the volume of that part will generally be increased or de-
creased (figure 4-5). In particular in the case of distortion-type effects such as over-
drive and equalizer-type effects, the effect itself produces amplification (gain), so after
applying the effect you will need to re-adjust the volume balance with the other parts.
* Sample file 7-3 will let you experience the volume difference that results with or
without the 3-band EQ variation effect. EQ is applied to the first half, and not applied

* The sample data can be downloaded from the web pages.

40

Seminar 4

to the second half. If this song used the insertion effect block that is provided on tone
generators  such  as  the  MU90,  and  was  played  back  on  a  basic  XG  tone  generator,
there would be absolutely no effect at all. Naturally this would mean that the volume
of that part would be insufficient. Be aware of such situations.

(Figure 4-5)

 Cho?

 Rev and SendVar ﬁ

4. What are SendVar ﬁ
“SendVar ﬁ
 Rev” is one of the parameters that can be set when the variation effect is
used as a sensitivity stem effect. This parameter specifies the amount of the effect
sound (wet sound) from the variation effect that will be sent to the reverb or chorus
block. For example if you used the variation effect to apply distortion, reverb would be
applied to the dry sound in the amount specified by CC#91, but no reverb at all would
be applied to the wet sound. This is because SendVar ﬁ
 Rev is initially set to zero. If
you want the sound to appear more natural, you should apply reverb to the wet sound
as well (figure 4-6). Of course, the same can be said for the chorus effect (refer to table
3-3 of the specification).

(Figure 4-6)

41

Seminar 4

Note than when using the variation effect as an insertion effect, the signal is routed
through  a  “Dry/Wet”  parameter  which  adjusts  the  ratio  of  the  dry  and  wet  sounds
before it is sent to the reverb or chorus blocks, so this setting is not necessary (figure
4-7). Nor will it appear in the display screen of the tone generator.

(Figure 4-7)

5. Effects have a pan setting too
A certain heavy metal freak pulled three all-nighters creating data for a song that
featured some beautiful twin-lead guitar work. Naturally, he wanted the guitars to be
distorted to the max, so he used the variation effect in the system position, and used
CC#94 to adjust the effect for each of the two guitar parts. But the two guitars, which
had been panned to opposite sides using the Pan message (CC#10), were both heard
from the middle! Was all his hard work in vain?

The  short  answer  is  that  unfortunately,  there  is  no  basic  solution  to  this  problem.
Since distortion is a monaural effect, the effect sound will be output at the location
specified by the pan setting of the effect itself, regardless of the panning of the original
sound of the part. This means that in the case described above, while the dry sound
will  be  output  from  both  sides,  the  effect  sound  will  be  output  from  the  center  by
default, causing both guitars to be heard together from the center (figure 4-8).

42

Seminar 4

(Figure 4-8)

To avoid this, you might consider reducing the send level to the variation effect as far
as possible, or reducing the drive or output level as well. However this may mean that
you don’t get enough effect, and the sounds will still not be panned completely left and
right. If you want to give priority to the effect, you will have to put up with the pan-
ning problem, and if you want to give priority to panning, the best you can do is to use
the variation effect in the insertion position and apply it to only one of the guitars. Of
course this problem will not occur if you are using a tone generator such as the MU90
which provides an additional insertion effect, but ...

The variation effect provides 2-band and 3-band EQ. Naturally the 3-band EQ lets
you make settings in greater detail, but the 3-band EQ is monaural while the 2-band
EQ is stereo. This means that if you are using the effect as a system effect, the 2-band
EQ will not affect the pan.

For the reverb and chorus blocks, you can also make pan settings for the effect itself.
Including cases when the variation effect is used as a system effect, you may wish to
adjust the effect pan as well.

43

Seminar 4

3. Use universal exclusive messages for a fade-out
Most mixes involve a fade-out or fade-in. These can be created by decreasing or in-
creasing CC#7 or CC#11 values for each channel, but the simplest way is to use the
“Master Volume” universal realtime exclusive message. This method lets you increase
or decrease the overall volume while preserving the volume balance between parts,
and does not require you to input control changes for each channel.

MIDI master volume SysEx.
F0 7F 7F  04 01 ll mm F7
(mm is the MSB of the data, with default value of 7FH; ll is the LSB, and is normally
input as 00H)

Tip 2. Handling distortion-type effects
When using a distortion-type variation effect, the volume of that part may not de-
crease in the same way as other parts when a fade-out is performed. In such cases, you
can gradually lower the Variation Return to produce a natural fade-out.

Variation Return Level SysEx.
F0 43 10 4C 02 01 56 mm F7
(mm is the data; default value 40H)

In some cases, you may want to create a special fade-out in which certain parts re-
main.  The  “Guidelines  for  XG  song  data  production”  say  that  this  should  be  done
using CC#11 to create the fade-out. However there may be cases in which using CC#7
may be more musically effective, so you should feel free to make your own decision.

44

Seminar 5

Seminar 5

Onward!  Exploring the XG extensions

In the previous four lessons, we have given a basic coverage of the
XG format and XG tone generators. Since this eighth lesson will be
the final one in this series, I’d like us to take a step beyond basic XG,
and talk about extended XG and the future of XG.
As we have already mentioned several times, the XG format allows
for expansion to include future technologies.
Some of these new technologies and extended functions are already
available as products, and you may already know of these.
It goes without saying that Yamaha’s development team continues
to dream up even more new ideas which they are working to bring
into reality.
While we look forward to the day when these new wonders will see
the light of day, let’s take a look at the technology that’s available
now.

1. Using the Part Equalizer to transform sounds
2. Here’s what you can do on models that provide an AD part
3. Optional parameters that the pro’s will love
4. VL-XG goes beyond DTM!?
5. A new “singing synth” that will change the future of DTM!

45

Seminar 5

1. Using the Part Equalizer to transform sounds
The most attractive aspect of the “Part Equalizer” (Part EQ) that is featured on the
MU90 and MU100 is that it can be applied independently to each of the 16—32 parts.
In the world of musical professionals, EQ plays an important role at each stage of the
recording process. This is clear from the fact that most recording engineers prefer to
use mixing consoles that have good EQ. At the risk of overstatement, EQ can have a
decisive impact not only on the sound, but even on the music itself.
The part EQ provided on the MU90 and MU100 is a simple parametric type which
allows you to adjust the gain of the LOW and HIGH ranges independently, and also
lets you freely change the LOW and HIGH center frequencies (figure 5-1).

(Figure 5-1)

Since the range and frequency components will naturally differ depending on the voice
that you are EQ’ing, a simple tone control EQ that just boosts or cuts the gain at a
fixed  point  is  obviously  not  going  to  do  the  job  (figure  5-2).  That’s  why  you  need  a
parametric type EQ that lets you freely adjust the center frequency.

46

Seminar 5

(Figure 5-2)

In the same way as for other multi part parameters, the Part EQ can be edited using
SysEx messages.
(figure 5-3, refer to specification table 3-7-3)

(Figure 5-3)

At this point, we’d like to direct your attention to the areas marked “NOT USED.” A
bit earlier, we used the phrase “simple parametric type EQ.” This is because we plan
that some future models will have “full parametric EQ,” with four bands (high, high-
mid, low-mid, and low) and adjustable bandwidth (called Q) for each band, and we
have allocated addresses for controlling these parameters. Addresses which are not
currently used are marked “NOT USED.” This is yet another point where you can
glimpse the future of the XG format.

47

Seminar 5

Tips
If you have some experience with music production, you know how convenient EQ can
be. But that doesn’t mean that EQ is a cure-all. No amount of EQ can affect frequency
components  which  do  not  exist  in  the  original  sound.  For  example  if  you  want  to
strengthen  the  ultra-low  range  of  a  bass,  the  original  sound  must  contain  at  least
some components at that frequency. If not, no amount of raising the gain will have any
effect.
Surprisingly, the frequency range which we normally sense as ultra-low is often the
60—120 Hz range, which is higher than the actual ultra-low range (in the vicinity of
30—60 Hz). Likewise, what we perceive as being “transparent highs” is often deter-
mined  by  the  amount  of  frequency  components  in  the  4  kHz  —  10  kHz  range.  Try
taking these factors into consideration as you edit the EQ settings.

48

Seminar 5

2. Here’s what you can do on models that provide an AD part
The A/D input jack (figure 5-4) provided on models such as the MU80, 90, and 100 is
not just a supplementary input.
A/D conversion means that an analog signal is converted into a digital signal for process-
ing. If, for example, a mic is connected to this jack, its audio signal will be converted
into digital form, and will be handled as one or two additional parts (the A/D input is
a stereo jack!) which are added to the 16—32 conventional parts of an XG tone genera-
tor. I can hear someone out there saying “So what?,” so I’ll just list what this function-
ality lets you do.

(Figure 5-4)

I The reverb, chorus, variation and insertion  effects can be applied  just  as for the

other parts

I A MIDI channel can be assigned, and control changes on that channel can be used

(some will have no effect)

I A program can be preset to select the optimal sound for the instrument etc. that is

connected to the A/D input

I In the case of the MU100, a mic can be connected to the A/D, and used in conjunc-

tion with a special effect provided by the VH (vocal harmonizer) board, etc.

By default, no MIDI channel is assigned to the A/D part, but this can be set using
SysEx messages. You can also use SysEx to select a preset program for each instru-
ment (refer to table 3-8 in the specification).
The VH board adds harmony to your own voice so that you can sing a duet with your-
self, and is a wonderful asset for karaoke applications. The original sound from the A/
D part is used to create this harmony.
(product photo of the VH board)

49

Seminar 5

Another way of looking at the A/D part is to consider it an all-purpose amp that will
accommodate any input source from mic to guitar or keyboard.
In addition, the rich variety of effects available is probably more extensive than the
average multi-effect unit.
This one little unit and a set of headphones is all that you need practice guitar or
another instrument anytime anywhere!

50

Seminar 5

3. Optional parameters that the pro’s will love
Several times during the previous lectures, we mentioned that you should avoid using
the extended portion of the XG format if compatibility of song data is important. How-
ever if song data compatibility is not particularly an issue, you would probably like to
take full advantage of the functionality of your tone generator.
Since we have already discussed the effect-related format extensions, let’s talk about
the parameters that are marked as [Ext.].

n Amplitude Modulation Depth
In table 3-7 of the specification, there is an item of
(F0 43 10 4C) 08 nn 22 1 00 -7F MW LFO AMOD DEPTH  [Ext.] 0 -127 0

This is related to the vibrato settings, and will affect the result when modulation is
applied.
Vibrato differs considerably in its character depending on the instrument and on the
performer, and skillful use of vibrato is an important part creating a sound. The pre-
set sounds use fairly conventional vibrato, but on instruments such as flute (in par-
ticular during a solo), not only the frequency (pitch modulation) but also the volume
changes significantly. In synthesizer terminology, this type of cyclic change in volume
is referred to as Amplitude Modulation, and the above-listed parameter is what sets
its depth (figure 5-5).

51

Seminar 5

(Figure 5-5)

By default, this will be zero, but as appropriate for the character of the song and the
type of instrument, you can raise this value, and then use CC#1 to create some realis-
tic performance expression. (If CC#1 is not used, there will be no change.) However
caution is needed, since if an inappropriate  setting is used, the sound may  appear
unnatural or crude, and in some cases noise may even occur. It is also possible to use
this to produce a tremolo effect for electric piano or guitar, so it’s worth trying in cases
when you are not able to use the Tremolo variation effect. In this case, set the MW
LFO PMOD DEPTH value to zero so that the pitch will not be modulated, and use the
vibrato rate to adjust the frequency of modulation.

52

Seminar 5

n SCALE TUNING

The SCALE TUNING parameters listed in table 3-7 of the specification allow you to
create non-equal tempered tunings such as just intonation (figure 5-6).

(Figure 5-6)

If you wish to accurately simulate various types of early music or ethnic music which
should not be played in equal temperament, you can use these parameters to adjust
the tuning of each note of the scale. However, you need to be knowledgeable about
these types of music before making these adjustments. These parameters are not some-
thing that you can change blindly. To be honest, I myself am not very knowledgeable
in these areas, and don’t have much experience with these parameters. However DTM
experts who are classical music aficionados do seem to be taking advantage of this
functionality.

There are many other parameters of which effective use can be made in subtle ways,
such as effect parameters number 11 and following. It is also fairly common to see
screen bitmaps used to display characters and images.

53

Seminar 5

4. VL-XG goes beyond DTM!?
VL series synthesizers use Yamaha’s own VA (Virtual Acoustic) tone generation tech-
nology to produce incredible sounds that range from ultra-realistic simulations of ex-
isting musical instruments to ultra-impossible sound effects. VL sounds can now be
fused with XG systems by using a VL70-m or a VL tone generator plug-in board for
the MU100, and parameters for using these in conjunction with a conventional XG
tone generator are defined in table 3-7-4 of the specification (figure 5-7).

(Figure 5-7)

The parameters listed here are unique to the VL-XG configuration, but otherwise can
be thought of in the same way as the conventional XG tone generator parameters. You
can see lots of unfamiliar parameter names, but these are used to produce the per-
formance expressions characteristic of the VL. There’s no requirement that you use
all of these, so relax! (photo of the VL70-m)

The sound of the VL70-m is, in a word, distinctive. In contrast, DTM tone generators
would not meet their intended purpose if they produced nothing but highly distinctive
sounds: their job is to produce an ensemble in which the sound of all the parts blends
well together. This means that while the sounds of XG tone generators such as the
MU series are designed with this in mind, VL series tone generators need to be able to
produce distinctive sounds unlike any other tone generator. This distinctive personal-
ity can either be wonderfully realistic, or totally unlike any sound that has ever been
heard before. This means that when the VL is used together with XG, the important

54

Seminar 5

thing is deciding which part will be played by the VL tone generator. In general, it is
best to use the VL to play the part of greatest musical importance for that song, such
as the melody. However the VL is not yet the answer to all needs. Although it depends
on the musical genre or type of instrumental sound, there will be cases in which using
a conventional XG tone generator sound (rather than the VL) will produce a much
more natural result. In some cases, using the VL for a backing part is best. This is
something that you will have to decide for yourself, relying on your own musical judg-
ment.

55

Seminar 5

Closing
This has been the fifth and final web page in our rapid coverage of XG. To those of you
who have stayed with me all the way to this point — thank you! Perhaps we’ll meet
again. Goodbye for now!

56

1998. 2 CR