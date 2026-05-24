---
author: ''
category: ''
converted_by: MarkItDown Desktop UI
date: '2026-05-24T19:54:24.947780'
source_file: F:\Downloads\spec123a.pdf
tags:
- imported
- manual
title: spec123a
---

®(cid:13)
Specifications
version 1.23A
September 1996
©1995,1996,Yamaha Corporation of America,Office of Strategic Business Development,
P.O. Box 6600,Buena Park,CA 90622

Welcome to Yamaha’s Interactive XG Specifications!
The purpose of this Portable Document Format (.pdf) file is to assist you in your work with XG-compatible instruments such as the
Yamaha MU80,MU50,and DB50XG. This file contains the latest version of the “XG Specifications.”
Throughout these three documents,you will encounter many keywords highlighted in red like this. Click on the keyword to jump
to a page that contains a definition of the word or supplemental information. You can then easily return to the text you were reading
by clicking on the text in blue that says “Click HEREto return to the text you were reading...”Alternatively,you can type
Command-minus,select “Go Back”from the View menu,or click on the Rewind button at the top of the Acrobat screen:
Many words throughout this file are underlined and are in blue,like this(the entire table of contents which follows is prepared this
way). Clicking on these words will immediately bring you to the relevant page. Once there,you can easily return to the text you were
reading by typing Command-minus,by selecting “Go Back”from the View menu,or by clicking on the Rewind button at the top of
the Acrobat screen.
We’ve also created a number of bookmarks to aid you in navigating your way around this file. These can be accessed by typing
Command-7,by selecting “Bookmarks and Page”from the View menu,or by clicking on the Bookmarks button at the top of the
Acrobat screen:
Note that having bookmarks open cuts down on the available screen space,which may require additional scrolling. In order to
provide optimum viewing,we recommend that you leave Bookmarks closed unless needed.

The Adobe Acrobat™Reader also provides a Select Text tool so that you can copy text to the Clipboard using the Copy command.
The tool looks like this:
You can also use the “Select Graphics”option in the Tools menu to select graphics and copy them to the Clipboard.
In addition,a Find tool allows you to search for part of a word,a complete word,or multiple words in the file:
For more information on the use of Adobe Acrobat™Reader,see the “Help-Reader.pdf”(Mac) or “help_r.pdf (Windows) file.

Table of Contents
(page 1 of 6)
Welcome to Yamaha’s Interactive XG Specifications!
Revision History
Chapter 1: Format Overview
Development Background
Basic Concepts
Additions to the GMStandard
MIDImessages not available under GMstandard
Chapter 2: MIDISpecifications
Key On/Key Off
Program Change
Pitchbend

Table of Contents
(page 2 of 6)
Control Change
Bank Select MSB/LSB
Modulation
Portamento Time
Data Entry MSB/LSB
Master Volume
Panpot
Expression
Sustain
Portamento
Sostenuto
Soft Pedal
Harmonic Content
Release Time
Attack Time
Brightness
Portamento Control
Effects Send Level 1 (reverb)
Effects Send Level 3 (chorus)
Effects Send Level 4 (variation)
NRPN
RPN

Table of Contents
(page 3 of 6)
Channel Mode Messages
All Sound Off
Reset All Controllers
All Notes Off
OMNIOff
OMNIOn
MONO
POLY
Channel Aftertouch
Polyphonic Aftertouch
Exclusive Messages
XGSystem On
GMSystem On
MIDIMaster Volume
MIDIMaster Tuning
Parameter Change
Bulk Dump
Parameter Request
Dump Request

Table of Contents
(page 4 of 6)
XGEffect Map
Reverb Type
Chorus Type
Variation Type
Distortion (Insertion Effect 1)Type
XGEffect Parameter List
Basic Effect Type
Chorus 1, 2, 3 / Celeste 1, 2, 3
Flanger 1, 2
Symphonic
Rotary Speaker
Tremolo
Auto Pan
Phaser 1 (Single phase)
Distortion / Overdrive
Guitar Amp Simulator
Mono EQ(3 band)
Stereo EQ(2 band)
Auto Wah
Hall 1, 2 / Room 1, 2, 3 / Stage 1, 2 / Plate
Delay L,C,R
Delay L,R
Echo

Table of Contents
(page 5 of 6)
Cross Delay
Early Ref 1, 2
Gate Reverb / Reverse Gate
Option Effect Type
Pitch Change
Aural Exciter
Touch Wah / Wah +Dist.
Compressor
Noise Gate
White Room / Tunnel / Canyon / Basement
Karaoke 1, 2, 3
Voice Cancel
Data Value Assignment Tables
Table 1: LFOFrequency
Table 2: Modulation Delay Offset
Table 3: EQFrequency
Table 4: Reverb Time
Table 5: Delay Time (200 ms)
Table 6: Room Size
Table 7: Delay Time (400 ms)
Table 8: Compressor Attack Time
Table 9: Compressor Release Time
Table 10: Compressor Ratio
Table 11: Reverb Width:Depth:Height

Table of Contents
(page 6 of 6)
XGEffect Default Data
XGReset
Reverb Block
Chorus Block
Variation Block
Distortion Block
XGMIDIData Format
Table 3 1: XG Parameter Change Table (SYSTEM)
Table 3-2: XG Parameter Change Table (System Information)
Table 3-3: XG Parameter Change Table (EFFECT 1)
Table 3-4: XG Parameter Change Table (MULTI EQ)
Table 3-5: XG Parameter Change Table (EFFECT 2)
Table 3-6: XG Parameter Change Table (DISPLAY DATA)
Table 3-7: XG Parameter Change Table (MULTI PART)
Table 3-8: XG Parameter Change Table (A/D PART)
Table 3-9: XG Parameter Change Table (DRUM SETUP)
XG Voice List (MU80/MU50)
XGDrum Map (MU80/MU50)
XGDrum Default Data
XGBank Definition

XGSpecifications Revision History (page 1 of 2)
version 1.04 - released November 1994
version 1.07 - released January 1995
version 1.08 - released March 1995
version 1.09A - .pdf file version released July 1995:
• Contains all data from (internally distributed)version 1.09 plus some data from pre-release version 1.10.
version 1.09B - .pdf file version released September 1995:
• All green underlined keywords changed to blue
• Chapter 0:“RPN”deleted from “Control Change”section of “New MIDIMessages not available under GMstandard”
• Chapter 1:Keywords “Rcv System Exclusive”and “setting ‘Exclusive’to off”changed to normal words (black)
• XGMIDIData Format:“[L2-OP]”changed to “[50-80]”; “[L3-80]”changed to “[80]”; “<Optional Table Notation>”
descriptions changed accordingly (references to XG“Levels”deleted)
• XGVoice List:section redone to include MU50 voices and to indicate common MU80/MU50 XGvoices,as opposed to
those voices provided in the MU80 alone
• XGDrum Map:“Room Tom 3 - 6”changed to “Rock Tom 3 - 6”in “Rock Kit”

XGSpecifications Revision History (page 2 of 2)
version 1.23 - .pdf file version released November 1995:
• Chapters 0 and 1 renumbered to Chapters 1 and 2
• New tables added:“XGEffect Default Data”and “XGDrum Default Data”
• Table 3-1 deleted,Tables 3-2 - 3-11 renumbered
• XGMIDIData Format:new “Ext.”field added; “[80]”changed to “[Ext.]”
• Tables 4-n renumbered
• Typos corrected,new material added
version 1.23A - .pdf file version released September 1996:
• Red “post-it”notes for keywords removed and replaced by definition pages.
• Minor typos corrected in XGEffect Parameter List,XGData Value Data Assignment Tables,XGMIDIData Format,
XGDrum Map,and XGDrum Default Data

Chapter 1: Format Overview
Chapter 1: Format Overview
Yamaha introduces a new tone-generator control format designed to meet the requirements of the coming multimedia envi-
ronment. The new XG format — an extension of the existing GM standard — provides broader capabilities suited to the
demands of an increasingly sophisticated and diversified computerized environment. The new format enables a significantly
higher level of musical expressiveness while at the same time ensuring the continued compatibility of existing sound data.
Yamaha shall use the XG format as the basis for forthcoming electronic instruments,music software,and tone-generating
LSI circuitry,while working to maintain compatibility and scalability among Yamaha models.
Development Background
Tone generatorsare utilized in a wide range of devices,from musical instruments to communications devices and computer
games. The first international MIDI standard arose from the need to enable consistent external control of tone generators on
all device types,regardless of manufacturer or model. Because tone generator voice arrangements tended to vary consider-
ably among manufacturers and models,however,different MIDI devices often produced different types of sound in
response to identical MIDI instructions.
In 1991 the MIDI standard committee enacted additional specifications,referred to as the GM (General MIDI) standard,for
the purpose of standardizing voice arrangements and improving MIDI uniformity. The GM standard significantly enhanced
acoustics compatibility among complying devices,leading in turn to an expanding base of GM software applications. But
the GM standard also has its limitations. It provides support for only 128 voices,whereas many users now perceive the need
for a greater number of voices suited to a wider range of musical genres. Users have also indicated a desire for greater
control over voice modifications and effects so as to enable a higher level of expressiveness.

Chapter 1: Format Overview
The advent of the computer-based multimedia age has added yet a different perspective,bringing increased attention to both
image and sound technologies. Developments in multimedia-related sound and music processing parallel recent advances in
the area of image compression,and are pointing the way to the future of multimedia.
At present there are two fundamentally different approaches to the handling of sound and control data. One method is to
digitally store sound data at the software side together with the control data,then send all of the data together to generate
the playback. The second method is to have the software supply just control data to a tone generator on a computer or other
such device. The tone generator processes the incoming data and generates the sound locally.
The first method offers highly realistic sound,but requires immense quantities of data and locks in a specific set of
performance characteristics and voices. The second method requires far less data while allowing for entirely free variations
in voices,tempos,and virtually all other performance characteristics. The second method is therefore ideal for interactive
multimedia applications such as karaoke and repetitive computer-game sounds.
MIDI-based applications are typical of this second type of approach. As multimedia technology advances,we face a
pressing need to expand this approach to accomodate a larger number of voices and greater degree of expressive control.
This is why Yamaha is pleased to propose the new XG format — the tone generator format for the 21st century.

Chapter 1: Format Overview
Basic Concepts
The XG format maintains the universality and compatibility of the MIDI and GM standards while significantly increasing
the range of expressiveness. It is designed to ensure data continuity,and to provide equipment manufacturers with
considerable flexibility in designing machines that satisfy its requirements.
Specifically,the XG format does the following.
• Enables production of extremely expressive sound data
• Significantly expands available voice types and variations
• Supports future compatibility of sound data among musical instruments,computers,and other devices
• Ensures that data will remain fully usable well into the future
• Supports standardized handling of new types of effects-inclusive data (such as karaoke data)
The XG format is founded on the following three principles:
• Compatibility
• Scalability
• Expandability

Chapter 1: Format Overview
1 Compatibility
Any XG machine,regardless of model or manufacturer,will provide faithful reproduction of any XG sound data.
Because the XG format maintains downward compatibility with the GM standard,XG machines will also provide
correct reproduction of GM sound data.
2 Scalability
Although the XG format provides detailed and extensive specification of voice sets and voice changes,it does not
require XG machines to support the full range of functions. Designers are free to develop a wide range of products to
meet various cost and performance objectives. Each XG machine will replay XG data in accordance with the machine’s
level of sophistication. If a model does not support a variation voice,it will automatically play the corresponding basic
voice instead. If a model includes a graphic equalizer,it can take full advantage of graphic equalizer functions so as to
control frequency characteristics to best suit the musical genre being played — from lively rock to soothing classical.
3 Expandability
The XG format remains open to enhancements and extensions that will allow it to remain in step with future product
developments.

Chapter 1: Format Overview
Additions to the GM standard
XG offers the following extensions to the GM standard.
• Voices: The GM standard supports 128 voices. The XG format provides for Bank Select messagesthat significantly
expand the number of voices supported.
1) Voice Extension by Bank-Select LSB
Variations of basic GM voices are stored in banks. To select a variation,specify the desired bank by sending the
appropriate Bank-Select LSB value. Each bank is associated with a specific type of variation,so that voices are easy
to locate.
2) Bank-Select MSBadds an SFX bank
The Bank-Select LSB method is not useful for extension of distinctive SFX voices that have no meaningful variation.
For this reason the XG format supports a full SFX bank of extension effects,which you can select by sending a Bank-
Select MSB value of 40H. Bank-Select MSB 7EH or 7FH,in contrast,can be used to set any channel to rhythm-part
play.

Chapter 1: Format Overview
• Voice Modification: The XG format allows creation of extremely expressive control data that can darken or lighten
voices,delay or accelerate sound start-up,or implement many other types of control. Most controls are issued by
Control Change commands,although System Exclusive messages are also used.
• Effects: The XG format offers high-level effects support,enabling control of effects types,circuit operation,and
internal parameter settings for both basic and elaborate effects. Devices equipped with graphic equalizers will be able to
modify ambience and sound to suit the specific type of music being played.
• External Input: Whereas existing tone generators create sound in response to internal data only,the XG format
provides for real-time participation by adding support for input of external audio signals. External signals can be
processed by the mixer in the same way as internal tone-generator data. A model that supports this function would allow
you,for example,to create karaoke data that can automatically set the microphone echo used for playback.

Chapter 1: Format Overview
New MIDI messages not available under GM standard (page 1 of 2)
1. Control Change
Bank Select
Portamento Time
Portamento
Sostenuto
Soft Pedal
Harmonic Content
Release Time
Attack Time
Brightness
Portamento Control
Effects Send Level 1 (Reverb)
Effects Send Level 2 (Chorus)
Effects Send Level 3 (Variation)
NRPN Part Parameter Control
All Sound Off
2. Channel Mode Messages
3. Polyphonic Aftertouch

Chapter 1: Format Overview
New MIDI messages not available under GM standard (page 2 of 2)
4. System Exclusive Messages
Parameter Change
System Parameters
Effects Parameters
Three categories of system effects are supported. One of these categories can be switched with
insertion effects.
Graphic EQ and multiple insertion effects are supported as options.
Part Parameters
Filter cutoff and AEG value can be controlled by offset.
Display Parameters
External-Input Control Parameters
Drum Setup Parameters
Bulk Dump
Parameter Request
Dump Request

Chapter 2: MIDI Specifications
Chapter 2: MIDI Specifications
1.Key On / Key Off
Status: 9nH/8nH
If multipart parameter “Rcv NOTE MESSAGE”is OFF,the part ignores these messages.
2.Program Change
Status: CnH
Default: 00H
If multipart parameter “Rcv PROGRAM CHANGE”is OFF,the part ignores this message.
Melody Voice
As indicated in XG Voice List,Voices can be added through use of Bank Select LSB. (Refer to description of
Bank Select,below.)
Rhythm Voices
As indicated in XG Drum Map,Program Change message can be used to change the voice (drum kit). If the tone
generator does not have a drum kit corresponding to the specified program number,it will ignore the message and
continue to use the current drum kit.
Bank Select MSB/LSBshould always be sent prior to transmitting a Program Change message,even when there is no need
to change Banks.

Chapter 2: MIDI Specifications
3.Pitchbend
Status: EnH
Default: 40H 00H
If multipart parameter “Rcv PITCH BEND”is OFF,the part ignores this message.
4.Control Change
Status: BnH
If multipart parameter “Rcv CONTROL CHANGE”is OFF,the part will continue to accept Channel Mode messagesbut
will ignore all other Control Change messages.
Bank Select MSB/LSB: 00H/20H
Cntrl# Parameter Data Range
0 Bank Select MSB 0:Normal 64:SFX voice 126:SFX kit 127:Rhythm kit
32 Bank Select LSB 0 to 127
Default:00 00H
If multipart parameter “Rcv BANK SELECT”is OFF,the part ignores this message.

Chapter 2: MIDI Specifications
The new bank selection does not become effective until receipt of the next Program Change message.
The Bank-Select MSB selects melody voice,SFX voice,or rhythm kit. The MSB allows any channel to be designated for
rhythm play. Bank-Select MSB values are as follows:
00H: Melody voice
01H to 3FH: not used
40H: SFX voice
41H to 7DH: not used
7EH: SFX kit (SFX voices arranged over keyboard)
7FH: Rhythm kit (Rhythm voices arranged over keyboard)
The Bank-Select LSB selects from the extended melody-voice set. (SFX kit and rhythm kit voices do not currently support
Bank-Select LSB extension sets.) Each bank is set for a specific type of variation,simplifying retrieval of the desired voice.
Names of extension voices,like basic voices,are defined (see Table 1). Other banks and voices may be added in the future.

Chapter 2: MIDI Specifications
Some models do not support all of the LSB-selectable extension voices listed in Table 1. If support is included for one or
more voices in an extension bank,however,all the other program change numbers in that bank are filled with the
corresponding Bank #0 voice (basic voice).
Note 1:Under default selection,Channel 10 plays rhythm voices,while other channels take Bank #0 melody voices.
(Same as GM-system - Level 1)
Note 2:Receipt of Bank-Select MSB/LSB does not immediately change the voice. The channel stores the received Bank-
Select MSB/LSB setting,but does not apply it until receipt of the next Program Change message.
Note 3:If the new Bank-Select MSB is 00H (melody voice) but the tone generator does not support the melody voice
corresponding to the last received Bank-Select LSB,the channel reverts to the Bank-Select LSB corresponding to
its most recently played melody voice.
Note 4:If the new Bank Select MSB is 7FH (GM rhythm voice),the tone generator unconditionally uses LSB 00H.
If the tone generator does not support a drum kit corresponding to the channel’s most recently received Program
Change,the channel will revert to the Program Change corresponding to its most recently played rhythm kit.
Note 5:If a Bank Select MSB value of 01H ~ 7EH (SFX voice,or unused MSB) is received and the tone generator does
not have a voice corresponding to the last received LSB and Program Change,the tone generator will produce no
sound for that channel regardless of subsequent Key On messages.

Chapter 2: MIDI Specifications
Users employing the XG format to generate music data should note the following general points:
• The discussion and examples provided above are intended to clarify operating specifications relevant to tone-
generator manufacture. During general operation,the MSB,LSB and Program Change should always be sent
together,keeping intervals of at least 1/480 between them.
• For melody-voice play:If the channel cannot play from the bank selected by the last LSB specification,it will revert
to the most recent playable LSB specifications.
• For rhythm-voice play:If the channel cannot play the kit selected by the last received Program Number,it will revert
to the most recent playable Program Number.

Chapter 2: MIDI Specifications
Modulation: 01H
Cntrl# Parameter Data Range
1 Modulation 0 to 127
Default:00H
If multipart parameter “Rcv MODULATION”is OFF,the part ignores this message.
Upon initialization this message applies to vibrato depth,but content can be changed by use of System Exclusive message.
Portamento Time: 05H
Cntrl# Parameter Data Range
5 Portamento Time 0 to 127
Default:00H
Sets the pitch-change speed used when Portamento is ON. Has no affect on portamento control. A value of 0 produces the
shortest portamento time; value 127 selects the longest time.

Chapter 2: MIDI Specifications
Data Entry MSB/LSB: 06H/26H
Cntrl# Parameter Data Range
6 Data Entry MSB 0 to 127
38 Data Entry LSB 0 to 127
Master Volume: 07H
Cntrl# Parameter Data Range
7 Volume 0 to 127
Default:64H
If multipart parameter “Rcv VOLUME”is OFF,the part ignores this message.
Use this message to balance the volume among the different parts.

Chapter 2: MIDI Specifications
Panpot: 0AH
Cntrl# Parameter Data Range
10 Panpot 0 to 127
Default:40H
If multipart parameter “Rcv PAN”is OFF,the part ignores this message.
Produces relative variations in pan among different instruments of the rhythm part.
Expression: 0BH
Cntrl# Parameter Data Range
11 Expression 0 to 127
Default:7FH
If multipart parameter “Rcv EXPRESSION”is OFF,the part ignores this message.
This message is used to control intonation expression (diminuendo and crescendo) during play.

Chapter 2: MIDI Specifications
Sustain: 40H
Cntrl# Parameter Data Range
64 Sustain 0 to 127 (0-63:Off 64-127:On)
Default:00H
This message should affect the release portion of voices after Note Off (after damper pedal).
If multipart parameter “Rcv SUSTAIN”is OFF,the part ignores this message.
Portamento: 41H
Cntrl# Parameter Data Range
65 Portamento 0 to 127 (0-63:Off 64-127:On)
Default:00H
If multipart parameter “Rcv PORTAMENTO”is OFF,the part ignores this message.

Chapter 2: MIDI Specifications
Sostenuto: 42H
Cntrl# Parameter Data Range
66 Sostenuto 0 to 127 (0-63:Off 64-127:On)
Default:00H
If multipart parameter “Rcv SOSTENUTO”is OFF,the part ignores this message.
Soft Pedal: 43H
Cntrl# Parameter Data Range
67 Soft Pedal 0 to 127 (0-63:Off 64-127:On)
Default:00H
If multipart parameter “Rcv SOFT PEDAL”is OFF,the part ignores this message.

Chapter 2: MIDI Specifications
Harmonic Content: 47H
Cntrl# Parameter Data Range
71 Harmonic Content 0 to 127 (0:-64 64:+0 127:+63)
Default:40H
Applies adjustment to the resonance value set by the voice. This parameter specifies relative change,with value 64
producing zero adjustment. As values get higher,the sound becomes increasingly eccentric. Note that,for some voices,
the effective parameter range is narrower than the legal parameter range.
Release Time: 48H
Cntrl# Parameter Data Range
72 Release Time 0 to 127 (0:-64 64:+0 127:+63)
Default:40H
Applies adjustment to the envelope release timeset by the voice. This parameter specifies relative change,with value 64
producing zero adjustment. For some voices,the effective parameter range is narrower than the legal parameter range.

Chapter 2: MIDI Specifications
Attack Time: 49H
Cntrl# Parameter Data Range
73 Attack Time 0 to 127 (0:-64 64:+0 127:+63)
Default:40H
Applies adjustment to the envelope attack time set by the voice. This parameter specifies relative change,with value 64 pro-
ducing zero adjustment. For some voices,the effective parameter range is narrower than the legal parameter range.
Brightness: 4AH
Cntrl# Parameter Data Range
74 Brightness 0 to 127 (0:-64 64:+0 127:+63)
Default:40H
Applies adjustment to the filter cutoff frequencyset by the voice. This parameter specifies relative change,with value 64
producing zero adjustment. For some voices,the effective parameter range is narrower than the legal parameter range.

Chapter 2: MIDI Specifications
Portamento Control: 54H
Cntrl# Parameter Data Range
84 Portamento Control 0 to 127
Portamento time is always 0.
Effect Send Level 1 (reverb): 5BH
Cntrl# Parameter Data Range
91 Effect 1 Depth 0 to 127
Default:28H
Adjusts the reverb send level.

Chapter 2: MIDI Specifications
Effect Send Level 3 (chorus): 5DH
Cntrl# Parameter Data Range
93 Effect 3 Depth 0 to 127
Default:00H
Adjusts the chorus send level.
Effect Send Level 4 (variation): 5EH
Cntrl# Parameter Data Range
94 Effect 4 Depth 0 to 127
Default:00H
Adjusts the variation effect send level. Effective only if “Variation Connection = System”.

Chapter 2: MIDI Specifications
NRPN (Non-registered parameter number) LSB/MSB: 62H/63H
Cntrl# Parameter Data Range
98 NRPN LSB 0 to 127
99 NRPN MSB 0 to 127
If multipart parameter “Rcv NRPN”is OFF,the part ignores this message.
First send the NPRN MSB and LSB to select the control parameter,then set the value by Data Entry.
Once you have selected an NRPN on a given channel,the channel will apply subsequent Data Entry to the selected
parameter. After making the necessary settings,you should set NRPN to Null to reduce the risk of operational errors.

Chapter 2: MIDI Specifications
The following NRPN values are supported.
| NRPN    | Data Entry |                              |                                |
| ------- | ---------- | ---------------------------- | ------------------------------ |
| MSB LSB | MSB        | Parameter                    | Data Range                     |
| 01H 08H | mmH        | Vibrato Rate                 | mm:00H-40H-7FH (-64 - 0 - +63) |
| 01H 09H | mmH        | Vibrato Depth                | mm:00H-40H-7FH (-64 - 0 - +63) |
| 01H 0AH | mmH        | Vibrato Delay                | mm:00H-40H-7FH (-64 - 0 - +63) |
| 01H 20H | mmH        | Filter Cutoff Frequency      | mm:00H-40H-7FH (-64 - 0 - +63) |
| 01H 21H | mmH        | Filter Resonance             | mm:00H-40H-7FH (-64 - 0 - +63) |
| 01H 63H | mmH        | EG Attack Rate               | mm:00H-40H-7FH (-64 - 0 - +63) |
| 01H 64H | mmH        | EG Decay Rate                | mm:00H-40H-7FH (-64 - 0 - +63) |
| 01H 66H | mmH        | EG Release Rate              | mm:00H-40H-7FH (-64 - 0 - +63) |
| 14H rrH | mmH        | Drum Filter Cutoff Frequency | mm:00H-40H-7FH (-64 - 0 - +63) |
rr:drum instrument note number
| 15H rrH | mmH | Drum Filter Resonance | mm:00H-40H-7FH (-64 - 0 - +63) |
| ------- | --- | --------------------- | ------------------------------ |
rr:drum instrument note number
| 16H rrH | mmH | Drum EG Attack Rate | mm:00H-40H-7FH (-64 - 0 - +63) |
| ------- | --- | ------------------- | ------------------------------ |
rr:drum instrument note number
| 17H rrH | mmH | Drum EG Decay Rate | mm:00H-40H-7FH (-64 - 0 - +63) |
| ------- | --- | ------------------ | ------------------------------ |
rr:drum instrument note number
(continued on next page)

Chapter 2: MIDI Specifications
| NRPN    | Data-entry |                   |                                |
| ------- | ---------- | ----------------- | ------------------------------ |
| MSB LSB | MSB        | Parameter         | Data Range                     |
| 18H rrH | mmH        | Drum Pitch Coarse | mm:00H-40H-7FH (-64 - 0 - +63) |
rr:drum instrument note number
| 19H rrH | mmH | Drum Pitch Fine | mm:00H-40H-7FH (-64 - 0 - +63) |
| ------- | --- | --------------- | ------------------------------ |
rr:drum instrument note number
| 1AH rrH | mmH | Drum Level | mm:00H-7FH (0 - Max) |
| ------- | --- | ---------- | -------------------- |
rr:drum instrument note number
| 1CH rrH | mmH | Drum Pan | mm:00H-40H-7FH (Random,L-Center-R) |
| ------- | --- | -------- | ---------------------------------- |
rr:drum instrument note number
| 1DH rrH | mmH | Drum Reverb Send Level | mm:00H-7FH (0 - Max) |
| ------- | --- | ---------------------- | -------------------- |
rr:drum instrument note number
| 1EH rrH | mmH | Drum Chorus Send Level | mm:00H-7FH (0 - Max) |
| ------- | --- | ---------------------- | -------------------- |
rr:drum instrument note number
| 1FH rrH | mmH | Drum Variation Send Level | mm:00H-7FH (0 - Max) |
| ------- | --- | ------------------------- | -------------------- |
rr:drum instrument note number
If multipart parameter “Rcv NRPN”is OFF,the part ignores this message.
Note that MSB values 14H through 1FH (drum parameters) are effective only for rhythm parts.

Chapter 2: MIDI Specifications
| RPN (Registered parameter number) LSB/MSB: | 64H/65H      |     |
| ------------------------------------------ | ------------ | --- |
| Cntrl# Parameter                           | Data Range   |     |
| 100 RPN LSB                                | 0 to 127     |     |
| 101 RPN MSB                                | 0 to 127     |     |
Default:7F 7FH
If multipart parameter “Rcv RPN”is OFF,the part ignores this message.
The following parameters are supported:
| RPN     | Data Entry                |                                |
| ------- | ------------------------- | ------------------------------ |
| MSB LSB | MSB Parameter             | Data Range                     |
| 00H 00H | mmH Pitchbend Sensitivity | mm:00H-40H-7FH (-64 - 0 - +63) |
Default:02H
(Note:LSB value is ignored; minimum operational range is 00H00H-0CH00H (±octave)
| 00H 01H | mmH Fine Tune | mm:00H-40H-7FH (-64 - 0 - +63) |
| ------- | ------------- | ------------------------------ |
Default:40 00H
| 00H 02H | mmH Coarse Tune | mm:00H-40H-7FH (-64 - 0 - +63) |
| ------- | --------------- | ------------------------------ |
Default:40 00H
| 7FH 7FH | Null | —   |
| ------- | ---- | --- |

Chapter 2: MIDI Specifications
5.Channel Mode Messages
All Sound Off: 78H
Cntrl# Parameter Data Range
120 — 0
Switches off sound from all parts. Does not reset the settings established by Channel Messages.
Reset All Controllers: 79H
Cntrl# Parameter Data Range
121 — 0
Resets the following values to their default:Pitchbend,Modulation,Expression,Sustain,Portamento,Sostenuto,
Registered Parameter Number.
Resets portamento control setting. Specifically,clears condition in which source (Portamento Control Message) has been
received but target (new Key On) has not.

Chapter 2: MIDI Specifications
All Notes Off: 7BH
Cntrl# Parameter Data Range
123 — 0
Switches off all currently “on”notes in all parts. Any notes being held by sustain or sostenuto continue to sound until
sustain/sostenuto goes off.
OMNI Off: 7CH
Cntrl# Parameter Data Range
124 — 0
Same processing as for All Notes Off.
OMNI On: 7DH
Cntrl# Parameter Data Range
125 — 0
Same processing as for All Notes Off. (“OMNI ON”operation not supported.)

Chapter 2: MIDI Specifications
MONO: 7EH
Cntrl# Parameter Data Range
126 Mono 0 to 16
Generates “All Sound Off”operation. If the value of the third byte (mono number) is 0 ~ 16,the channel changes to
Mode 4(m=1).
POLY: 7FH
Cntrl# Parameter Data Range
127 — 0
Generates “All Sound Off”operation,and sets the channel to Mode 3.

Chapter 2: MIDI Specifications
6.Channel Aftertouch
Status: DnH
The message is not effective under initial settings.
If multipart parameter “Rcv CHANNEL AFTERTOUCH”is Off,the part ignores this message.
7.Polyphonic Aftertouch
Status: AnH
The message is not effective under initial settings.
If multipart parameter “Rcv POLYPHONIC AFTERTOUCH”is Off,the part ignores this message.
It is not necessary for the effect to apply to all note numbers (0 ~ 127).

Chapter 2: MIDI Specifications
8.Exclusive Messages
XG System On
F0H,43H,1nH,4CH,00H,00H,7EH,00H,F7H
11110000 F0 Exclusive status
01000011 43 YAMAHA ID
0001nnnn 1n Device Number
01001100 4C Model ID
00000000 00 Address High
00000000 00 Address Mid
01111110 7E Address Low
00000000 00 Data
11110111 F7 End of Exclusive
This message switches SOUND MODULE MODE to XG and initializes the tone generator to the XG default settings.
The message requires approximately 50ms to execute,so sufficient time should be allowed before the next message is sent.

Chapter 2: MIDI Specifications
GM System On
F0H,7EH,7FH,09H,01H,F7H
11110000 F0 Exclusive status
01111110 7E Universal Non-realtime ID
01111111 7F Device ID
00001001 09 Sub ID1
00000001 01 Sub ID2
11110111 F7 End of Exclusive
Resets all data values to their defaults,with the exception of the MIDI Master Tuningvalue.

Chapter 2: MIDI Specifications
MIDI Master Volume
F0H,7FH,7FH,04H,01H,llH,mmH,F7H
11110000 F0 Exclusive status
01111111 7F Universal Realtime ID
01111111 7F Device ID
00000100 04 Sub ID1
00000001 01 Sub ID2
0lllllll ll Master Volume LSB
0mmmmmmm mm Master Volume MSB
11110111 F7 End of Exclusive
Changes volume of all channels. (“Universal System Exclusive”)

Chapter 2: MIDI Specifications
MIDI Master Tuning
F0H,43H,1nH,27H,30H,00H,00H,mmH,llH,ccH,F7H
11110000 F0 Exclusive status
01000011 43 YAMAHA ID
0001nnnn 1n Device Number
00100111 27 Model ID
00110000 30 Sub ID2
00000000 00
00000000 00
0mmmmmmm mm Master Tune MSB
0lllllll ll Master Tune LSB
0ccccccc cc Don’t care
11110111 F7 End of Exclusive
Changes tuning of all channels.

Chapter 2: MIDI Specifications
Parameter Change
11110000 F0 Exclusive status
01000011 43 YAMAHA ID
0001nnnn 1n Device Number
01001100 4C Model ID
0aaaaaaa aa Address High
0aaaaaaa aa Address Mid
0aaaaaaa aa Address Low
0ddddddd dd Data
| |
0ddddddd dd Data
11110111 F7 End of Exclusive
Includes 2 or 4 bytes of data,depending on parameter size.

Chapter 2: MIDI Specifications
The following eight types of parameter change are provided.
1) System Data parameter change
2) Multi Effect Data parameter change
3) Multi EQ Data parameter change
4) Multi Part Data parameter change
5) Drums Setup Data parameter change
6) System Information*
7) Display Data parameter change
8) AD Part Data parameter change
*6) System Information is sent in response to dump requests. Received parameter changes are ignored.
System Exclusive messages are not accepted if “Rcv System Exclusive”is OFF.

Chapter 2: MIDI Specifications
Bulk Dump
11110000 F0 Exclusive status
01000011 43 YAMAHA ID
0000nnnn 0n Device Number
01001100 4C Model ID
0bbbbbbb bb Byte Count MSB
0bbbbbbb bb Byte Count LSB
0aaaaaaa aa Address High
0aaaaaaa aa Address Mid
0aaaaaaa aa Address Low
0ddddddd dd Data
| |
0ddddddd dd Data
0ccccccc cc Checksum
11110111 F7 End of Exclusive
For information about “Address”and “Byte Count”fields,refer to Tables 3-n.
Here the "Byte Count" refers to "Total Size" of Data shown in Tables 3-n.
The "Address" in Bulk Dump / Dump Request refers to the address at the beginning of each block.
The "block" refers to a unit of data stream which is enclosed by "Total Size" in Tables 3-n.
Checksum value is set such that the sum of Address,Byte Count,and Checksum has value zero in its seven least significant
bits.

Chapter 2: MIDI Specifications
Parameter Request
11110000 F0 Exclusive status
01000011 43 YAMAHA ID
0011nnnn 3n Device Number
01001100 4C Model ID
0aaaaaaa aa Address High
0aaaaaaa aa Address Mid
0aaaaaaa aa Address Low
11110111 F7 End of Exclusive
Dump Request
11110000 F0 Exclusive status
01000011 43 YAMAHA ID
0010nnnn 2n Device Number
01001100 4C Model ID
0aaaaaaa aa Address High
0aaaaaaa aa Address Mid
0aaaaaaa aa Address Low
11110111 F7 End of Exclusive
Sending or receiving of dump request cannot be switched off except bysetting “Exclusive”to OFF.

XG Effect Map
REVERB TYPE
| TYPE MSB | TYPE LSB   |        |       |     |     |
| -------- | ---------- | ------ | ----- | --- | --- |
| DEC HEX  | 00         | 01     | 02    | ... | 08  |
| 000 0    | NO EFFECT  |        |       |     |     |
| 001 1    | HALL1      | HALL2  |       |     |     |
| 002 2    | ROOM1      | ROOM2  | ROOM3 |     |     |
| 003 3    | STAGE1     | STAGE2 |       |     |     |
| 004 4    | PLATE      |        |       |     |     |
| 005 5    | NO EFFECT  |        |       |     |     |
| : :      | :          |        |       |     |     |
| 015 F    | NO EFFECT  |        |       |     |     |
| 016 10   | WHITE ROOM |        |       |     |     |
| 017 11   | TUNNEL     |        |       |     |     |
| 018 12   | CANYON     |        |       |     |     |
| 019 13   | BASEMENT   |        |       |     |     |
| 020 14   | NO EFFECT  |        |       |     |     |
| : :      | :          |        |       |     |     |
| 127 7F   | NO EFFECT  |        |       |     |     |
ESSENTIALEFFECT(XGminimum)
OPTION EFFECT
NO EFFECT
same as BASIC EFFECT(LSB=0)

XG Effect Map
CHORUS TYPE
| TYPE MSB | TYPE LSB  |          |          |     |          |
| -------- | --------- | -------- | -------- | --- | -------- |
| DEC HEX  | 00        | 01       | 02       | ... | 08       |
| 000 0    | NO EFFECT |          |          |     |          |
| 001 1    | NO EFFECT |          |          |     |          |
| : :      | :         |          |          |     |          |
| 064 40   | NO EFFECT |          |          |     |          |
| 065 41   | CHORUS1   | CHORUS2  | CHORUS3  |     | CHORUS4  |
| 066 42   | CELESTE1  | CELESTE2 | CELESTE3 |     | CELESTE4 |
| 067 43   | FLANGER1  | FLANGER2 |          |     | FLANGER3 |
| 068 44   | SYMPHONIC |          |          |     |          |
| 069 45   | NO EFFECT |          |          |     |          |
| : :      | :         |          |          |     |          |
| 071 47   | NO EFFECT |          |          |     |          |
| 072 48   | PHASER    |          |          |     |          |
| 073 49   | NO EFFECT |          |          |     |          |
| : :      | :         |          |          |     |          |
| 127 7F   | NO EFFECT |          |          |     |          |
ESSENTIALEFFECT(XGminimum)
OPTION EFFECT
NO EFFECT
same as BASIC EFFECT(LSB=0)

XG Effect Map
VARIATION TYPE (0 ~ 63)
| TYPE MSB | TYPE LSB         |          |          |     |     |
| -------- | ---------------- | -------- | -------- | --- | --- |
| DEC HEX  | 00               | 01       | 02       | ... | 08  |
| 000 0    | NO EFFECT        |          |          |     |     |
| 001 1    | HALL1            | HALL2    |          |     |     |
| 002 2    | ROOM1            | ROOM2    | ROOM3    |     |     |
| 003 3    | STAGE1           | STAGE2   |          |     |     |
| 004 4    | PLATE            |          |          |     |     |
| 005 5    | DELAYL,C,R       |          |          |     |     |
| 006 6    | DELAYL,R         |          |          |     |     |
| 007 7    | ECHO             |          |          |     |     |
| 008 8    | CROSS DELAY      |          |          |     |     |
| 009 9    | ER1              | ER2      |          |     |     |
| 010 A    | GATE REVERB      |          |          |     |     |
| 011 B    | REVERSE GATE     |          |          |     |     |
| 012 C    | NO EFFECTor THRU |          |          |     |     |
| : :      | :                |          |          |     |     |
| 019 13   | NO EFFECTor THRU |          |          |     |     |
| 020 14   | KARAOKE1         | KARAOKE2 | KARAOKE3 |     |     |
| 021 15   | NO EFFECTor THRU |          |          |     |     |
| : :      | :                |          |          |     |     |
| 63 3F    | NO EFFECTor THRU |          |          |     |     |
ESSENTIALEFFECT(XGminimum)
OPTION EFFECT
NO EFFECT(SYSTEM), THRU (INSERTION)
same as BASIC EFFECT(LSB=0)

XG Effect Map
VARIATION TYPE (64 ~ 127)
| TYPE MSB | TYPE LSB       |                |          |     |          |
| -------- | -------------- | -------------- | -------- | --- | -------- |
| DEC HEX  | 00             | 01             | 02       | ... | 08       |
| 064 40   | THRU           |                |          |     |          |
| 065 41   | CHORUS1        | CHORUS2        | CHORUS3  |     | CHORUS4  |
| 066 42   | CELESTE1       | CELESTE2       | CELESTE3 |     | CELESTE4 |
| 067 43   | FLANGER1       | FLANGER2       |          |     | FLANGER3 |
| 068 44   | SYMPHONIC      |                |          |     |          |
| 069 45   | ROTARYSPEAKER  |                |          |     |          |
| 070 46   | TREMOLO        |                |          |     |          |
| 071 47   | AUTO PAN       |                |          |     |          |
| 072 48   | PHASER1        |                |          |     | PHASER2  |
| 073 49   | DISTORTION     |                |          |     |          |
| 074 4A   | OVER DRIVE     |                |          |     |          |
| 075 4B   | AMPSIMULATOR   |                |          |     |          |
| 076 4C   | 3-BAND EQ      |                |          |     |          |
| 077 4D   | 2-BAND EQ      |                |          |     |          |
| 078 4E   | AUTO WAH (LFO) |                |          |     |          |
| 079 4F   | THRU           |                |          |     |          |
| 080 50   | PITCH CHANGE   |                |          |     |          |
| 081 51   | AURALEXCITER   |                |          |     |          |
| 082 52   | TOUCH WAH      | TOUCH WAH+DIST |          |     |          |
| 083 53   | COMPRESSOR     |                |          |     |          |
| 084 54   | NOISE GATE     |                |          |     |          |
| 085 55   | VOICECANCEL    |                |          |     |          |
| 086 56   | THRU           |                |          |     |          |
: :
| 127 7F | THRU |     |     |     |     |
| ------ | ---- | --- | --- | --- | --- |

XG Effect Map
DISTORTION (INSERTION EFFECT1) TYPE
| TYPE MSB | TYPE LSB   |     |     |     |     |
| -------- | ---------- | --- | --- | --- | --- |
| DEC HEX  | 00         | 01  | 02  | ... | 08  |
| 000 0    | THRU       |     |     |     |     |
| : :      | :          |     |     |     |     |
| 063 3F   | THRU       |     |     |     |     |
| 064 40   | THRU       |     |     |     |     |
| 065 41   | THRU       |     |     |     |     |
| : :      | :          |     |     |     |     |
| 072 48   | THRU       |     |     |     |     |
| 073 49   | DISTORTION |     |     |     |     |
| 074 4A   | OVER DRIVE |     |     |     |     |
| 076 4C   | 3 BAND EQ  |     |     |     |     |
| 077 4D   | THRU       |     |     |     |     |
| : :      | :          |     |     |     |     |
| 127 7F   | THRU       |     |     |     |     |
THRU
same as BASICEFFECT(LSB=0)

XG Effect Parameter List
BASICEFFECTTYPE
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
CHORUS1,2,3
CELESTE1,2,3
| 1 LFO Frequency | 0.00  ~  39.7Hz | 0-127 table#1 | l   |     |
| --------------- | --------------- | ------------- | --- | --- |
s   0-63
| 2 LFO PM Depth   | 0 ~ 127   | 0-127 |     |     |
| ---------------- | --------- | ----- | --- | --- |
| 3 Feedback Level | -63 ~ +63 | 1-127 | l   |     |
l
| 4 Delay Offset | 0 ~ 127 | 0-127 table#2 |     |     |
| -------------- | ------- | ------------- | --- | --- |
5
l
| 6 EQ Low Frequency  | 32Hz ~ 2.0kHz     | 4-40 table#3  |     |     |
| ------------------- | ----------------- | ------------- | --- | --- |
| 7 EQ Low Gain       | -12 ~ +12dB       | 52-76         | l   |     |
| 8 EQ High Frequency | 500Hz ~ 16.0kHz   | 28-58 table#3 | l   |     |
| 9 EQ High Gain      | -12 ~ +12dB       | 52-76         | l   |     |
| 10 Dry/Wet          | D63>W~ D=W~ D<W63 | 1-127         | l   | l   |
| 11 EQ Mid Frequency | 100Hz ~ 10.0kHz   | 14-54 table#3 | l   |     |
l
| 12 EQ Mid Gain  | -12 ~ +12dB | 52-76  |     |     |
| --------------- | ----------- | ------ | --- | --- |
| 13 EQ Mid Width | 1.0 ~ 12.0  | 10-120 | l   |     |
l
| 14 LFO AM Depth | 0 ~ 127     | 0-127 |     |     |
| --------------- | ----------- | ----- | --- | --- |
| 15 Input Mode   | mono/stereo | 0-1   |     |     |
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
FLANGER1,FLANGER2
l
| 1 LFO Frequency | 0.00 ~ 39.7Hz | 0-127 table#1 |     |     |
| --------------- | ------------- | ------------- | --- | --- |
| 2 LFO Depth     | 0 ~ 127       | 0-127         |     |     |
l
| 3 Feedback Level | -63 ~ +63 | 1-127        |     |     |
| ---------------- | --------- | ------------ | --- | --- |
| 4 Delay Offset   | 0 ~ 63    | 0-63 table#2 | l   |     |
5
| 6 EQ Low Frequency | 32Hz ~ 2.0kHz | 4-40 table#3 | l   |     |
| ------------------ | ------------- | ------------ | --- | --- |
l
| 7 EQ Low Gain       | -12 ~ +12dB       | 52-76         |     |     |
| ------------------- | ----------------- | ------------- | --- | --- |
| 8 EQ High Frequency | 500Hz ~ 16.0kHz   | 28-58 table#3 | l   |     |
| 9 EQ High Gain      | -12 ~ +12dB       | 52-76         | l   |     |
| 10 Dry/Wet          | D63>W~ D=W~ D<W63 | 1-127         | l   | l   |
l
| 11 EQ Mid Frequency | 100Hz ~ 10.0kHz | 14-54 table#3 |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 12 EQ Mid Gain      | -12 ~ +12dB     | 52-76         | l   |     |
l
| 13 EQ Mid Width         | 1.0 ~ 12.0     | 10-120 |     |     |
| ----------------------- | -------------- | ------ | --- | --- |
| 14 LFO Phase Difference | -180 ~ +180deg | 4-124  | s   |     |
| 15 Input Mode           | mono/stereo    | 0-1    |     |     |
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
SYMPHONIC
l
| 1 LFO Frequency | 0.00 ~ 39.7Hz | 0-127 table#1 |     |     |
| --------------- | ------------- | ------------- | --- | --- |
| 2 LFO Depth     | 0 ~ 127       | 0-127         | l   |     |
l
| 3 Delay Offset | 0 ~ 127 | 0-127 table#2 |     |     |
| -------------- | ------- | ------------- | --- | --- |
4
5
| 6 EQ Low Frequency | 32Hz ~ 2.0kHz | 4-40 table#3 | l   |     |
| ------------------ | ------------- | ------------ | --- | --- |
l
| 7 EQ Low Gain       | -12 ~ +12dB       | 52-76         |     |     |
| ------------------- | ----------------- | ------------- | --- | --- |
| 8 EQ High Frequency | 500Hz ~ 16.0kHz   | 28-58 table#3 | l   |     |
| 9 EQ High Gain      | -12 ~ +12dB       | 52-76         | l   |     |
| 10 Dry/Wet          | D63>W~ D=W~ D<W63 | 1-127         | l   | l   |
l
| 11 EQ Mid Frequency | 100Hz ~ 10.0kHz | 14-54 table#3 |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 12 EQ Mid Gain      | -12 ~ +12dB     | 52-76         | l   |     |
l
| 13 EQ Mid Width | 1.0 ~ 12.0 | 10-120 |     |     |
| --------------- | ---------- | ------ | --- | --- |
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
ROTARYSPEAKER
|                 |               |               | l   | l   |
| --------------- | ------------- | ------------- | --- | --- |
| 1 LFO Frequency | 0.00 ~ 39.7Hz | 0-127 table#1 |     |     |
| 2 LFO Depth     | 0 ~ 127       | 0-127         | l   |     |
3
4
5
| 6 EQ Low Frequency | 32Hz ~ 2.0kHz | 4-40 table#3 | l   |     |
| ------------------ | ------------- | ------------ | --- | --- |
| 7 EQ Low Gain      | -12 ~ +12dB   | 52-76        | l   |     |
l
| 8 EQ High Frequency | 500Hz ~ 16.0kHz | 28-58 table#3 |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 9 EQ High Gain      | -12 ~ +12dB     | 52-76         | l   |     |
l
| 10 Dry/Wet  | D63>W~ D=W~ D<W63 | 1-127 |     |     |
| ----------- | ----------------- | ----- | --- | --- |
l
| 11 EQ Mid Frequency | 100Hz ~ 10.0kHz | 14-54 table#3 |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 12 EQ Mid Gain      | -12 ~ +12dB     | 52-76         | l   |     |
l
| 13 EQ Mid Width | 1.0 ~ 12.0 | 10-120 |     |     |
| --------------- | ---------- | ------ | --- | --- |
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
TREMOLO
|                 |               |               | l   | l   |
| --------------- | ------------- | ------------- | --- | --- |
| 1 LFO Frequency | 0.00 ~ 39.7Hz | 0-127 table#1 |     |     |
| 2 AM Depth      | 0 ~ 127       | 0-127         | l   |     |
l
| 3 PM Depth | 0 ~ 127 | 0-127 |     |     |
| ---------- | ------- | ----- | --- | --- |
4
5
| 6 EQ Low Frequency | 32Hz ~ 2.0kHz | 4-40 table#3 | l   |     |
| ------------------ | ------------- | ------------ | --- | --- |
l
| 7 EQ Low Gain       | -12 ~ +12dB     | 52-76         |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 8 EQ High Frequency | 500Hz ~ 16.0kHz | 28-58 table#3 | l   |     |
| 9 EQ High Gain      | -12 ~ +12dB     | 52-76         | l   |     |
10
l
| 11 EQ Mid Frequency | 100Hz ~ 10.0kHz | 14-54 table#3 |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 12 EQ Mid Gain      | -12 ~ +12dB     | 52-76         | l   |     |
l
| 13 EQ Mid Width         | 1.0 ~ 12.0     | 10-120 |     |     |
| ----------------------- | -------------- | ------ | --- | --- |
| 14 LFO Phase Difference | -180 ~ +180deg | 4-124  | s   |     |
| 15 Input Mode           | mono/stereo    | 0-1    |     |     |
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
AUTO PAN
|                 |               |               | l   | l   |
| --------------- | ------------- | ------------- | --- | --- |
| 1 LFO Frequency | 0.00 ~ 39.7Hz | 0-127 table#1 |     |     |
| 2 L/R Depth     | 0 ~ 127       | 0-127         | l   |     |
l
| 3 F/R Depth     | 0 ~ 127                         | 0-127 |     |     |
| --------------- | ------------------------------- | ----- | --- | --- |
| 4 PAN Direction | L<->R,L->R,L<-R,Lturn,Rturn,L/R | 0-5   | l   |     |
5
| 6 EQ Low Frequency | 32Hz ~ 2.0kHz | 4-40 table#3 | l   |     |
| ------------------ | ------------- | ------------ | --- | --- |
l
| 7 EQ Low Gain       | -12 ~ +12dB     | 52-76         |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 8 EQ High Frequency | 500Hz ~ 16.0kHz | 28-58 table#3 | l   |     |
l
| 9 EQ High Gain | -12 ~ +12dB | 52-76 |     |     |
| -------------- | ----------- | ----- | --- | --- |
10
l
| 11 EQ Mid Frequency | 100Hz ~ 10.0kHz | 14-54 table#3 |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 12 EQ Mid Gain      | -12 ~ +12dB     | 52-76         | l   |     |
l
| 13 EQ Mid Width | 1.0 ~ 12.0 | 10-120 |     |     |
| --------------- | ---------- | ------ | --- | --- |
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
PHASER 1 (Single Phase)
l
| 1 LFO Frequency | 0.00 ~ 39.7Hz | 0-127 table#1 |     |     |
| --------------- | ------------- | ------------- | --- | --- |
| 2 LFO Depth     | 0 ~ 127       | 0-127         | l   |     |
l
| 3 Phase Shift Offset | 0 ~ 127   | 0-127 |     |     |
| -------------------- | --------- | ----- | --- | --- |
| 4 Feedback Level     | -63 ~ +63 | 1-127 | l   |     |
5
| 6 EQ Low Frequency | 32Hz ~ 2.0kHz | 4-40 table#3 | l   |     |
| ------------------ | ------------- | ------------ | --- | --- |
l
| 7 EQ Low Gain       | -12 ~ +12dB     | 52-76         |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 8 EQ High Frequency | 500Hz ~ 16.0kHz | 28-58 table#3 | l   |     |
l
| 9 EQ High Gain | -12 ~ +12dB       | 52-76 |     |     |
| -------------- | ----------------- | ----- | --- | --- |
| 10 Dry/Wet     | D63>W~ D=W~ D<W63 | 1-127 | l   | l   |
s   4,6,8
| 11 Stage               | 1 ~  10         | 1-10  |     |     |
| ---------------------- | --------------- | ----- | --- | --- |
| 12 Diffusion           | Mono/Stereo     | 0-1   | l   |     |
| 13 LFOPhase Difference | -180 ~ +180 deg | 4-124 |     |     |
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
DISTORTION
OVERDRIVE
| 1 Drive | 0 ~ 127 | 0-127 | l   | l   |
| ------- | ------- | ----- | --- | --- |
l
| 2 EQ Low Frequency | 32Hz ~ 2.0kHz | 4-40 table#3 |     |     |
| ------------------ | ------------- | ------------ | --- | --- |
| 3 EQ Low Gain      | -12 ~ +12dB   | 52-76        | l   |     |
l
| 4 LPF Cutoff   | 1.0k ~ Thru | 34-60 table#3 |     |     |
| -------------- | ----------- | ------------- | --- | --- |
| 5 Output Level | 0 ~ 127     | 0-127         | l   |     |
6
| 7 EQ Mid Frequency   | 100Hz ~ 10.0kHz   | 14-54 table#3 | l   |     |
| -------------------- | ----------------- | ------------- | --- | --- |
| 8 EQ Mid Gain        | -12 ~ +12dB       | 52-76         | l   |     |
| 9 EQ Mid Width       | 1.0 ~ 12.0        | 10-120        | l   |     |
| 10 Dry/Wet           | D63>W~ D=W~ D<W63 | 1-127         | l   |     |
| 11 Edge (Clip Curve) | 0 ~ 127           | 0-127         |     |     |
12
13
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
GUITAR AMPSIMULATOR
|           |                      |       | l   | l   |
| --------- | -------------------- | ----- | --- | --- |
| 1 Drive   | 0 ~ 127              | 0-127 |     |     |
| 2 AMPType | Off,Stack,Combo,Tube | 0-3   | l   |     |
l
| 3 LPF Cutoff   | 1.0k ~ Thru | 34-60 table#3 |     |     |
| -------------- | ----------- | ------------- | --- | --- |
| 4 Output Level | 0 ~ 127     | 0-127         | l   |     |
5
6
7
8
9
l
| 10 Dry/Wet           | D63>W~ D=W~ D<W63 | 1-127 |     |     |
| -------------------- | ----------------- | ----- | --- | --- |
| 11 Edge (Clip Curve) | 0 ~ 127           | 0-127 |     |     |
12
13
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
MONO EQ (3BAND)
l
| 1 EQ Low Gain      | -12 ~ +12dB     | 52-76         |     |     |
| ------------------ | --------------- | ------------- | --- | --- |
| 2 EQ Mid Frequency | 100Hz ~ 10.0kHz | 14-54 table#3 | l   |     |
l
| 3 EQ Mid Gain  | -12 ~ +12dB | 52-76  |     |     |
| -------------- | ----------- | ------ | --- | --- |
| 4 EQ Mid Width | 1.0 ~ 12.0  | 10-120 | l   |     |
l
| 5 EQ High Gain     | -12 ~ +12dB   | 52-76        |     |     |
| ------------------ | ------------- | ------------ | --- | --- |
| 6 EQ Low Frequency | 32Hz ~ 2.0kHz | 4-40 table#3 | l   |     |
l
| 7 EQ High Frequency | 500Hz ~ 16.0kHz | 28-58 table#3 |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
8
9
10
11
12
13
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
STEREO EQ (2BAND)
l
| 1 EQ Low Frequency | 32Hz ~ 2.0kHz | 4-40 table#3 |     |     |
| ------------------ | ------------- | ------------ | --- | --- |
| 2 EQ Low Gain      | -12 ~ +12dB   | 52-76        | l   |     |
l
| 3 EQ High Frequency | 500Hz ~ 16.0kHz | 28-58 table#3 |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 4 EQ High Gain      | -12 ~ +12dB     | 52-76         | l   |     |
5
6
7
8
9
10
l
| 11 EQ Mid Frequency | 100Hz ~ 10.0kHz | 14-54 table#3 |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 12 EQ Mid Gain      | -12 ~ +12dB     | 52-76         | l   |     |
| 13 EQ Mid Width     | 1.0 ~ 12.0      | 10-120        | l   |     |
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
AUTO WAH
l
| 1 LFO Frequency           | 0.00 ~ 39.7Hz | 0-127 table#1 |     |     |
| ------------------------- | ------------- | ------------- | --- | --- |
| 2 LFO Depth               | 0 ~ 127       | 0-127         | l   |     |
|                           |               |               | l   | l   |
| 3 Cutoff Frequency Offset | 0 ~ 127       | 0-127         |     |     |
| 4 Resonance               | 1.0 ~ 12.0    | 10-120        | l   |     |
5
| 6 EQ Low Frequency | 32Hz ~ 2.0kHz | 4-40 table#3 | l   |     |
| ------------------ | ------------- | ------------ | --- | --- |
l
| 7 EQ Low Gain       | -12 ~ +12dB     | 52-76         |     |     |
| ------------------- | --------------- | ------------- | --- | --- |
| 8 EQ High Frequency | 500Hz ~ 16.0kHz | 28-58 table#3 | l   |     |
l
| 9 EQ High Gain | -12 ~ +12dB       | 52-76 |     |     |
| -------------- | ----------------- | ----- | --- | --- |
| 10 Dry/Wet     | D63>W~ D=W~ D<W63 | 1-127 | l   |     |
l
| 11 Drive | 0 ~ 127 | 0-127 |     |     |
| -------- | ------- | ----- | --- | --- |
12
13
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
HALL1, HALL2
ROOM1, ROOM2, ROOM3
STAGE1, STAGE2
PLATE
| 1 Reverb Time   | 0.3 ~ 30.0s   | 0-69 table#4 | l   |     |
| --------------- | ------------- | ------------ | --- | --- |
| 2 Diffusion     | 0 ~ 10        | 0-10         | l   |     |
| 3 Initial Delay | 0 ~ 63        | 0-63 table#5 | l   |     |
| 4 HPF Cutoff    | Thru ~ 8.0kHz | 0-52 table#3 | l   |     |
l
| 5 LPF Cutoff | 1.0k ~ Thru | 34-60 table#3 |     |     |
| ------------ | ----------- | ------------- | --- | --- |
6
7
8
9
| 10 Dry/Wet  | D63>W~ D=W~ D<W63 | 1-127 | l   | l   |
| ----------- | ----------------- | ----- | --- | --- |
l
| 11 Rev Delay | 0 ~ 63 | 0-63 table#5 |     |     |
| ------------ | ------ | ------------ | --- | --- |
| 12 Density   | 0 ~ 4  | 0-4          | l   |     |
l
| 13 Rev/Er Balance | R<E63 ~ R=E ~ R63>E | 1-127 |     |     |
| ----------------- | ------------------- | ----- | --- | --- |
| 14 High Damp      | 0.1 ~ 1.0           | 1-10  | l   |     |
| 15 Feedback Level | -63 ~ +63           | 1-127 |     |     |
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
DELAYL,C,R
l
| 1 Lch Delay | 0.1 ~ 715.0ms | 1-7150 |     |     |
| ----------- | ------------- | ------ | --- | --- |
| 2 Rch Delay | 0.1 ~ 715.0ms | 1-7150 | l   |     |
l
| 3 Cch Delay      | 0.1 ~ 715.0ms | 1-7150 |     |     |
| ---------------- | ------------- | ------ | --- | --- |
| 4 Feedback Delay | 0.1 ~ 715.0ms | 1-7150 | l   |     |
l
| 5 Feedback Level | -63 ~ +63 | 1-127 |     |     |
| ---------------- | --------- | ----- | --- | --- |
| 6 Cch Level      | 0 ~ 127   | 0-127 | l   |     |
l
| 7 High Damp | 0.1 ~ 1.0 | 1-10 |     |     |
| ----------- | --------- | ---- | --- | --- |
8
9
| 10 Dry/Wet  | D63>W~ D=W~ D<W63 | 1-127 | l   | l   |
| ----------- | ----------------- | ----- | --- | --- |
l
| 11 HPF Cutoff        | Thru ~ 8.0kHz   | 0-52 table#3  |     |     |
| -------------------- | --------------- | ------------- | --- | --- |
| 12 LPF Cutoff        | 1.0k ~ Thru     | 34-60 table#3 | l   |     |
| 13 EQ Low Frequency  | 50Hz ~ 2.0kHz   | 8-40 table#3  |     |     |
| 14 EQ Low Gain       | -12 ~ +12dB     | 52-76         |     |     |
| 15 EQ High Frequency | 500Hz ~ 16.0kHz | 28-58 table#3 |     |     |
| 16 EQ High Gain      | -12 ~ +12dB     | 52-76         |     |     |

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
DELAYL,R
l
| 1 Lch Delay | 0.1 ~ 715.0ms | 1-7150 |     |     |
| ----------- | ------------- | ------ | --- | --- |
| 2 Rch Delay | 0.1 ~ 715.0ms | 1-7150 | l   |     |
l
| 3 Feedback Delay 1 | 0.1 ~ 715.0ms | 1-7150 |     |     |
| ------------------ | ------------- | ------ | --- | --- |
| 4 Feedback Delay 2 | 0.1 ~ 715.0ms | 1-7150 | l   |     |
l
| 5 Feedback Level | -63 ~ +63 | 1-127 |     |     |
| ---------------- | --------- | ----- | --- | --- |
| 6 High Damp      | 0.1 ~ 1.0 | 1-10  | l   |     |
7
8
9
|             |                   |       | l   | l   |
| ----------- | ----------------- | ----- | --- | --- |
| 10 Dry/Wet  | D63>W~ D=W~ D<W63 | 1-127 |     |     |
l
| 11 HPF Cutoff        | Thru ~ 8.0kHz   | 0-52 table#3  |     |     |
| -------------------- | --------------- | ------------- | --- | --- |
| 12 LPF Cutoff        | 1.0k ~ Thru     | 34-60 table#3 | l   |     |
| 13 EQ Low Frequency  | 50Hz ~ 2.0kHz   | 8-40 table#3  |     |     |
| 14 EQ Low Gain       | -12 ~ +12dB     | 52-76         |     |     |
| 15 EQ High Frequency | 500Hz ~ 16.0kHz | 28-58 table#3 |     |     |
| 16 EQ High Gain      | -12 ~ +12dB     | 52-76         |     |     |

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
ECHO
l
| 1 Lch Delay1         | 0.1 ~ 355.0ms | 1-3550 |     |     |
| -------------------- | ------------- | ------ | --- | --- |
| 2 Lch Feedback Level | -63 ~ +63     | 1-127  | l   |     |
l
| 3 Rch Delay1         | 0.1 ~ 355.0ms | 1-3550 |     |     |
| -------------------- | ------------- | ------ | --- | --- |
| 4 Rch Feedback Level | -63 ~ +63     | 1-127  | l   |     |
l
| 5 High Damp  | 0.1 ~ 1.0     | 1-10   |     |     |
| ------------ | ------------- | ------ | --- | --- |
| 6 Lch Delay2 | 0.1 ~ 355.0ms | 1-3550 | l   |     |
l
| 7 Rch Delay2   | 0.1 ~ 355.0ms | 1-3550 |     |     |
| -------------- | ------------- | ------ | --- | --- |
| 8 Delay2 Level | 0 ~ 127       | 0-127  | l   |     |
9
| 10 Dry/Wet  | D63>W~ D=W~ D<W63 | 1-127 | l   | l   |
| ----------- | ----------------- | ----- | --- | --- |
l
| 11 HPF Cutoff        | Thru ~ 8.0kHz   | 0-52 table#3  |     |     |
| -------------------- | --------------- | ------------- | --- | --- |
| 12 LPF Cutoff        | 1.0k ~ Thru     | 34-60 table#3 | l   |     |
| 13 EQ Low Frequency  | 50Hz ~ 2.0kHz   | 8-40 table#3  |     |     |
| 14 EQ Low Gain       | -12 ~ +12dB     | 52-76         |     |     |
| 15 EQ High Frequency | 500Hz ~ 16.0kHz | 28-58 table#3 |     |     |
| 16 EQ High Gain      | -12 ~ +12dB     | 52-76         |     |     |

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
CROSS DELAY
l
| 1 L->R Delay | 0.1 ~ 355.0ms | 1-3550 |     |     |
| ------------ | ------------- | ------ | --- | --- |
| 2 R->LDelay  | 0.1 ~ 355.0ms | 1-3550 | l   |     |
l
| 3 Feedback Level | -63 ~ +63 | 1-127 |     |     |
| ---------------- | --------- | ----- | --- | --- |
| 4 Input Select   | L,R, L&R  | 0-2   | l   |     |
l
| 5 High Damp | 0.1 ~ 1.0 | 1-10 |     |     |
| ----------- | --------- | ---- | --- | --- |
6
7
8
9
|             |                   |       | l   | l   |
| ----------- | ----------------- | ----- | --- | --- |
| 10 Dry/Wet  | D63>W~ D=W~ D<W63 | 1-127 |     |     |
l
| 11 HPF Cutoff        | Thru ~ 8.0kHz   | 0-52 table#3  |     |     |
| -------------------- | --------------- | ------------- | --- | --- |
| 12 LPF Cutoff        | 1.0k ~ Thru     | 34-60 table#3 | l   |     |
| 13 EQ Low Frequency  | 50Hz ~ 2.0kHz   | 8-40 table#3  |     |     |
| 14 EQ Low Gain       | -12 ~ +12dB     | 52-76         |     |     |
| 15 EQ High Frequency | 500Hz ~ 16.0kHz | 28-58 table#3 |     |     |
| 16 EQ High Gain      | -12 ~ +12dB     | 52-76         |     |     |

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
EARLYREF1, EARLYREF2
l
| 1 Type      | S-H, L-H, Rdm, Rvs, Plt, Spr | 0-5          |     |     |
| ----------- | ---------------------------- | ------------ | --- | --- |
| 2 Room Size | 0.1 ~ 7.0                    | 0-44 table#6 | l   |     |
l
| 3 Diffusion     | 0 ~ 10 | 0-10         |     |     |
| --------------- | ------ | ------------ | --- | --- |
| 4 Initial Delay | 0 ~ 63 | 0-63 table#5 | l   |     |
l
| 5 Feedback Level | -63 ~ +63     | 1-127 |     |     |
| ---------------- | ------------- | ----- | --- | --- |
| 6 HPF Cutoff     | Thru ~ 8.0kHz | 0-52  | l   |     |
l
| 7 LPF Cutoff | 1.0k ~ Thru | 34-60 |     |     |
| ------------ | ----------- | ----- | --- | --- |
8
9
| 10 Dry/Wet  | D63>W~ D=W~ D<W63 | 1-127 | l   | l   |
| ----------- | ----------------- | ----- | --- | --- |
l
| 11 Liveness | 0 ~ 10 | 0-10 |     |     |
| ----------- | ------ | ---- | --- | --- |
| 12 Density  | 0 ~ 3  | 0-3  | l   |     |
l
| 13 High Damp | 0.1 ~ 1.0 | 1-10 |     |     |
| ------------ | --------- | ---- | --- | --- |
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
GATE REVERB
REVERSE GATE
| 1 Type | TypeA, TypeB | 0-1 | l   |     |
| ------ | ------------ | --- | --- | --- |
l
| 2 Room Size | 0.1 ~ 7.0 | 0-44 table#6 |     |     |
| ----------- | --------- | ------------ | --- | --- |
| 3 Diffusion | 0 ~ 10    | 0-10         | l   |     |
l
| 4 Initial Delay  | 0 ~ 63    | 0-63 table#5 |     |     |
| ---------------- | --------- | ------------ | --- | --- |
| 5 Feedback Level | -63 ~ +63 | 1-127        | l   |     |
l
| 6 HPF Cutoff | Thru ~ 8.0kHz | 0-52 table#3  |     |     |
| ------------ | ------------- | ------------- | --- | --- |
| 7 LPF Cutoff | 1.0k ~ Thru   | 34-60 table#3 | l   |     |
8
9
| 10 Dry/Wet  | D63>W~ D=W~ D<W63 | 1-127 | l   | l   |
| ----------- | ----------------- | ----- | --- | --- |
| 11 Liveness | 0 ~ 10            | 0-10  | l   |     |
l
| 12 Density   | 0 ~ 3     | 0-3  |     |     |
| ------------ | --------- | ---- | --- | --- |
| 13 High Damp | 0.1 ~ 1.0 | 1-10 | l   |     |
14
15
16

XG Effect Parameter List
OPTIONEFFECTTYPE
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
PITCH CHANGE
l
| 1 Pitch         | -24 ~ +24 | 40-88         |     |     |
| --------------- | --------- | ------------- | --- | --- |
| 2 Initial Delay | 0 ~ 127   | 0-127 table#7 | l   |     |
l
| 3 Fine 1 | -50 ~ +50 | 14-114 |     |     |
| -------- | --------- | ------ | --- | --- |
| 4 Fine 2 | -50 ~ +50 | 14-114 | l   |     |
l
| 5 Feedback Gain | -63 ~ +63% | 1-127 |     |     |
| --------------- | ---------- | ----- | --- | --- |
6
7
8
9
|             |                   |       | l   | l   |
| ----------- | ----------------- | ----- | --- | --- |
| 10 Dry/Wet  | D63>W~ D=W~ D<W63 | 1-127 |     |     |
l
| 11 Pan 1          | L63 ~ R63 | 1-127 |     |     |
| ----------------- | --------- | ----- | --- | --- |
| 12 Output Level 1 | 0 ~ 127   | 0-127 | l   |     |
l
| 13 Pan 2          | L63 ~ R63 | 1-127 |     |     |
| ----------------- | --------- | ----- | --- | --- |
| 14 Output Level 2 | 0 ~ 127   | 0-127 | l   |     |
15
16

XG Effect Parameter List
No. Parameter Display Value See Table MU80 Control
AURALEXCITER
1 HPFcutoff 500Hz ~ 16.0kHz 28-58 l
2 Drive 0 ~ 127 0-127 l
3 Mix Level 0 ~ 127 0-127 l
4
5
6
7
8
9
10
11
12
13
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
TOUCH WAH,WAH+DIST
l
| 1 Sensitivity             | 0 ~ 127 | 0-127 |     |     |
| ------------------------- | ------- | ----- | --- | --- |
| 2 Cutoff Frequency Offset | 0 ~ 127 | 0-127 | l   | l   |
l
| 3 Resonance | 1.0 ~ 12.0 | 10-120 |     |     |
| ----------- | ---------- | ------ | --- | --- |
4
5
| 6 EQ Low Frequency | 32Hz ~ 2.0kHz | 4-40 table#3 | l   |     |
| ------------------ | ------------- | ------------ | --- | --- |
l
| 7 EQ Low Gain       | -12 ~ +12dB       | 52-76         |     |     |
| ------------------- | ----------------- | ------------- | --- | --- |
| 8 EQ High Frequency | 500Hz ~ 16.0kHz   | 28-58 table#3 | l   |     |
| 9 EQ High Gain      | -12 ~ +12dB       | 52-76         | l   |     |
| 10 Dry/Wet          | D63>W~ D=W~ D<W63 | 1-127         | l   |     |
l
| 11 Drive | 0 ~ 127 | 0-127 |     |     |
| -------- | ------- | ----- | --- | --- |
12
13
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
COMPRESSOR
l
| 1 Attack  | 1 ~ 40ms   | 0-19 table#8 |     |     |
| --------- | ---------- | ------------ | --- | --- |
| 2 Release | 10 ~ 680ms | 0-15 table#9 | l   |     |
l
| 3 Threshold | -48 ~ -6dB | 79-121       |     |     |
| ----------- | ---------- | ------------ | --- | --- |
| 4 Ratio     | 1.0 ~ 20.0 | 0-7 table#10 | l   |     |
l
| 5 Output Level | 0 ~ 127 | 0-127 |     |     |
| -------------- | ------- | ----- | --- | --- |
6
7
8
9
10
11
12
13
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
NOISE GATE
l
| 1 Attack  | 1 ~ 40ms   | 0-19 table#8 |     |     |
| --------- | ---------- | ------------ | --- | --- |
| 2 Release | 10 ~ 680ms | 0-15 table#9 | l   |     |
l
| 3 Threshold    | -72 ~ -30dB | 55-97 |     |     |
| -------------- | ----------- | ----- | --- | --- |
| 4 Output Level | 0 ~ 127     | 0-127 | l   |     |
5
6
7
8
9
l
10
| 11 Ratio | 1.0 ~ 20.0 | 0-7 table#10 |     |     |
| -------- | ---------- | ------------ | --- | --- |
12
13
14
15
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
WHITE ROOM
TUNNEL
CANYON
BASEMENT
| 1 Reverb Time   | 0.3 ~ 30.0s   | 0-69 table#4 | l   |     |
| --------------- | ------------- | ------------ | --- | --- |
| 2 Diffusion     | 0 ~ 10        | 0-10         | l   |     |
| 3 Initial Delay | 0 ~ 63        | 0-63 table#5 | l   |     |
| 4 HPF Cutoff    | Thru ~ 8.0kHz | 0-52 table#3 | l   |     |
l
| 5 LPF Cutoff | 1.0k ~ Thru | 34-60 table#3 |     |     |
| ------------ | ----------- | ------------- | --- | --- |
| 6 Width      | 0.5 ~ 10.2m | 0-37 table#11 | l   |     |
l
| 7 Height | 0.5 ~ 20.2m | 0-73 table#11  |     |     |
| -------- | ----------- | -------------- | --- | --- |
| 8 Depth  | 0.5 ~ 30.2m | 0-104 table#11 | l   |     |
l
| 9 Wall Vary  | 0 ~ 30            | 0-30         |     |     |
| ------------ | ----------------- | ------------ | --- | --- |
| 10 Dry/Wet   | D63>W~ D=W~ D<W63 | 1-127        | l   | l   |
| 11 Rev Delay | 0 ~ 63            | 0-63 table#5 | l   |     |
l
| 12 Density        | 0 ~ 4               | 0-4   |     |     |
| ----------------- | ------------------- | ----- | --- | --- |
| 13 Rev/Er Balance | R<E63 ~ R=E ~ R63>E | 1-127 | l   |     |
l
| 14 High Damp      | 0.1 ~ 1.0 | 1-10  |     |     |
| ----------------- | --------- | ----- | --- | --- |
| 15 Feedback Level | -63 ~ +63 | 1-127 |     |     |
16

XG Effect Parameter List
| No. Parameter | Display | Value See Table | MU80 | Control |
| ------------- | ------- | --------------- | ---- | ------- |
KARAOKE1,2,3
l
| 1 Delay Time     | 0 ~ 127   | 0-127 table#7 |     |     |
| ---------------- | --------- | ------------- | --- | --- |
| 2 Feedback Level | -63 ~ +63 | 1-127         | l   |     |
l
| 3 HPF Cutoff | Thru ~ 8.0kHz | 0-52  |     |     |
| ------------ | ------------- | ----- | --- | --- |
| 4 LPF Cutoff | 1.0k ~ Thru   | 34-60 | l   |     |
5
6
7
8
9
|             |                   |       | l   | l   |
| ----------- | ----------------- | ----- | --- | --- |
| 10 Dry/Wet  | D63>W~ D=W~ D<W63 | 1-127 |     |     |
11
12
13
14
15
16

XG Effect Parameter List
No. Parameter Display Value See Table MU80 Control
VOICECANCEL
1
2
3
4
5
6
7
8
9
10
11 Low Adjust 0 ~ 26 0-26
12 High Adjust 0 ~ 26 0-26
13
14
15
16

XG Effect Parameter List
NOTES:
1.DRY/WETreception
• When Variation Connection is set to SYS, the tone generator receives DRY/WET and data value is overwritten,
but it does not affect the sound and remains WET = 100% inside the effect block.
• When Variation Connection is set to INS, the tone generator receives DRY/WET and it affects the sound.
2.Variation Connection switching
• When switching from INS to SYS, the sound from the Variation block is set to WET100% but the DRY/WET
value is kept unchanged (i.e.won’t be set to DRY/WET = D <W63 = 127).
• When switching from SYS to INS, the DRY/WETvalue remains unchanged—not initialized—and the sound
from the Variation block reflects the current DRY/WETbalance.
3.AURALEXCITER
• AURALEXCITER™ is a registered trademark of APHEXSYSTEMS, LTD. Licensing from APHEXSYSTEMS,
LTD.is needed in an application of this effect program.

XG Data Value Assignment Tables
Table#1
LFOFrequency
| Data Value | Data | Value | Data Value | Data | Value | Data Value | Data | Value Data | Value Data | Value |
| ---------- | ---- | ----- | ---------- | ---- | ----- | ---------- | ---- | ---------- | ---------- | ----- |
| 0 0.00     | 16   | 0.67  | 32 1.34    | 48   | 2.01  | 64 2.69    | 80   | 4.37 96    | 8.41 112   | 17.4  |
| 1 0.08     | 17   | 0.75  | 33 1.43    | 49   | 2.10  | 65 2.77    | 81   | 4.54 97    | 8.74 113   | 18.1  |
| 2 0.08     | 18   | 0.75  | 34 1.43    | 50   | 2.10  | 66 2.86    | 82   | 4.71 98    | 9.08 114   | 19.5  |
| 3 0.16     | 19   | 0.84  | 35 1.51    | 51   | 2.18  | 67 2.94    | 83   | 4.87 99    | 9.42 115   | 20.8  |
| 4 0.16     | 20   | 0.84  | 36 1.51    | 52   | 2.18  | 68 3.02    | 84   | 5.04 100   | 9.75 116   | 22.2  |
| 5 0.25     | 21   | 0.92  | 37 1.59    | 53   | 2.27  | 69 3.11    | 85   | 5.21 101   | 10.0 117   | 23.5  |
| 6 0.25     | 22   | 0.92  | 38 1.59    | 54   | 2.27  | 70 3.19    | 86   | 5.38 102   | 10.7 118   | 24.8  |
| 7 0.33     | 23   | 1.00  | 39 1.68    | 55   | 2.35  | 71 3.28    | 87   | 5.55 103   | 11.4 119   | 26.2  |
| 8 0.33     | 24   | 1.00  | 40 1.68    | 56   | 2.35  | 72 3.36    | 88   | 5.72 104   | 12.1 120   | 27.5  |
| 9 0.42     | 25   | 1.09  | 41 1.76    | 57   | 2.43  | 73 3.44    | 89   | 6.05 105   | 12.7 121   | 28.9  |
| 10 0.42    | 26   | 1.09  | 42 1.76    | 58   | 2.43  | 74 3.53    | 90   | 6.39 106   | 13.4 122   | 30.2  |
| 11 0.50    | 27   | 1.17  | 43 1.85    | 59   | 2.52  | 75 3.61    | 91   | 6.72 107   | 14.1 123   | 31.6  |
| 12 0.50    | 28   | 1.17  | 44 1.85    | 60   | 2.52  | 76 3.70    | 92   | 7.06 108   | 14.8 124   | 32.9  |
| 13 0.58    | 29   | 1.26  | 45 1.93    | 61   | 2.60  | 77 3.86    | 93   | 7.40 109   | 15.4 125   | 34.3  |
| 14 0.58    | 30   | 1.26  | 46 1.93    | 62   | 2.60  | 78 4.03    | 94   | 7.73 110   | 16.1 126   | 37.0  |
| 15 0.67    | 31   | 1.34  | 47 2.01    | 63   | 2.69  | 79 4.20    | 95   | 8.07 111   | 16.8 127   | 39.7  |

XG Data Value Assignment Tables
Table#2
Modulation Delay Offset
| Data Value | Data   | Value Data | Value Data | Value Data | Value Data | Value Data | Value Data | Value |
| ---------- | ------ | ---------- | ---------- | ---------- | ---------- | ---------- | ---------- | ----- |
| 0          | 0.0 16 | 1.6 32     | 3.2 48     | 4.8 64     | 6.4 80     | 8.0 96     | 9.6 112    | 26.5  |
| 1          | 0.1 17 | 1.7 33     | 3.3 49     | 4.9 65     | 6.5 81     | 8.1 97     | 9.7 113    | 28.0  |
| 2          | 0.2 18 | 1.8 34     | 3.4 50     | 5.0 66     | 6.6 82     | 8.2 98     | 9.8 114    | 29.6  |
| 3          | 0.3 19 | 1.9 35     | 3.5 51     | 5.1 67     | 6.7 83     | 8.3 99     | 9.9 115    | 31.2  |
| 4          | 0.4 20 | 2.0 36     | 3.6 52     | 5.2 68     | 6.8 84     | 8.4 100    | 10.0 116   | 32.8  |
| 5          | 0.5 21 | 2.1 37     | 3.7 53     | 5.3 69     | 6.9 85     | 8.5 101    | 11.1 117   | 34.3  |
| 6          | 0.6 22 | 2.2 38     | 3.8 54     | 5.4 70     | 7.0 86     | 8.6 102    | 12.2 118   | 35.9  |
| 7          | 0.7 23 | 2.3 39     | 3.9 55     | 5.5 71     | 7.1 87     | 8.7 103    | 13.3 119   | 37.5  |
| 8          | 0.8 24 | 2.4 40     | 4.0 56     | 5.6 72     | 7.2 88     | 8.8 104    | 14.4 120   | 39.0  |
| 9          | 0.9 25 | 2.5 41     | 4.1 57     | 5.7 73     | 7.3 89     | 8.9 105    | 15.5 121   | 40.6  |
| 10         | 1.0 26 | 2.6 42     | 4.2 58     | 5.8 74     | 7.4 90     | 9.0 106    | 17.1 122   | 42.2  |
| 11         | 1.1 27 | 2.7 43     | 4.3 59     | 5.9 75     | 7.5 91     | 9.1 107    | 18.6 123   | 43.7  |
| 12         | 1.2 28 | 2.8 44     | 4.4 60     | 6.0 76     | 7.6 92     | 9.2 108    | 20.2 124   | 45.3  |
| 13         | 1.3 29 | 2.9 45     | 4.5 61     | 6.1 77     | 7.7 93     | 9.3 109    | 21.8 125   | 46.9  |
| 14         | 1.4 30 | 3.0 46     | 4.6 62     | 6.2 78     | 7.8 94     | 9.4 110    | 23.3 126   | 48.4  |
| 15         | 1.5 31 | 3.1 47     | 4.7 63     | 6.3 79     | 7.9 95     | 9.5 111    | 24.9 127   | 50.0  |

XG Data Value Assignment Tables
Table#3
EQFrequency
Data Value Data Value Data Value Data Value
0 THRU (20) 16 125 32 800 48 5.0k
1 22 17 140 33 900 49 5.6k
2 25 18 160 34 1.0k 50 6.3k
3 28 19 180 35 1.1k 51 7.0k
4 32 20 200 36 1.2k 52 8.0k
5 36 21 225 37 1.4k 53 9.0k
6 40 22 250 38 1.6k 54 10.0k
7 45 23 280 39 1.8k 55 11.0k
8 50 24 315 40 2.0k 56 12.0k
9 56 25 355 41 2.2k 57 14.0k
10 63 26 400 42 2.5k 58 16.0k
11 70 27 450 43 2.8k 59 18.0k
12 80 28 500 44 3.2k 60 THRU (20.0k)
13 90 29 560 45 3.6k
14 100 30 630 46 4.0k
15 110 31 700 47 4.5k

XG Data Value Assignment Tables
Table#4
Reverb Time
| Data Value | Data   | Value Data | Value Data | Value Data Value |
| ---------- | ------ | ---------- | ---------- | ---------------- |
| 0          | 0.3 16 | 1.9 32     | 3.5 48     | 5.5 64 17.0      |
| 1          | 0.4 17 | 2.0 33     | 3.6 49     | 6.0 65 18.0      |
| 2          | 0.5 18 | 2.1 34     | 3.7 50     | 6.5 66 19.0      |
| 3          | 0.6 19 | 2.2 35     | 3.8 51     | 7.0 67 20.0      |
| 4          | 0.7 20 | 2.3 36     | 3.9 52     | 7.5 68 25.0      |
| 5          | 0.8 21 | 2.4 37     | 4.0 53     | 8.0 69 30.0      |
| 6          | 0.9 22 | 2.5 38     | 4.1 54     | 8.5              |
| 7          | 1.0 23 | 2.6 39     | 4.2 55     | 9.0              |
| 8          | 1.1 24 | 2.7 40     | 4.3 56     | 9.5              |
| 9          | 1.2 25 | 2.8 41     | 4.4 57     | 10.0             |
| 10         | 1.3 26 | 2.9 42     | 4.5 58     | 11.0             |
| 11         | 1.4 27 | 3.0 43     | 4.6 59     | 12.0             |
| 12         | 1.5 28 | 3.1 44     | 4.7 60     | 13.0             |
| 13         | 1.6 29 | 3.2 45     | 4.8 61     | 14.0             |
| 14         | 1.7 30 | 3.3 46     | 4.9 62     | 15.0             |
| 15         | 1.8 31 | 3.4 47     | 5.0 63     | 16.0             |

XG Data Value Assignment Tables
Table#5
Delay Time (200.0 ms)
| Data Value | Data   | Value | Data Value | Data | Value | Data Value | Data Value | Data | Value    | Data | Value |
| ---------- | ------ | ----- | ---------- | ---- | ----- | ---------- | ---------- | ---- | -------- | ---- | ----- |
| 0          | 0.1 16 | 25.3  | 32 50.5    | 48   | 75.7  | 64 100.8   | 80 126.0   |      | 96 151.2 | 112  | 176.4 |
| 1          | 1.7 17 | 26.9  | 33 52.0    | 49   | 77.2  | 65 102.4   | 81 127.6   |      | 97 152.8 | 113  | 178.0 |
| 2          | 3.2 18 | 28.4  | 34 53.6    | 50   | 78.8  | 66 104.0   | 82 129.2   |      | 98 154.4 | 114  | 179.5 |
| 3          | 4.8 19 | 30.0  | 35 55.2    | 51   | 80.4  | 67 105.6   | 83 130.7   |      | 99 155.9 | 115  | 181.1 |
| 4          | 6.4 20 | 31.6  | 36 56.8    | 52   | 81.9  | 68 107.1   | 84 132.3   | 100  | 157.5    | 116  | 182.7 |
| 5          | 8.0 21 | 33.2  | 37 58.3    | 53   | 83.5  | 69 108.7   | 85 133.9   | 101  | 159.1    | 117  | 184.3 |
| 6          | 9.5 22 | 34.7  | 38 59.9    | 54   | 85.1  | 70 110.3   | 86 135.5   | 102  | 160.6    | 118  | 185.8 |
| 7 11.1     | 23     | 36.3  | 39 61.5    | 55   | 86.7  | 71 111.9   | 87 137.0   | 103  | 162.2    | 119  | 187.4 |
| 8 12.7     | 24     | 37.9  | 40 63.1    | 56   | 88.2  | 72 113.4   | 88 138.6   | 104  | 163.8    | 120  | 189.0 |
| 9 14.3     | 25     | 39.5  | 41 64.6    | 57   | 89.8  | 73 115.0   | 89 140.2   | 105  | 165.4    | 121  | 190.6 |
| 10 15.8    | 26     | 41.0  | 42 66.2    | 58   | 91.4  | 74 116.6   | 90 141.8   | 106  | 166.9    | 122  | 192.1 |
| 11 17.4    | 27     | 42.6  | 43 67.8    | 59   | 93.0  | 75 118.2   | 91 143.3   | 107  | 168.5    | 123  | 193.7 |
| 12 19.0    | 28     | 44.2  | 44 69.4    | 60   | 94.5  | 76 119.7   | 92 144.9   | 108  | 170.1    | 124  | 195.3 |
| 13 20.6    | 29     | 45.7  | 45 70.9    | 61   | 96.1  | 77 121.3   | 93 146.5   | 109  | 171.7    | 125  | 196.9 |
| 14 22.1    | 30     | 47.3  | 46 72.5    | 62   | 97.7  | 78 122.9   | 94 148.1   | 110  | 173.2    | 126  | 198.4 |
| 15 23.7    | 31     | 48.9  | 47 74.1    | 63   | 99.3  | 79 124.4   | 95 149.6   | 111  | 174.8    | 127  | 200.0 |

XG Data Value Assignment Tables
Table#6
Room Size
| Data Value | Data   | Value Data | Value |
| ---------- | ------ | ---------- | ----- |
| 0          | 0.1 16 | 2.6 32     | 5.1   |
| 1          | 0.3 17 | 2.8 33     | 5.3   |
| 2          | 0.4 18 | 2.9 34     | 5.4   |
| 3          | 0.6 19 | 3.1 35     | 5.6   |
| 4          | 0.7 20 | 3.2 36     | 5.7   |
| 5          | 0.9 21 | 3.4 37     | 5.9   |
| 6          | 1.0 22 | 3.5 38     | 6.1   |
| 7          | 1.2 23 | 3.7 39     | 6.2   |
| 8          | 1.4 24 | 3.9 40     | 6.4   |
| 9          | 1.5 25 | 4.0 41     | 6.5   |
| 10         | 1.7 26 | 4.2 42     | 6.7   |
| 11         | 1.8 27 | 4.3 43     | 6.8   |
| 12         | 2.0 28 | 4.5 44     | 7.0   |
| 13         | 2.1 29 | 4.6        |       |
| 14         | 2.3 30 | 4.8        |       |
| 15         | 2.5 31 | 5.0        |       |

XG Data Value Assignment Tables
Table#7
Delay Time (400.0 ms)
| Data Value | Data   | Value | Data Value | Data Value | Data Value | Data Value | Data Value | Data Value |
| ---------- | ------ | ----- | ---------- | ---------- | ---------- | ---------- | ---------- | ---------- |
| 0          | 0.1 16 | 50.5  | 32 100.9   | 48 151.2   | 64 201.6   | 80 252.0   | 96 302.4   | 112 352.8  |
| 1          | 3.2 17 | 53.6  | 33 104.0   | 49 154.4   | 65 204.8   | 81 255.2   | 97 305.5   | 113 355.9  |
| 2          | 6.4 18 | 56.8  | 34 107.2   | 50 157.5   | 66 207.9   | 82 258.3   | 98 308.7   | 114 359.1  |
| 3          | 9.5 19 | 59.9  | 35 110.3   | 51 160.7   | 67 211.1   | 83 261.5   | 99 311.8   | 115 362.2  |
| 4 12.7     | 20     | 63.1  | 36 113.5   | 52 163.8   | 68 214.2   | 84 264.6   | 100 315.0  | 116 365.4  |
| 5 15.8     | 21     | 66.2  | 37 116.6   | 53 167.0   | 69 217.4   | 85 267.7   | 101 318.1  | 117 368.5  |
| 6 19.0     | 22     | 69.4  | 38 119.8   | 54 170.1   | 70 220.5   | 86 270.9   | 102 321.3  | 118 371.7  |
| 7 22.1     | 23     | 72.5  | 39 122.9   | 55 173.3   | 71 223.7   | 87 274.0   | 103 324.4  | 119 374.8  |
| 8 25.3     | 24     | 75.7  | 40 126.1   | 56 176.4   | 72 226.8   | 88 277.2   | 104 327.6  | 120 378.0  |
| 9 28.4     | 25     | 78.8  | 41 129.2   | 57 179.6   | 73 230.0   | 89 280.3   | 105 330.7  | 121 381.1  |
| 10 31.6    | 26     | 82.0  | 42 132.4   | 58 182.7   | 74 233.1   | 90 283.5   | 106 333.9  | 122 384.3  |
| 11 34.7    | 27     | 85.1  | 43 135.5   | 59 185.9   | 75 236.3   | 91 286.6   | 107 337.0  | 123 387.4  |
| 12 37.9    | 28     | 88.3  | 44 138.6   | 60 189.0   | 76 239.4   | 92 289.8   | 108 340.2  | 124 390.6  |
| 13 41.0    | 29     | 91.4  | 45 141.8   | 61 192.2   | 77 242.6   | 93 292.9   | 109 343.3  | 125 393.7  |
| 14 44.2    | 30     | 94.6  | 46 144.9   | 62 195.3   | 78 245.7   | 94 296.1   | 110 346.5  | 126 396.9  |
| 15 47.3    | 31     | 97.7  | 47 148.1   | 63 198.5   | 79 248.9   | 95 299.2   | 111 349.6  | 127 400.0  |

XG Data Value Assignment Tables
Table#8
Compressor Attack Time
Data Value
0 1
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 9
9 10
10 12
11 14
12 16
13 18
14 20
15 23
16 26
17 30
18 35
19 40

XG Data Value Assignment Tables
Table#9
Compressor Release Time
Data Value
0 10
1 15
2 25
3 35
4 45
5 55
6 65
7 75
8 85
9 100
10 115
11 140
12 170
13 230
14 340
15 680

XG Data Value Assignment Tables
Table#10
Compressor Ratio
Data Value
0 1.0
1 1.5
2 2.0
3 3.0
4 5.0
5 7.0
6 10.0
7 20.0

XG Data Value Assignment Tables
Table#11
Reverb Width; Depth; Height
| Data Value | Data   | Value Data | Value Data Value | Data Value | Data Value | Data | Value |
| ---------- | ------ | ---------- | ---------------- | ---------- | ---------- | ---- | ----- |
| 0          | 0.5 16 | 4.6 32     | 8.8 48 13.1      | 64 17.6    | 80 22.4    | 96   | 27.5  |
| 1          | 0.8 17 | 4.9 33     | 9.1 49 13.4      | 65 17.9    | 81 22.7    | 97   | 27.8  |
| 2          | 1.0 18 | 5.2 34     | 9.4 50 13.7      | 66 18.2    | 82 23.0    | 98   | 28.1  |
| 3          | 1.3 19 | 5.4 35     | 9.6 51 14.0      | 67 18.5    | 83 23.3    | 99   | 28.5  |
| 4          | 1.5 20 | 5.7 36     | 9.9 52 14.2      | 68 18.8    | 84 23.6    | 100  | 28.8  |
| 5          | 1.8 21 | 5.9 37     | 10.2 53 14.5     | 69 19.1    | 85 23.9    | 101  | 29.2  |
| 6          | 2.0 22 | 6.2 38     | 10.4 54 14.8     | 70 19.4    | 86 24.2    | 102  | 29.5  |
| 7          | 2.3 23 | 6.5 39     | 10.7 55 15.1     | 71 19.7    | 87 24.5    | 103  | 29.9  |
| 8          | 2.6 24 | 6.7 40     | 11.0 56 15.4     | 72 20.0    | 88 24.9    | 104  | 30.2  |
| 9          | 2.8 25 | 7.0 41     | 11.2 57 15.6     | 73 20.2    | 89 25.2    |      |       |
| 10         | 3.1 26 | 7.2 42     | 11.5 58 15.9     | 74 20.5    | 90 25.5    |      |       |
| 11         | 3.3 27 | 7.5 43     | 11.8 59 16.2     | 75 20.8    | 91 25.8    |      |       |
| 12         | 3.6 28 | 7.8 44     | 12.1 60 16.5     | 76 21.1    | 92 26.1    |      |       |
| 13         | 3.9 29 | 8.0 45     | 12.3 61 16.8     | 77 21.4    | 93 26.5    |      |       |
| 14         | 4.1 30 | 8.3 46     | 12.6 62 17.1     | 78 21.7    | 94 26.8    |      |       |
| 15         | 4.4 31 | 8.6 47     | 12.9 63 17.3     | 79 22.0    | 95 27.1    |      |       |

XG Effect Default Data
XG RESET(XG On) DEFAULTDATA
| BLOCK TYPE      | 1 2   | 3 4   | 5 6  | 7 8   | 9 10   | 11 12 | 13 14 | 15 16 |
| --------------- | ----- | ----- | ---- | ----- | ------ | ----- | ----- | ----- |
| DIST DISTORTION | 40 20 | 72 53 | 64 0 | 43 74 | 10 127 | 0 0   | 0 0   | 0 0   |
REVERB BLOCK
| TYPE       | 1 2   | 3 4  | 5 6   | 7 8   | 9 10  | 11 12 | 13 14 | 15 16 |
| ---------- | ----- | ---- | ----- | ----- | ----- | ----- | ----- | ----- |
| NO EFFECT  | 0 0   | 0 0  | 0 0   | 0 0   | 0 0   | 0 0   | 0 0   | 0 0   |
| HALL1      | 18 10 | 8 13 | 49 0  | 0 0   | 0 40  | 0 4   | 50 8  | 64 0  |
| HALL2      | 25 10 | 28 6 | 46 0  | 0 0   | 0 40  | 13 3  | 74 7  | 64 0  |
| ROOM1      | 5 10  | 16 4 | 49 0  | 0 0   | 0 40  | 5 3   | 64 8  | 64 0  |
| ROOM2      | 12 10 | 5 4  | 38 0  | 0 0   | 0 40  | 0 4   | 50 8  | 64 0  |
| ROOM3      | 9 10  | 47 5 | 36 0  | 0 0   | 0 40  | 0 4   | 60 8  | 64 0  |
| STAGE1     | 19 10 | 16 7 | 54 0  | 0 0   | 0 40  | 0 3   | 64 6  | 64 0  |
| STAGE2     | 11 10 | 16 7 | 51 0  | 0 0   | 0 40  | 2 2   | 64 6  | 64 0  |
| PLATE      | 25 10 | 6 8  | 49 0  | 0 0   | 0 40  | 2 3   | 64 5  | 64 0  |
| WHITE ROOM | 9 5   | 11 0 | 46 30 | 50 70 | 7 40  | 34 4  | 64 7  | 64 0  |
| TUNNEL     | 48 6  | 19 0 | 44 33 | 52 70 | 16 40 | 20 4  | 64 7  | 64 0  |
| CANYON     | 59 6  | 63 0 | 45 34 | 62 91 | 13 40 | 25 4  | 64 4  | 64 0  |
| BASEMENT   | 3 6   | 3 0  | 34 26 | 29 59 | 15 40 | 32 4  | 64 8  | 64 0  |
used only by the system

XG Effect Default Data
CHORUS BLOCK
| TYPE      | 1 2   | 3 4    | 5 6  | 7 8   | 9 10   | 11 12 | 13 14 | 15 16 |
| --------- | ----- | ------ | ---- | ----- | ------ | ----- | ----- | ----- |
| NO EFFECT | 0 0   | 0 0    | 0 0  | 0 0   | 0 0    | 0 0   | 0 0   | 0 0   |
| CHORUS1   | 6 54  | 77 106 | 0 28 | 64 46 | 64 64  | 46 64 | 10 0  | 0 0   |
| CHORUS2   | 8 63  | 64 30  | 0 28 | 62 42 | 58 64  | 46 64 | 10 0  | 0 0   |
| CHORUS3   | 4 44  | 64 110 | 0 28 | 64 46 | 66 64  | 46 64 | 10 0  | 0 0   |
| CHORUS4   | 9 32  | 69 104 | 0 28 | 64 46 | 64 64  | 46 64 | 10 0  | 1 0   |
| CELESTE1  | 12 32 | 64 0   | 0 28 | 64 46 | 64 127 | 40 68 | 10 0  | 0 0   |
| CELESTE2  | 28 18 | 90 2   | 0 28 | 62 42 | 60 84  | 40 68 | 10 0  | 0 0   |
| CELESTE3  | 4 63  | 44 2   | 0 28 | 64 46 | 68 127 | 40 68 | 10 0  | 0 0   |
| CELESTE4  | 8 29  | 64 0   | 0 28 | 64 51 | 66 127 | 40 68 | 10 0  | 1 0   |
| FLANGER1  | 14 14 | 104 2  | 0 28 | 64 46 | 64 96  | 40 64 | 10 4  | 0 0   |
| FLANGER2  | 32 17 | 26 2   | 0 28 | 64 46 | 60 96  | 40 64 | 10 4  | 0 0   |
| FLANGER3  | 4 109 | 109 2  | 0 28 | 64 46 | 64 127 | 40 64 | 10 4  | 0 0   |
used only by the system

XG Effect Default Data
VARIATION BLOCK (page 1 of 3)
| TYPE      | 1 2   | 3 4  | 5 6  | 7 8 | 9 10 | 11 12 | 13 14 | 15 16 |
| --------- | ----- | ---- | ---- | --- | ---- | ----- | ----- | ----- |
| NO EFFECT | 0 0   | 0 0  | 0 0  | 0 0 | 0 0  | 0 0   | 0 0   | 0 0   |
| HALL1     | 18 10 | 8 13 | 49 0 | 0 0 | 0 40 | 0 4   | 50 8  | 64 0  |
| HALL2     | 25 10 | 28 6 | 46 0 | 0 0 | 0 40 | 13 3  | 74 7  | 64 0  |
| ROOM1     | 5 10  | 16 4 | 49 0 | 0 0 | 0 40 | 5 3   | 64 8  | 64 0  |
| ROOM2     | 12 10 | 5 4  | 38 0 | 0 0 | 0 40 | 0 4   | 50 8  | 64 0  |
| ROOM3     | 9 10  | 47 5 | 36 0 | 0 0 | 0 40 | 0 4   | 60 8  | 64 0  |
| STAGE1    | 19 10 | 16 7 | 54 0 | 0 0 | 0 40 | 0 3   | 64 6  | 64 0  |
| STAGE2    | 11 10 | 16 7 | 51 0 | 0 0 | 0 40 | 2 2   | 64 6  | 64 0  |
| PLATE     | 25 10 | 6 8  | 49 0 | 0 0 | 0 40 | 2 3   | 64 5  | 64 0  |
DELAYL,C,R 3333 1667 5000 5000 74 100 10 0 0 32 0 60 28 64 46 64
| DELAYL,R     | 2500 3750 | 3752 3750 | 87 10   | 0 0    | 0 32 | 0 60 | 28 64 | 46 64 |
| ------------ | --------- | --------- | ------- | ------ | ---- | ---- | ----- | ----- |
| ECHO         | 1700 80   | 1780 80   | 10 1700 | 1780 0 | 0 40 | 0 60 | 28 64 | 46 64 |
| CROSS DELAY  | 1700 1750 | 111 1     | 10 0    | 0 0    | 0 32 | 0 60 | 28 64 | 46 64 |
| ER1          | 0 19      | 5 16      | 64 0    | 46 0   | 0 32 | 5 0  | 10 0  | 0 0   |
| ER2          | 2 7       | 10 16     | 64 3    | 46 0   | 0 32 | 5 2  | 10 0  | 0 0   |
| GATE REVERB  | 0 15      | 6 2       | 64 0    | 44 0   | 0 32 | 4 3  | 10 0  | 0 0   |
| REVERSE GATE | 1 19      | 8 3       | 64 0    | 47 0   | 0 32 | 6 3  | 10 0  | 0 0   |
| KARAOKE1     | 63 97     | 0 48      | 0 0     | 0 0    | 0 64 | 2 0  | 0 0   | 0 0   |
| KARAOKE2     | 55 105    | 0 50      | 0 0     | 0 0    | 0 64 | 1 0  | 0 0   | 0 0   |
| KARAOKE3     | 43 110    | 14 53     | 0 0     | 0 0    | 0 64 | 0 0  | 0 0   | 0 0   |

XG Effect Default Data
VARIATION BLOCK (page 2 of 3)
| TYPE          | 1 2   | 3 4    | 5 6   | 7 8   | 9 10   | 11 12 | 13 14 | 15 16 |
| ------------- | ----- | ------ | ----- | ----- | ------ | ----- | ----- | ----- |
| CHORUS1       | 6 54  | 77 106 | 0 28  | 64 46 | 64 64  | 46 64 | 10 0  | 0 0   |
| CHORUS2       | 8 63  | 64 30  | 0 28  | 62 42 | 58 64  | 46 64 | 10 0  | 0 0   |
| CHORUS3       | 4 44  | 64 110 | 0 28  | 64 46 | 66 64  | 46 64 | 10 0  | 0 0   |
| CHORUS4       | 9 32  | 69 104 | 0 28  | 64 46 | 64 64  | 46 64 | 10 0  | 1 0   |
| CELESTE1      | 12 32 | 64 0   | 0 28  | 64 46 | 64 127 | 40 68 | 10 0  | 0 0   |
| CELESTE2      | 28 18 | 90 2   | 0 28  | 62 42 | 60 84  | 40 68 | 10 0  | 0 0   |
| CELESTE3      | 4 63  | 44 2   | 0 28  | 64 46 | 68 127 | 40 68 | 10 0  | 0 0   |
| CELESTE4      | 8 29  | 64 0   | 0 28  | 64 51 | 66 127 | 40 68 | 10 0  | 1 0   |
| FLANGER1      | 14 14 | 104 2  | 0 28  | 64 46 | 64 96  | 40 64 | 10 4  | 0 0   |
| FLANGER2      | 32 17 | 26 2   | 0 28  | 64 46 | 60 96  | 40 64 | 10 4  | 0 0   |
| FLANGER3      | 4 109 | 109 2  | 0 28  | 64 46 | 64 127 | 40 64 | 10 4  | 0 0   |
| SYMPHONIC     | 12 25 | 16 0   | 0 28  | 64 46 | 64 127 | 46 64 | 10 0  | 0 0   |
| ROTARYSPEAKER | 81 35 | 0 0    | 0 24  | 60 45 | 54 127 | 33 52 | 30 0  | 0 0   |
| TREMOLO       | 83 56 | 0 0    | 0 28  | 64 46 | 64 127 | 40 64 | 10 64 | 0 0   |
| AUTOPAN       | 76 80 | 32 5   | 0 28  | 64 46 | 64 127 | 40 64 | 10 0  | 0 0   |
| PHASER1       | 8 111 | 74 104 | 0 28  | 64 46 | 64 64  | 6 1   | 64 0  | 0 0   |
| PHASER2       | 8 111 | 74 108 | 0 28  | 64 46 | 64 64  | 5 1   | 4 0   | 0 0   |
| DISTORTION    | 40 20 | 72 53  | 48 0  | 43 74 | 10 127 | 120 0 | 0 0   | 0 0   |
| OVERDRIVE     | 29 24 | 68 45  | 55 0  | 41 72 | 10 127 | 104 0 | 0 0   | 0 0   |
| AMPSIM.       | 39 1  | 48 55  | 0 0   | 0 0   | 0 127  | 112 0 | 0 0   | 0 0   |
| 3-BAND EQ     | 70 34 | 60 10  | 70 28 | 46 0  | 0 127  | 0 0   | 0 0   | 0 0   |
| 2-BAND EQ     | 28 70 | 46 70  | 0 0   | 0 0   | 0 127  | 34 64 | 10 0  | 0 0   |

XG Effect Default Data
VARIATION BLOCK (page 3 of 3)
| TYPE             | 1 2   | 3 4   | 5 6  | 7 8   | 9 10   | 11 12 | 13 14   | 15 16 |
| ---------------- | ----- | ----- | ---- | ----- | ------ | ----- | ------- | ----- |
| AUTOWAH (LFO)    | 70 56 | 39 25 | 0 28 | 66 46 | 64 127 | 0 0   | 0 0     | 0 0   |
| PITCH CHANGE     | 64 0  | 74 54 | 64 0 | 0 0   | 0 64   | 1 127 | 127 127 | 0 0   |
| AURALEXCITER     | 44 30 | 48 0  | 0 0  | 0 0   | 0 127  | 0 0   | 0 0     | 0 0   |
| TOUCH WAH        | 36 0  | 30 0  | 0 28 | 66 46 | 64 127 | 0 0   | 0 0     | 0 0   |
| TOUCH WAH +DIST. | 36 0  | 30 0  | 0 28 | 66 46 | 64 127 | 30 0  | 0 0     | 0 0   |
| COMPRESSOR       | 6 2   | 100 4 | 96 0 | 0 0   | 0 127  | 0 0   | 0 0     | 0 0   |
| NOISE GATE       | 0 11  | 82 50 | 0 0  | 0 0   | 0 127  | 3 0   | 0 0     | 0 0   |
| VOICE CANCEL     | 0 0   | 0 0   | 0 0  | 0 0   | 0 64   | 8 25  | 0 0     | 0 0   |
| THRU             | 0 0   | 0 0   | 0 0  | 0 0   | 0 0    | 0 0   | 0 0     | 0 0   |
DISTORTION BLOCK
| TYPE       | 1 2   | 3 4   | 5 6   | 7 8   | 9 10   | 11 12 | 13 14 | 15 16 |
| ---------- | ----- | ----- | ----- | ----- | ------ | ----- | ----- | ----- |
| DISTORTION | 40 20 | 72 53 | 48 0  | 43 74 | 10 127 | 120 0 | 0 0   | 0 0   |
| OVERDRIVE  | 29 24 | 68 45 | 55 0  | 41 72 | 10 127 | 104 0 | 0 0   | 0 0   |
| 3-BAND EQ  | 70 34 | 60 10 | 70 28 | 46 0  | 0 127  | 0 0   | 0 0   | 0 0   |

XG MIDI Data Format
<Table 3-1>
XG PARAMETER CHANGE TABLE (SYSTEM )
| Address | Size Data | Parameter | Ext. | Description | Default Value |
| ------- | --------- | --------- | ---- | ----------- | ------------- |
| (H)     | (H)       | (H)       |      |             | (H)           |
00 00 00 4 0000 - 07FF MASTER TUNE -102.4 - +102.3[cent] 00 04 00 00
| 01  |     |     |     | 1st bit3-0(cid:221) bit15-12 |     |
| --- | --- | --- | --- | ---------------------------- | --- |
2nd bit3-0(cid:221)
02 bit11-8
| 03  |     |     |     | 3rd bit3-0(cid:221) bit7-4 |     |
| --- | --- | --- | --- | -------------------------- | --- |
4th bit3-0(cid:221)
bit3-0
| 04         | 1 00 - 7F | MASTER VOLUME       |        | 0 - 127              | 7F  |
| ---------- | --------- | ------------------- | ------ | -------------------- | --- |
| 05         | 1 00 - 7F | MASTER ATTENUATOR   | [Ext.] | 0 - 127              | 00  |
| 06         | 1 28 - 58 | TRANSPOSE           |        | -24 - +24[semitones] | 40  |
| 7D         | n         | DRUM SETUP RESET    |        | n=Drum setup number  |     |
| 7E         | 00        | XG SYSTEM ON        |        | 00=XG sytem ON       |     |
| 7F         | 00        | ALL PARAMETER RESET |        | 00=ON                |     |
| TOTAL SIZE | 07        |                     |        |                      |     |
< “Ext.”(Extension)Table notation >
| no notation | = XGminimum requirement |     |     |     |     |
| ----------- | ----------------------- | --- | --- | --- | --- |
| [Ext.]      | = Optional parameter    |     |     |     |     |

XG MIDI Data Format
<Table 3-2>
XG PARAMETER CHANGE TABLE (System information)
| Address  | Size Data | Parameter  | Ext. | Description   | Default Value |
| -------- | --------- | ---------- | ---- | ------------- | ------------- |
| (H)      | (H)       | (H)        |      |               | (H)           |
| 01 00 00 | E 20 - 7F | Model Name |      | 32-127(ASCII) |               |
:
| 0D         | 20 - 7F |     |     |     |     |
| ---------- | ------- | --- | --- | --- | --- |
| 0E         | 1 00    |     |     |     | 00  |
| 0F         | 1 00    |     |     |     | 00  |
| TOTAL SIZE | 10      |     |     |     |     |
Transmitted in response to Dump Request. Reception is not available.

XG MIDI Data Format
<Table 3-3> (page 1 of 8)
XGPARAMETER CHANGE TABLE (EFFECT 1)
| Address | Size Data | Parameter | Ext. Description | Default Value |
| ------- | --------- | --------- | ---------------- | ------------- |
| (H)     | (H)       | (H)       |                  | (H)           |
02 01 00 2 00-7F REVERB TYPE MSB Refer to XG Effect Map 01(=HALL1)
|     | 00-7F | REVERB TYPE LSB | 00 :basic type | 00  |
| --- | ----- | --------------- | -------------- | --- |
02 1 00-7F REVERB PARAMETER 1 Refer to XG Effect Parameter List Depends on reverb type
03 1 00-7F REVERB PARAMETER 2 Refer to XG Effect Parameter List Depends on reverb type
04 1 00-7F REVERB PARAMETER 3 Refer to XG Effect Parameter List Depends on reverb type
05 1 00-7F REVERB PARAMETER 4 Refer to XG Effect Parameter List Depends on reverb type
06 1 00-7F REVERB PARAMETER 5 Refer to XG Effect Parameter List Depends on reverb type
07 1 00-7F REVERB PARAMETER 6 Refer to XG Effect Parameter List Depends on reverb type
08 1 00-7F REVERB PARAMETER 7 Refer to XG Effect Parameter List Depends on reverb type
09 1 00-7F REVERB PARAMETER 8 Refer to XG Effect Parameter List Depends on reverb type
0A 1 00-7F REVERB PARAMETER 9 Refer to XG Effect Parameter List Depends on reverb type
0B 1 00-7F REVERB PARAMETER 10 Refer to XG Effect Parameter List Depends on reverb type
| 0C         | 1 00-7F | REVERB RETURN | -∞dB...0dB...+6dB(0...64...127) | 40  |
| ---------- | ------- | ------------- | ------------------------------- | --- |
| 0D         | 1 01-7F | REVERB PAN    | L63...C...R63(1...64...127)     | 40  |
| TOTAL SIZE | 0E      |               |                                 |     |

XG MIDI Data Format
<Table 3-3> (page 2 of 8)
XGPARAMETER CHANGE TABLE (EFFECT 1)
| Address | Size Data | Parameter | Ext. Description | Default Value |
| ------- | --------- | --------- | ---------------- | ------------- |
| (H)     | (H)       | (H)       |                  | (H)           |
02 01 10 1 00-7F REVERB PARAMETER 11 [Ext.] Refer to XG Effect Parameter List Depends on reverb type
11 1 00-7F REVERB PARAMETER 12 [Ext.] Refer to XG Effect Parameter List Depends on reverb type
12 1 00-7F REVERB PARAMETER 13 [Ext.] Refer to XG Effect Parameter List Depends on reverb type
13 1 00-7F REVERB PARAMETER 14 [Ext.] Refer to XG Effect Parameter List Depends on reverb type
14 1 00-7F REVERB PARAMETER 15 [Ext.] Refer to XG Effect Parameter List Depends on reverb type
15 1 00-7F REVERB PARAMETER 16 [Ext.] Refer to XG Effect Parameter List Depends on reverb type
| TOTAL SIZE | 6   |     |     |     |
| ---------- | --- | --- | --- | --- |

XG MIDI Data Format
<Table 3-3> (page 3 of 8)
XGPARAMETER CHANGE TABLE (EFFECT 1)
| Address | Size Data | Parameter | Ext. Description | Default Value |
| ------- | --------- | --------- | ---------------- | ------------- |
| (H)     | (H)       | (H)       |                  | (H)           |
02 01 20 2 00-7F CHORUS TYPE MSB Refer to XG Effect Map 41(=CHORUS1)
|     | 00-7F | CHORUS TYPE LSB | 00 :basic type | 00  |
| --- | ----- | --------------- | -------------- | --- |
22 1 00-7F CHORUS PARAMETER 1 Refer to XG Effect Parameter List Depends on chorus type
23 1 00-7F CHORUS PARAMETER 2 Refer to XG Effect Parameter List Depends on chorus type
24 1 00-7F CHORUS PARAMETER 3 Refer to XG Effect Parameter List Depends on chorus type
25 1 00-7F CHORUS PARAMETER 4 Refer to XG Effect Parameter List Depends on chorus type
26 1 00-7F CHORUS PARAMETER 5 Refer to XG Effect Parameter List Depends on chorus type
27 1 00-7F CHORUS PARAMETER 6 Refer to XG Effect Parameter List Depends on chorus type
28 1 00-7F CHORUS PARAMETER 7 Refer to XG Effect Parameter List Depends on chorus type
29 1 00-7F CHORUS PARAMETER 8 Refer to XG Effect Parameter List Depends on chorus type
2A 1 00-7F CHORUS PARAMETER 9 Refer to XG Effect Parameter List Depends on chorus type
2B 1 00-7F CHORUS PARAMETER 10 Refer to XG Effect Parameter List Depends on chorus type
| 2C         | 1 00-7F | CHORUS RETURN         | -∞dB...0dB...+6dB(0...64...127) | 40  |
| ---------- | ------- | --------------------- | ------------------------------- | --- |
| 2D         | 1 01-7F | CHORUS PAN            | L63...C...R63(1...64...127)     | 40  |
| 2E         | 1 00-7F | SEND CHORUS TO REVERB | -∞dB...0dB...+6dB(0...64...127) | 00  |
| TOTAL SIZE | 0F      |                       |                                 |     |

XG MIDI Data Format
<Table 3-3> (page 4 of 8)
XGPARAMETER CHANGE TABLE (EFFECT 1)
| Address | Size Data | Parameter | Ext. Description | Default Value |
| ------- | --------- | --------- | ---------------- | ------------- |
| (H)     | (H)       | (H)       |                  | (H)           |
02 01 30 1 00-7F CHORUS PARAMETER 11 [Ext.] Refer to XG Effect Parameter List Depends on chorus type
31 1 00-7F CHORUS PARAMETER 12 [Ext.] Refer to XG Effect Parameter List Depends on chorus type
32 1 00-7F CHORUS PARAMETER 13 [Ext.] Refer to XG Effect Parameter List Depends on chorus type
33 1 00-7F CHORUS PARAMETER 14 [Ext.] Refer to XG Effect Parameter List Depends on chorus type
34 1 00-7F CHORUS PARAMETER 15 [Ext.] Refer to XG Effect Parameter List Depends on chorus type
35 1 00-7F CHORUS PARAMETER 16 [Ext.] Refer to XG Effect Parameter List Depends on chorus type
| TOTAL SIZE | 6   |     |     |     |
| ---------- | --- | --- | --- | --- |

XG MIDI Data Format
<Table 3-3> (page 5 of 8)
XGPARAMETER CHANGE TABLE (EFFECT 1)
| Address | Size Data Parameter | Ext. Description | Default Value |
| ------- | ------------------- | ---------------- | ------------- |
| (H)     | (H) (H)             |                  | (H)           |
02 01 40 2 00-7F VARIATION TYPE MSB Refer to XG Effect Map 05(=DELAY L,C,R)
|     | 00-7F VARIATION TYPE LSB | 00 :basic type | 00  |
| --- | ------------------------ | -------------- | --- |
42 2 00-7F VARIATION PARAMETER 1 MSB Refer to XG Effect Parameter List Depends on variation type
|     | 00-7F VARIATION PARAMETER 1 LSB | Refer to XG Effect Parameter List | Depends on variation type |
| --- | ------------------------------- | --------------------------------- | ------------------------- |
44 2 00-7F VARIATION PARAMETER 2 MSB Refer to XG Effect Parameter List Depends on variation type
|     | 00-7F VARIATION PARAMETER 2 LSB | Refer to XG Effect Parameter List | Depends on variation type |
| --- | ------------------------------- | --------------------------------- | ------------------------- |
46 2 00-7F VARIATION PARAMETER 3 MSB Refer to XG Effect Parameter List Depends on variation type
|     | 00-7F VARIATION PARAMETER 3 LSB | Refer to XG Effect Parameter List | Depends on variation type |
| --- | ------------------------------- | --------------------------------- | ------------------------- |
48 2 00-7F VARIATION PARAMETER 4 MSB Refer to XG Effect Parameter List Depends on variation type
|     | 00-7F VARIATION PARAMETER 4 LSB | Refer to XG Effect Parameter List | Depends on variation type |
| --- | ------------------------------- | --------------------------------- | ------------------------- |
4A 2 00-7F VARIATION PARAMETER 5 MSB Refer to XG Effect Parameter List Depends on variation type
|     | 00-7F VARIATION PARAMETER 5 LSB | Refer to XG Effect Parameter List | Depends on variation type |
| --- | ------------------------------- | --------------------------------- | ------------------------- |
4C 2 00-7F VARIATION PARAMETER 5 MSB Refer to XG Effect Parameter List Depends on variation type
|     | 00-7F VARIATION PARAMETER 6 LSB | Refer to XG Effect Parameter List | Depends on variation type |
| --- | ------------------------------- | --------------------------------- | ------------------------- |
4E 2 00-7F VARIATION PARAMETER 7 MSB Refer to XG Effect Parameter List Depends on variation type
|     | 00-7F VARIATION PARAMETER 7 LSB | Refer to XG Effect Parameter List | Depends on variation type |
| --- | ------------------------------- | --------------------------------- | ------------------------- |
50 2 00-7F VARIATION PARAMETER 8 MSB Refer to XG Effect Parameter List Depends on variation type
|     | 00-7F VARIATION PARAMETER 8 LSB | Refer to XG Effect Parameter List | Depends on variation type |
| --- | ------------------------------- | --------------------------------- | ------------------------- |

XG MIDI Data Format
<Table 3-3> (page 6 of 8)
XGPARAMETER CHANGE TABLE (EFFECT 1)
| Address | Size Data | Parameter | Ext. Description | Default Value |
| ------- | --------- | --------- | ---------------- | ------------- |
| (H)     | (H)       | (H)       |                  | (H)           |
52 2 00-7F VARIATION PARAMETER 9 MSB Refer to XG Effect Parameter List Depends on variation type
|     | 00-7F | VARIATION PARAMETER 9 LSB | Refer to XG Effect Parameter List | Depends on variation type |
| --- | ----- | ------------------------- | --------------------------------- | ------------------------- |
54 2 00-7F VARIATION PARAMETER 10 MSB Refer to XG Effect Parameter List Depends on variation type
|     | 00-7F   | VARIATION PARAMETER 10 LSB | Refer to XG Effect Parameter List | Depends on variation type |
| --- | ------- | -------------------------- | --------------------------------- | ------------------------- |
| 56  | 1 00-7F | VARIATION RETURN           | -∞dB...0dB...+6dB(0...64...127)   | 40                        |
| 57  | 1 01-7F | VARIATION PAN              | L63...C...R63(1...64...127)       | 40                        |
| 58  | 1 00-7F | SEND VARIATION TO REVERB   | -∞dB...0dB...+6dB(0...64...127)   | 00                        |
| 59  | 1 00-7F | SEND VARIATION TO CHORUS   | -∞dB...0dB...+6dB(0...64...127)   | 00                        |
| 5A  | 1 00-01 | VARIATION CONNECTION       | 0:INSERTION,1:SYSTEM              | 00                        |
| 5B  | 1 00-01 | VARIATION PART             | Part1...64(0...63)                | 7F                        |
AD1...AD63(64...126)
OFF(127)

XG MIDI Data Format
<Table 3-3> (page 7 of 8)
XGPARAMETER CHANGE TABLE (EFFECT 1)
| Address    | Size Data Parameter                  | Ext. Description | Default Value |
| ---------- | ------------------------------------ | ---------------- | ------------- |
| (H)        | (H) (H)                              |                  | (H)           |
| 5C         | 1 00-7F MW VARIATION CONTROL DEPTH   | [Ext.] -64 - +63 | 40            |
| 5D         | 1 00-7F BEND VARIATION CONTROL DEPTH | [Ext.] -64 - +63 | 40            |
| 5E         | 1 00-7F CAT VARIATION CONTROL DEPTH  | [Ext.] -64 - +63 | 40            |
| 5F         | 1 00-7F AC1 VARIATION CONTROL DEPTH  | [Ext.] -64 - +63 | 40            |
| 60         | 1 00-7F AC2 VARIATION CONTROL DEPTH  | [Ext.] -64 - +63 | 40            |
| TOTAL SIZE | 21                                   |                  |               |

XG MIDI Data Format
<Table 3-3> (page 8 of 8)
XGPARAMETER CHANGE TABLE (EFFECT 1)
| Address | Size Data Parameter | Ext. Description | Default Value |
| ------- | ------------------- | ---------------- | ------------- |
| (H)     | (H) (H)             |                  | (H)           |
02 01 70 1 00-7F VARIATION PARAMETER 11 [Ext.] Refer to XG Effect Parameter List Depends on variation type
71 1 00-7F VARIATION PARAMETER 12 [Ext.] Refer to XG Effect Parameter List Depends on variation type
72 1 00-7F VARIATION PARAMETER 13 [Ext.] Refer to XG Effect Parameter List Depends on variation type
73 1 00-7F VARIATION PARAMETER 14 [Ext.] Refer to XG Effect Parameter List Depends on variation type
74 1 00-7F VARIATION PARAMETER 15 [Ext.] Refer to XG Effect Parameter List Depends on variation type
75 1 00-7F VARIATION PARAMETER 16 [Ext.] Refer to XG Effect Parameter List Depends on variation type
| TOTAL SIZE | 6   |     |     |
| ---------- | --- | --- | --- |

XG MIDI Data Format
<Table 3-4> (page 1 of 2)
XGPARAMETER CHANGE TABLE (MULTI EQ)
| Address  | Size Data | Parameter | Ext. Description | Default Value |
| -------- | --------- | --------- | ---------------- | ------------- |
| (H)      | (H)       | (H)       |                  | (H)           |
| 02 40 00 | 1 00 - 04 | EQ type   | [Ext.] 0:FLAT    | 00            |
1:JAZZ
2:POPS
3:ROCK
4:CLASSIC
| 01  | 1 34 -4C | EQ gain1      | [Ext.] -12 - +12[dB]          | 40  |
| --- | -------- | ------------- | ----------------------------- | --- |
| 02  | 1 04-28  | EQ frequency1 | [Ext.] 32-2000[Hz]            | 0C  |
| 03  | 1 01-78  | EQ Q1         | [Ext.] 0.1-12.0               | 07  |
| 04  | 1 00-01  | EQ shape1     | [Ext.] 00:shelving,01:peaking | 00  |
| 05  | 1 34 -4C | EQ gain2      | [Ext.] -12 - +12[dB]          | 40  |
| 06  | 1 0E-36  | EQ frequency2 | [Ext.] 100-10.0[kHz]          | 1C  |
| 07  | 1 01-78  | EQ Q2         | [Ext.] 0.1-12.0               | 07  |
| 08  | 1        | not used      | [Ext.]                        |     |
| 09  | 1 34 -4C | EQ gain3      | [Ext.] -12 - +12[dB]          | 40  |
| 0A  | 1 0E-36  | EQ frequency3 | [Ext.] 100-10.0[kHz]          | 22  |
| 0B  | 1 01-78  | EQ Q3         | [Ext.] 0.1-12.0               | 07  |
| 0C  | 1        | not used      | [Ext.]                        |     |
| 0D  | 1 34 -4C | EQ gain4      | [Ext.] -12 - +12[dB]          | 40  |
| 0E  | 1 0E-36  | EQ frequency4 | [Ext.] 100-10.0[kHz]          | 2E  |

XG MIDI Data Format
<Table 3-4> (page 2 of 2)
XGPARAMETER CHANGE TABLE (MULTI EQ)
| Address    | Size Data | Parameter     | Ext. Description              | Default Value |
| ---------- | --------- | ------------- | ----------------------------- | ------------- |
| (H)        | (H)       | (H)           |                               | (H)           |
| 0F         | 1 01-78   | EQ Q4         | [Ext.] 0.1-12.0               | 07            |
| 10         | 1         | not used      | [Ext.]                        |               |
| 11         | 1 34 -4C  | EQ gain5      | [Ext.] -12 - +12[dB]          | 40            |
| 12         | 1 1C-3A   | EQ frequency5 | [Ext.] 0.5-16.0[kHz]          | 3C            |
| 13         | 1 01-78   | EQ Q5         | [Ext.] 0.1-12.0               | 07            |
| 14         | 1 00-01   | EQ shape5     | [Ext.] 00:shelving,01:peaking | 00            |
| TOTAL SIZE | 15        |               |                               |               |

XG MIDI Data Format
<Table 3-5> (page 1 of 2)
XG PARAMETER CHANGE TABLE (EFFECT 2)
| Address | SizeDataParameter |         | Ext. Description | Default Value |
| ------- | ----------------- | ------- | ---------------- | ------------- |
| (H)     |                   | (H) (H) |                  | (H)           |
03 00 00 2 00-7F INSERTION EFFECT 1 TYPE MSB [Ext.] Refer toXG Effect Map 49(=DISTORTION)
|     | 00-7F | INSERTION EFFECT 1 TYPE LSB | [Ext.] 00 :basic type | 00  |
| --- | ----- | --------------------------- | --------------------- | --- |
02 1 00-7F INSERTION EFFECT 1 PARAMETER1 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
03 1 00-7F INSERTION EFFECT 1 PARAMETER2 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
04 1 00-7F INSERTION EFFECT 1 PARAMETER3 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
05 1 00-7F INSERTION EFFECT 1 PARAMETER4 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
06 1 00-7F INSERTION EFFECT 1 PARAMETER5 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
07 1 00-7F INSERTION EFFECT 1 PARAMETER6 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
08 1 00-7F INSERTION EFFECT 1 PARAMETER7 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
09 1 00-7F INSERTION EFFECT 1 PARAMETER8 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
0A 1 00-7F INSERTION EFFECT 1 PARAMETER9 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
0B 1 00-7F INSERTION EFFECT 1 PARAMETER10 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
| 0C  | 1 00-7F | INSERTION EFFECT 1 PART | [Ext.] Part1...64(0...63) | 7F  |
| --- | ------- | ----------------------- | ------------------------- | --- |
AD1...AD63(64...126)
OFF(127)

XG MIDI Data Format
<Table 3-5> (page 2 of 2)
XG PARAMETER CHANGE TABLE (EFFECT 2)
| Address    | SizeDataParameter                    | Ext. Description | Default Value |
| ---------- | ------------------------------------ | ---------------- | ------------- |
| (H)        | (H) (H)                              |                  | (H)           |
| 0D         | 1 00-7F MW INSERTION CONTROL DEPTH   | [Ext.] -64 - +63 | 40            |
| 0E         | 1 00-7F BEND INSERTION CONTROL DEPTH | [Ext.] -64 - +63 | 40            |
| 0F         | 1 00-7F CAT INSERTION CONTROL DEPTH  | [Ext.] -64 - +63 | 40            |
| 10         | 1 00-7F AC1 INSERTION CONTROL DEPTH  | [Ext.] -64 - +63 | 40            |
| 11         | 1 00-7F AC2 INSERTION CONTROL DEPTH  | [Ext.] -64 - +63 | 40            |
| TOTAL SIZE | 12                                   |                  |               |
20 1 00-7F INSERTION EFFECT 1 PARAMETER11 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
21 1 00-7F INSERTION EFFECT 1 PARAMETER12 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
22 1 00-7F INSERTION EFFECT 1 PARAMETER13 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
23 1 00-7F INSERTION EFFECT 1 PARAMETER14 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
24 1 00-7F INSERTION EFFECT 1 PARAMETER15 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
25 1 00-7F INSERTION EFFECT 1 PARAMETER16 [Ext.] Refer to XG Effect Parameter List Depends on insertion 1 type
| TOTAL SIZE | 6   |     |     |
| ---------- | --- | --- | --- |
*Data Range differs according to Effect type.

XG MIDI Data Format
<Table 3-6> (page 1 of 2)
XG PARAMETER CHANGE TABLE (DISPLAY DATA)
| Address  | Size Data  | Parameter      | Ext. Description     | Default Value |
| -------- | ---------- | -------------- | -------------------- | ------------- |
| (H)      | (H)        | (H)            |                      | (H)           |
| 06 00 00 | 20 20 - 7F | DISPLAY LETTER | [Ext.] 32-127(ASCII) |               |
:
1F
| TOTAL SIZE | 20         |                      |                |     |
| ---------- | ---------- | -------------------- | -------------- | --- |
| 07 vh 00   | 30 00 - 7F | DISPLAY BITMAP Data0 | [Ext.] 0 - 127 |     |
| :          |            | :                    |                |     |
| 2F         |            | Data47               |                |     |
| TOTAL SIZE | 30         |                      |                |     |
v:Vertical extension (0 ~ 7)
h:Horizontal extension (0 ~ F)
Single display is 16 x 16 dots,so maximum display is 256 dots (h) by 128 dots (v).
Relation of data and display:
Each data byte defines seven contiguous pixels in the horizontal direction.
A bit value of “1”sets the pixel ON,“0”sets it OFF.

XG MIDI Data Format
<Table 3-6> (page 2 of 2)
XG PARAMETER CHANGE TABLE (DISPLAY DATA)
Alignment of data on the screen is as follows.
b6  b5  b4  b3  b2  b1  b0 b6  b5  b4  b3  b2  b1  b0 b6  b5  b4  b3  b2  b1  b0 (“b”= “bit”)
Data0 *    *    *    *   *    *   * Data16 *    *   *    *    *    *   * Data32 *    *    -     -    -    -    -
| Data1  | Data17 | Data33 |
| ------ | ------ | ------ |
| Data2  | Data18 | Data34 |
| Data3  | Data19 | Data35 |
| Data4  | Data20 | Data36 |
| Data5  | Data21 | Data37 |
| Data6  | Data22 | Data38 |
| Data7  | Data23 | Data39 |
| Data8  | Data24 | Data40 |
| Data9  | Data25 | Data41 |
| Data10 | Data26 | Data42 |
| Data11 | Data27 | Data43 |
| Data12 | Data28 | Data44 |
| Data13 | Data29 | Data45 |
| Data14 | Data30 | Data46 |
| Data15 | Data31 | Data47 |
For Data32~Data 47,only b6 and b5 are effective.
It is possible to limit reception of bitmap data to selected pixels only,while leaving unselected pixels in their existing display state.
It is also possible to start transmission of Display Data parameter-change data from any arbitrary point.

XG MIDI Data Format
<Table 3-7> (page 1 of 8)
XG PARAMETER CHANGE TABLE (MULTI PART)
| Address | Size Data    | Parameter       | Ext. Description | Default Value     |
| ------- | ------------ | --------------- | ---------------- | ----------------- |
| (H)     | (H)          | (H)             |                  | (H)               |
| 08nn 00 | 1 00 - 20    | ELEMENT RESERVE | 0 - 32           | part10=0,other =2 |
| nn 01   | 1 00 - 7F    | BANK SELECT MSB | 0 - 127          | part10=7F,other=0 |
| nn 02   | 1 00 - 7F    | BANK SELECT LSB | 0 - 127          | 00                |
| nn 03   | 1 00 - 7F    | PROGRAM NUMBER  | 1 - 128          | 00                |
| nn 04   | 1 00 - 0F,7F | Rcv CHANNEL     | 1 - 16,OFF       | Part No.          |
| nn 05   | 1 00 - 01    | MONO/POLY MODE  | 0:MONO           | 01                |
1:POLY
| nn 06 | 1 00 - 02 | SAME NOTE NUMBER | 0:SINGLE | 01  |
| ----- | --------- | ---------------- | -------- | --- |
KEY ON ASSIGN 1:MULTI
2:INST (for DRUM)
| nn 07 | 1 00 - 05 | PART MODE | 0:NORMAL | 00 (Part other than 10) |
| ----- | --------- | --------- | -------- | ----------------------- |
1:DRUM 02 (Part10)
2 - 5:DRUMS1 - 4 04,05 = [Ext.]
| nn 08 | 1 28 - 58 | NOTE SHIFT | -24 - +24[semitones] | 40    |
| ----- | --------- | ---------- | -------------------- | ----- |
| nn 09 | 2 00 - FF | DETUNE     | -12.8 - +12.7[Hz]    | 08 00 |
nn 0A 1st bit3-0(cid:221) bit7-4
2nd bit3-0(cid:221)
bit3-0
| nn 0B | 1 00 - 7F | VOLUME | 0 - 127 | 64  |
| ----- | --------- | ------ | ------- | --- |

XG MIDI Data Format
<Table 3-7> (page 2 of 8)
XG PARAMETER CHANGE TABLE (MULTI PART)
| Address | Size Data | Parameter             | Ext. Description | Default Value |
| ------- | --------- | --------------------- | ---------------- | ------------- |
| (H)     | (H)       | (H)                   |                  | (H)           |
| nn 0C   | 1 00 - 7F | VELOCITY SENSE DEPTH  | 0 - 127          | 40            |
| nn 0D   | 1 00 - 7F | VELOCITY SENSE OFFSET | 0 - 127          | 40            |
| nn 0E   | 1 00 - 7F | PAN                   | 0:random         | 40            |
L63...C...R63(1...64...127)
| nn 0F | 1 00 - 7F | NOTE LIMIT LOW          | C-2 - G8  | 00  |
| ----- | --------- | ----------------------- | --------- | --- |
| nn 10 | 1 00 - 7F | NOTE LIMIT HIGH         | C-2 - G8  | 7F  |
| nn 11 | 1 00 - 7F | DRY LEVEL               | 0 - 127   | 7F  |
| nn 12 | 1 00 - 7F | CHORUS SEND             | 0 - 127   | 00  |
| nn 13 | 1 00 - 7F | REVERB SEND             | 0 - 127   | 28  |
| nn 14 | 1 00 - 7F | VARIATION SEND          | 0 - 127   | 00  |
| nn 15 | 1 00 - 7F | VIBRATO RATE            | -64 - +63 | 40  |
| nn 16 | 1 00 - 7F | VIBRATO DEPTH           | -64 - +63 | 40  |
| nn 17 | 1 00 - 7F | VIBRATO DELAY           | -64 - +63 | 40  |
| nn 18 | 1 00 - 7F | FILTER CUTOFF FREQUENCY | -64 - +63 | 40  |
| nn 19 | 1 00 - 7F | FILTER RESONANCE        | -64 - +63 | 40  |
| nn 1A | 1 00 - 7F | EG ATTACK TIME          | -64 - +63 | 40  |
| nn 1B | 1 00 - 7F | EG DECAY TIME           | -64 - +63 | 40  |
| nn 1C | 1 00 - 7F | EG RELEASE TIME         | -64 - +63 | 40  |

XG MIDI Data Format
<Table 3-7> (page 3 of 8)
XG PARAMETER CHANGE TABLE (MULTI PART)
| Address    | Size Data | Parameter              | Ext. Description     | Default Value |
| ---------- | --------- | ---------------------- | -------------------- | ------------- |
| (H)        | (H)       | (H)                    |                      | (H)           |
| nn 1D      | 1 28 - 58 | MW PITCH CONTROL       | -24 - +24[semitones] | 40            |
| nn 1E      | 1 00 - 7F | MW FILTER CONTROL      | -9600 - +9450[cent]  | 40            |
| nn 1F      | 1 00 - 7F | MW AMPLITUDE CONTROL   | -100 - +100[%]       | 40            |
| nn 20      | 1 00 - 7F | MW LFO PMOD DEPTH      | 0 - 127              | 0A            |
| nn 21      | 1 00 - 7F | MW LFO FMOD DEPTH      | 0 - 127              | 00            |
| nn 22      | 1 00 - 7F | MW LFO AMOD DEPTH      | [Ext.] 0 - 127       | 00            |
| nn 23      | 1 28 - 58 | BEND PITCH CONTROL     | -24 - +24[semitones] | 42            |
| nn 24      | 1 00 - 7F | BEND FILTER CONTROL    | -9600 - +9450[cent]  | 40            |
| nn 25      | 1 00 - 7F | BEND AMPLITUDE CONTROL | -100 - +100[%]       | 40            |
| nn 26      | 1 00 - 7F | BEND LFO PMOD DEPTH    | 0 - 127              | 00            |
| nn 27      | 1 00 - 7F | BEND LFO FMOD DEPTH    | 0 - 127              | 00            |
| nn 28      | 1 00 - 7F | BEND LFO AMOD DEPTH    | [Ext.] 0 - 127       | 00            |
| TOTAL SIZE | 29        |                        |                      |               |

XG MIDI Data Format
<Table 3-7> (page 4 of 8)
XG PARAMETER CHANGE TABLE (MULTI PART)
| Address | Size Data | Parameter                 | Ext. Description | Default Value |
| ------- | --------- | ------------------------- | ---------------- | ------------- |
| (H)     | (H)       | (H)                       |                  | (H)           |
| nn 30   | 1 00 - 01 | Rcv PITCH BEND            | [Ext.] OFF/ON    | 01            |
| nn 31   | 1 00 - 01 | Rcv CH AFTERTOUCH (CAT)   | [Ext.] OFF/ON    | 01            |
| nn 32   | 1 00 - 01 | Rcv PROGRAM CHANGE        | [Ext.] OFF/ON    | 01            |
| nn 33   | 1 00 - 01 | Rcv CONTROL CHANGE        | [Ext.] OFF/ON    | 01            |
| nn 34   | 1 00 - 01 | Rcv POLY AFTERTOUCH (PAT) | [Ext.] OFF/ON    | 01            |
| nn 35   | 1 00 - 01 | Rcv NOTE MESSAGE          | [Ext.] OFF/ON    | 01            |
| nn 36   | 1 00 - 01 | Rcv RPN                   | [Ext.] OFF/ON    | 01            |
| nn 37   | 1 00 - 01 | Rcv NRPN                  | [Ext.] OFF/ON    | 01            |
| nn 38   | 1 00 - 01 | Rcv MODULATION            | [Ext.] OFF/ON    | 01            |
| nn 39   | 1 00 - 01 | Rcv VOLUME                | [Ext.] OFF/ON    | 01            |
| nn 3A   | 1 00 - 01 | Rcv PAN                   | [Ext.] OFF/ON    | 01            |
| nn 3B   | 1 00 - 01 | Rcv EXPRESSION            | [Ext.] OFF/ON    | 01            |
| nn 3C   | 1 00 - 01 | Rcv HOLD1                 | [Ext.] OFF/ON    | 01            |
| nn 3D   | 1 00 - 01 | Rcv PORTAMENTO            | [Ext.] OFF/ON    | 01            |
| nn 3E   | 1 00 - 01 | Rcv SOSTENUTO             | [Ext.] OFF/ON    | 01            |
| nn 3F   | 1 00 - 01 | Rcv SOFT PEDAL            | [Ext.] OFF/ON    | 01            |
| nn 40   | 1 00 - 01 | Rcv BANK SELECT           | [Ext.] OFF/ON    | 01            |

XG MIDI Data Format
<Table 3-7> (page 5 of 8)
XG PARAMETER CHANGE TABLE (MULTI PART)
| Address | Size Data | Parameter             | Ext. Description            | Default Value |
| ------- | --------- | --------------------- | --------------------------- | ------------- |
| (H)     | (H)       | (H)                   |                             | (H)           |
| nn 41   | 1 00 - 7F | SCALE TUNING C        | [Ext.] -64 - +63[cent]      | 40            |
| nn 42   | 1 00 - 7F | SCALE TUNING C#       | [Ext.] -64 - +63[cent]      | 40            |
| nn 43   | 1 00 - 7F | SCALE TUNING D        | [Ext.] -64 - +63[cent]      | 40            |
| nn 44   | 1 00 - 7F | SCALE TUNING D#       | [Ext.] -64 - +63[cent]      | 40            |
| nn 45   | 1 00 - 7F | SCALE TUNING E        | [Ext.] -64 - +63[cent]      | 40            |
| nn 46   | 1 00 - 7F | SCALE TUNING F        | [Ext.] -64 - +63[cent]      | 40            |
| nn 47   | 1 00 - 7F | SCALE TUNING F#       | [Ext.] -64 - +63[cent]      | 40            |
| nn 48   | 1 00 - 7F | SCALE TUNING G        | [Ext.] -64 - +63[cent]      | 40            |
| nn 49   | 1 00 - 7F | SCALE TUNING G#       | [Ext.] -64 - +63[cent]      | 40            |
| nn 4A   | 1 00 - 7F | SCALE TUNING A        | [Ext.] -64 - +63[cent]      | 40            |
| nn 4B   | 1 00 - 7F | SCALE TUNING A#       | [Ext.] -64 - +63[cent]      | 40            |
| nn 4C   | 1 00 - 7F | SCALE TUNING B        | [Ext.] -64 - +63[cent]      | 40            |
| nn 4D   | 1 28 - 58 | CAT PITCH CONTROL     | [Ext.] -24 - +24[semitones] | 40            |
| nn 4E   | 1 00 - 7F | CAT FILTER CONTROL    | [Ext.] -9600 - +9450[cent]  | 40            |
| nn 4F   | 1 00 - 7F | CAT AMPLITUDE CONTROL | [Ext.] -100 - +100[%]       | 40            |
| nn 50   | 1 00 - 7F | CAT LFO PMOD DEPTH    | [Ext.] 0 - 127              | 00            |
| nn 51   | 1 00 - 7F | CAT LFO FMOD DEPTH    | [Ext.] 0 - 127              | 00            |
| nn 52   | 1 00 - 7F | CAT LFO AMOD DEPTH    | [Ext.] 0 - 127              | 00            |

XG MIDI Data Format
<Table 3-7> (page 6 of 8)
XG PARAMETER CHANGE TABLE (MULTI PART)
| Address | Size Data | Parameter             | Ext. Description            | Default Value |
| ------- | --------- | --------------------- | --------------------------- | ------------- |
| (H)     | (H)       | (H)                   |                             | (H)           |
| nn 53   | 1 28 - 58 | PAT PITCH CONTROL     | [Ext.] -24 - +24[semitones] | 40            |
| nn 54   | 1 00 - 7F | PAT FILTER CONTROL    | [Ext.] -9600 - +9450[cent]  | 40            |
| nn 55   | 1 00 - 7F | PAT AMPLITUDE CONTROL | [Ext.] -100 - +100[%]       | 40            |
| nn 56   | 1 00 - 7F | PAT LFO PMOD DEPTH    | [Ext.] 0 - 127              | 00            |
| nn 57   | 1 00 - 7F | PAT LFO FMOD DEPTH    | [Ext.] 0 - 127              | 00            |
| nn 58   | 1 00 - 7F | PAT LFO AMOD DEPTH    | [Ext.] 0 - 127              | 00            |
| nn 59   | 1 00 - 5F | AC1 CONTROLLER NUMBER | [Ext.] 0 - 95               | 10            |
| nn 5A   | 1 28 - 58 | AC1 PITCH CONTROL     | [Ext.] -24 - +24[semitones] | 40            |
| nn 5B   | 1 00 - 7F | AC1 FILTER CONTROL    | [Ext.] -9600 - +9450[cent]  | 40            |
| nn 5C   | 1 00 - 7F | AC1 AMPLITUDE CONTROL | [Ext.] -100 - +100[%]       | 40            |
| nn 5D   | 1 00 - 7F | AC1 LFO PMOD DEPTH    | [Ext.] 0 - 127              | 00            |
| nn 5E   | 1 00 - 7F | AC1 LFO FMOD DEPTH    | [Ext.] 0 - 127              | 00            |
| nn 5F   | 1 00 - 7F | AC1 LFO AMOD DEPTH    | [Ext.] 0 - 127              | 00            |

XG MIDI Data Format
<Table 3-7> (page 7 of 8)
XG PARAMETER CHANGE TABLE (MULTI PART)
| Address    | Size Data | Parameter              | Ext. Description            | Default Value |
| ---------- | --------- | ---------------------- | --------------------------- | ------------- |
| (H)        | (H)       | (H)                    |                             | (H)           |
| nn 60      | 1 00 - 5F | AC2 CONTROLLER NUMBER  | [Ext.] 0 - 95               | 11            |
| nn 61      | 1 28 - 58 | AC2 PITCH CONTROL      | [Ext.] -24 - +24[semitones] | 40            |
| nn 62      | 1 00 - 7F | AC2 FILTER CONTROL     | [Ext.] -9600 - +9450[cent]  | 40            |
| nn 63      | 1 00 - 7F | AC2 AMPLITUDE CONTROL  | [Ext.] -100 - +100[%]       | 40            |
| nn 64      | 1 00 - 7F | AC2 LFO PMOD DEPTH     | [Ext.] 0 - 127              | 00            |
| nn 65      | 1 00 - 7F | AC2 LFO FMOD DEPTH     | [Ext.] 0 - 127              | 00            |
| nn 66      | 1 00 - 7F | AC2 LFO AMOD DEPTH     | [Ext.] 0 - 127              | 00            |
| nn 67      | 1 00 - 01 | PORTAMENTO SWITCH      | [Ext.] OFF/ON               | 00            |
| nn 68      | 1 00 - 7F | PORTAMENTO TIME        | [Ext.] 0 - 127              | 00            |
| nn 69      | 1 00 - 7F | PITCH EG INITIAL LEVEL | [Ext.] -64 - +63            | 40            |
| nn 6A      | 1 00 - 7F | PITCH EG ATTACK TIME   | [Ext.] -64 - +63            | 40            |
| nn 6B      | 1 00 - 7F | PITCH EG RELEASE LEVEL | [Ext.] -64 - +63            | 40            |
| nn 6C      | 1 00 - 7F | PITCH EG RELEASE TIME  | [Ext.] -64 - +63            | 40            |
| nn 6D      | 1 01 - 7F | VELOCITY LIMIT LOW     | [Ext.] 1 - 127              | 00            |
| nn 6E      | 1 01 - 7F | VELOCITY LIMIT HIGH    | [Ext.] 1 - 127              | 7F            |
| TOTAL SIZE | 3F        |                        |                             |               |
nn = PartNumber

XG MIDI Data Format
<Table 3-7> (page 8 of 8)
XG PARAMETER CHANGE TABLE (MULTI PART)
Note:For DRUM PART,the following parameters are ineffective.
• BANK SELECT LSB
• PORTAMENTO
• SOFT PEDAL
• MONO/POLY
• SCALE TUNING
• POLY AFTERTOUCH
• PITCH EG

XG MIDI Data Format
<Table 3-8> (page 1 of 5)
XG PARAMETER CHANGE TABLE (A/D PART)
| Address  | Size Data    | Parameter       | Ext. Description                   | Default Value |
| -------- | ------------ | --------------- | ---------------------------------- | ------------- |
| (H)      | (H)          | (H)             |                                    | (H)           |
| 10 nn 00 | 1 00 - 01    | INPUT GAIN      | [Ext.] 0:MIC,1:LINE                | 00            |
| 01       | 1 00 - 7F    | BANK SELECT MSB | [Ext.] 0 - 127                     | 00            |
| 02       | 1 00 - 7F    | BANK SELECT LSB | [Ext.] 0 - 127                     | 00            |
| 03       | 1 00 - 7F    | PROGRAM NUMBER  | [Ext.] 1 - 128                     | 00            |
| 04       | 1 00 - 1F,7F | Rcv CHANNEL     | [Ext.] A1 - A16,B1 - B16,OFF       | 7F            |
| 05       | 1            | NOT USED        | [Ext.]                             |               |
| 06       | 1            | NOT USED        | [Ext.]                             |               |
| 07       | 1            | NOT USED        | [Ext.]                             |               |
| 08       | 1            | NOT USED        | [Ext.]                             |               |
| 09       | 1            | NOT USED        | [Ext.]                             |               |
| 0A       | 1            | NOT USED        | [Ext.]                             |               |
| 0B       | 1 00 - 7F    | VOLUME          | [Ext.] 0 - 127                     | 00            |
| 0C       | 1            | NOT USED        | [Ext.]                             |               |
| 0D       | 1            | NOT USED        | [Ext.]                             |               |
| 0E       | 1 01 - 7F    | PAN             | [Ext.] L63...C...R63(1...64...127) | 40            |
| 0F       | 1            | NOT USED        | [Ext.]                             |               |
| 10       | 1            | NOT USED        | [Ext.]                             |               |
| 11       | 1 00 - 7F    | DRY LEVEL       | [Ext.] 0 - 127                     | 7F            |
| 12       | 1 00 - 7F    | CHORUS SEND     | [Ext.] 0 - 127                     | 00            |

XG MIDI Data Format
<Table 3-8> (page 2 of 5)
XG PARAMETER CHANGE TABLE (A/D PART)
| Address    | Size Data | Parameter          | Ext. Description | Default Value |
| ---------- | --------- | ------------------ | ---------------- | ------------- |
| (H)        | (H)       | (H)                |                  | (H)           |
| 13         | 1 00 - 7F | REVERB SEND        | [Ext.] 0 - 127   | 00            |
| 14         | 1 00 - 7F | VARIATION SEND     | [Ext.] 0 - 127   | 00            |
| TOTAL SIZE | 15        |                    |                  |               |
| 10 nn 30   | 1         | NOT USED           | [Ext.]           |               |
| 31         | 1         | NOT USED           | [Ext.]           |               |
| 32         | 1 00 - 01 | Rcv PROGRAM CHANGE | [Ext.] OFF/ON    | 01            |
| 33         | 1 00 - 01 | Rcv CONTROL CHANGE | [Ext.] OFF/ON    | 01            |
| 34         | 1         | NOT USED           | [Ext.]           |               |
| 35         | 1         | NOT USED           | [Ext.]           |               |
| 36         | 1         | NOT USED           | [Ext.]           |               |
| 37         | 1         | NOT USED           | [Ext.]           |               |
| 38         | 1         | NOT USED           | [Ext.]           |               |
| 39         | 1 00 - 01 | Rcv VOLUME         | [Ext.] OFF/ON    | 01            |
| 3A         | 1 00 - 01 | Rcv PAN            | [Ext.] OFF/ON    | 01            |
| 3B         | 1 00 - 01 | Rcv EXPRESSION     | [Ext.] OFF/ON    | 01            |
| 3C         | 1         | NOT USED           | [Ext.]           |               |
| 3D         | 1         | NOT USED           | [Ext.]           |               |
| 3E         | 1         | NOT USED           | [Ext.]           |               |

XG MIDI Data Format
<Table 3-8> (page 3 of 5)
XG PARAMETER CHANGE TABLE (A/D PART)
| Address | Size Data | Parameter       | Ext. Description | Default Value |
| ------- | --------- | --------------- | ---------------- | ------------- |
| (H)     | (H)       | (H)             |                  | (H)           |
| 3F      | 1         | NOT USED        | [Ext.]           |               |
| 40      | 1 00 - 01 | Rcv BANK SELECT | [Ext.] OFF/ON    | 01            |
| 41      | 1         | NOT USED        | [Ext.]           |               |
| 42      | 1         | NOT USED        | [Ext.]           |               |
| 43      | 1         | NOT USED        | [Ext.]           |               |
| 44      | 1         | NOT USED        | [Ext.]           |               |
| 45      | 1         | NOT USED        | [Ext.]           |               |
| 46      | 1         | NOT USED        | [Ext.]           |               |
| 47      | 1         | NOT USED        | [Ext.]           |               |
| 48      | 1         | NOT USED        | [Ext.]           |               |
| 49      | 1         | NOT USED        | [Ext.]           |               |
| 4A      | 1         | NOT USED        | [Ext.]           |               |
| 4B      | 1         | NOT USED        | [Ext.]           |               |
| 4C      | 1         | NOT USED        | [Ext.]           |               |

XG MIDI Data Format
<Table 3-8> (page 4 of 5)
XG PARAMETER CHANGE TABLE (A/D PART)
| Address | Size Data | Parameter | Ext. Description | Default Value |
| ------- | --------- | --------- | ---------------- | ------------- |
| (H)     | (H)       | (H)       |                  | (H)           |
| 4D      | 1         | NOT USED  | [Ext.]           |               |
| 4E      | 1         | NOT USED  | [Ext.]           |               |
| 4F      | 1         | NOT USED  | [Ext.]           |               |
| 50      | 1         | NOT USED  | [Ext.]           |               |
| 51      | 1         | NOT USED  | [Ext.]           |               |
| 52      | 1         | NOT USED  | [Ext.]           |               |
| 53      | 1         | NOT USED  | [Ext.]           |               |
| 54      | 1         | NOT USED  | [Ext.]           |               |
| 55      | 1         | NOT USED  | [Ext.]           |               |
| 56      | 1         | NOT USED  | [Ext.]           |               |
| 57      | 1         | NOT USED  | [Ext.]           |               |
| 58      | 1         | NOT USED  | [Ext.]           |               |

XG MIDI Data Format
<Table 3-8> (page 5 of 5)
XG PARAMETER CHANGE TABLE (A/D PART)
| Address    | Size Data  | Parameter             | Ext. Description  | Default Value |
| ---------- | ---------- | --------------------- | ----------------- | ------------- |
| (H)        | (H)        | (H)                   |                   | (H)           |
| 59         | 1 00 - 5F  | AC1 CONTROLLER NUMBER | [Ext.] 0 - 95     | 10            |
| 5A         | 1          | NOT USED              | [Ext.]            |               |
| 5B         | 1          | NOT USED              | [Ext.]            |               |
| 5C         | 1          | NOT USED              | [Ext.]            |               |
| 5D         | 1          | NOT USED              | [Ext.]            |               |
| 5E         | 1          | NOT USED              | [Ext.]            |               |
| 5F         | 1          | NOT USED              | [Ext.]            |               |
| 60         | 1 00 - 5F  | AC2 CONTROLLER NUMBER | [Ext.] 0 - 95     | 11            |
| TOTAL SIZE | 31         |                       |                   |               |
| 11 00 nn   | 64 00 - 01 | A/D SETUP             | [Ext.] 0:Mono x 2 | 00            |
1:Stereo
| TOTALSIZE | 64  |     |     |     |
| --------- | --- | --- | --- | --- |
nn:A/D Part number (0 - 63)

XG MIDI Data Format
<Table 3-9> (page 1 of 2)
XG PARAMETER CHANGE TABLE (DRUM SETUP)
| Address  | Size Data | Parameter       | Ext. | Description     | Default Value   |
| -------- | --------- | --------------- | ---- | --------------- | --------------- |
| (H)      | (H)       | (H)             |      |                 | (H)             |
| 3n rr 00 | 1 00 - 7F | PITCH COARSE    |      | -64 - +63       | 40              |
| 3n rr 01 | 1 00 - 7F | PITCH FINE      |      | -64 - +63[cent] | 40              |
| 3n rr 02 | 1 00 - 7F | LEVEL           |      | 0 - 127         | Depends on note |
| 3n rr 03 | 1 00 - 7F | ALTERNATE GROUP |      | 0:OFF           | Depends on note |
1 - 127
| 3n rr 04 | 1 00 - 7F | PAN |     | 0:random | Depends on note |
| -------- | --------- | --- | --- | -------- | --------------- |
1:L63
:
64:C(center)
:
127:R63
| 3n rr 05 | 1 00 - 7F | REVERB SEND    |     | 0 - 127  | Depends on note |
| -------- | --------- | -------------- | --- | -------- | --------------- |
| 3n rr 06 | 1 00 - 7F | CHORUS SEND    |     | 0 - 127  | Depends on note |
| 3n rr 07 | 1 00 - 7F | VARIATION SEND |     | 0 - 127  | 7F              |
| 3n rr 08 | 1 00 - 01 | KEY ASSIGN     |     | 0:SINGLE | 00              |
1:MULTI
| 3n rr 09 | 1 00 - 01 | Rcv NOTE OFF |     | OFF/ON | Depends on note |
| -------- | --------- | ------------ | --- | ------ | --------------- |
| 3n rr 0A | 1 00 - 01 | Rcv NOTE ON  |     | OFF/ON | 01              |

XG MIDI Data Format
<Table 3-9> (page 2 of 2)
XG PARAMETER CHANGE TABLE (DRUM SETUP)
| Address    | Size Data | Parameter               | Ext. | Description | Default Value |
| ---------- | --------- | ----------------------- | ---- | ----------- | ------------- |
| (H)        | (H)       | (H)                     |      |             | (H)           |
| 3n rr 0B   | 1 00 - 7F | FILTER CUTOFF FREQUENCY |      | -64 - 63    | 40            |
| 3n rr 0C   | 1 00 - 7F | FILTER RESONANCE        |      | -64 - 63    | 40            |
| 3n rr 0D   | 1 00 - 7F | EG ATTACK               |      | -64 - 63    | 40            |
| 3n rr 0E   | 1 00 - 7F | EG DECAY1               |      | -64 - 63    | 40            |
| 3n rr 0F   | 1 00 - 7F | EG DECAY2               |      | -64 - 63    | 40            |
| TOTAL SIZE | 10        |                         |      |             |               |
[Notes]
n: Drum setup number. (A minimum of two setups is required.) n=2,3 :[Ext.]
rr: Note number (0D - 54)
Receipt of “XG System On”or “GM System On”message generates reinitialization of all DRUM SETUP parameters.
“Drum Setup Reset”message can be used to reinitialize drum setup parameters.
Program Changes for the drum kit will reset the contents of the drum setup.
Variation Type “KARAOKE1,KARAOKE2,KARAOKE3”should be supported when A/D part is implemented.
< “Ext.”(Extension)Table notation >
| no notation | = XGminimum requirement |     |     |     |     |
| ----------- | ----------------------- | --- | --- | --- | --- |
| [Ext.]      | = Optional parameter    |     |     |     |     |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
|     |     | KSP | Stereo | Single | Slow | Fast Decay |
| --- | --- | --- | ------ | ------ | ---- | ---------- |
Instrument Pch# Bank 0 Elem Bank 1 Elem Bank 3 Elem Bank 6 Elem Bank 8 Elem Bank 12 Elem
Group
| Piano      | 1 GrandPno  | 1 GrndPnoK | 1   |     |     |     |
| ---------- | ----------- | ---------- | --- | --- | --- | --- |
|            | 2 BritePno  | 1 BritPnoK | 1   |     |     |     |
|            | 3 E.Grand   | 2 ElGrPnoK | 2   |     |     |     |
|            | 4 HnkyTonk  | 2 HnkyTnkK | 2   |     |     |     |
|            | 5 E.Piano1  | 2 El.Pno1K | 1   |     |     |     |
|            | 6 E.Piano2  | 2 El.Pno2K | 1   |     |     |     |
|            | 7 Harpsi.   | 1 Harpsi.K | 1   |     |     |     |
|            | 8 Clavi.    | 2 Clavi.K  | 1   |     |     |     |
| Chromatic  | 9 Celesta   | 1          |     |     |     |     |
| Percussion | 10 Glocken  | 1          |     |     |     |     |
|            | 11 MusicBox | 2          |     |     |     |     |
|            | 12 Vibes    | 1 VibesK   | 1   |     |     |     |
|            | 13 Marimba  | 1 MarimbaK | 1   |     |     |     |
|            | 14 Xylophon | 1          |     |     |     |     |
|            | 15 TubulBel | 1          |     |     |     |     |
|            | 16 Dulcimer | 1          |     |     |     |     |

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Bright
|     | Double  Attack | Dark |     | Rsonant |
| --- | -------------- | ---- | --- | ------- |
Instrument Pch# Bank 14 Elem Bank 16 Elem Bank 17 Elem Bank 18 Elem Bank 19 Elem Bank 20 Elem
Group
| Piano | 1   | MelloGrP | 1   |     |
| ----- | --- | -------- | --- | --- |
2
3
4
|     | 5   | MelloEP1 | 2   |     |
| --- | --- | -------- | --- | --- |
6
7
8
| Chromatic  | 9   |     |     |     |
| ---------- | --- | --- | --- | --- |
| Percussion | 10  |     |     |     |
11
12
13
14
15
16

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
| Attack | Release | Rezo Sweep | Muted | Detune 1 | Detune 2 |     |
| ------ | ------- | ---------- | ----- | -------- | -------- | --- |
Instrument Pch# Bank 24 Elem Bank 25 Elem Bank 27 Elem Bank 28 Elem Bank 32 Elem Bank 33 Elem
Group
Piano 1
2
| 3   |     |     |     | Det.CP80 | 2   |     |
| --- | --- | --- | --- | -------- | --- | --- |
4
|     |     |     |     | Chor.EP1 | 2   |     |
| --- | --- | --- | --- | -------- | --- | --- |
5
| 6   |          |          |     | Chor.EP2 | 2 DX Hard | 2   |
| --- | -------- | -------- | --- | -------- | --------- | --- |
| 7   | Harpsi.2 | 2        |     |          |           |     |
| 8   |          | ClaviWah | 2   |          |           |     |
Chromatic 9
Percussion 10
11
12
13
14
15
16

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Detune 3 Octave 1 Octave 2 5th 1 5th 2 Bend
Instrument Pch# Bank 34 Elem Bank 35 Elem Bank 36 Elem Bank 37 Elem Bank 38 Elem Bank 39 Elem
Group
Piano 1
2
3
4
5
6 DXLegend 2
7 Harpsi.3 2
8
Chromatic 9
Percussion 10
11
12
13
14
15
16

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     | Tutti |     |     | Velo-Switch | Velo-Xfade | other wave |     |
| --- | ----- | --- | --- | ----------- | ---------- | ---------- | --- |
Instrument Pch# Bank 40 Elem Bank 41 Elem Bank 42 Elem Bank 43 Elem Bank 45 Elem Bank 64 Elem
Group
| Piano | 1 PianoStr | 2 Dream | 2   |     |     |     |     |
| ----- | ---------- | ------- | --- | --- | --- | --- | --- |
2
|     | 3 ElGrPno1 | 2 ElGrPno2 | 2   |     |     |     |     |
| --- | ---------- | ---------- | --- | --- | --- | --- | --- |
4
|     | 5 HardEl.P |     |     |     | VX El.P1 | 2 60sEl.P | 1   |
| --- | ---------- | --- | --- | --- | -------- | --------- | --- |
2
|     | 6 DX Phase | 2 DX+Analg | 2 DXKotoEP | 2   | VX El.P2 | 2   |     |
| --- | ---------- | ---------- | ---------- | --- | -------- | --- | --- |
7
|            | 8   |     |     |     |          | PulseClv | 1   |
| ---------- | --- | --- | --- | --- | -------- | -------- | --- |
| Chromatic  | 9   |     |     |     |          |          |     |
| Percussion | 10  |     |     |     |          |          |     |
|            | 11  |     |     |     |          | Orgel    | 2   |
|            | 12  |     |     |     | HardVibe | 2        |     |
|            | 13  |     |     |     |          | SineMrmb | 2   |
14
15
16

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Instrument Pch# Bank 65 Elem Bank 66 Elem Bank 67 Elem Bank 68 Elem Bank 69 Elem Bank 70 Elem
Group
Piano 1
2
3
4
5
6
7
8 PierceCl 2
Chromatic 9
Percussion 10
11
12
13
14
15
16

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 71 | Elem Bank 72 | Elem Bank 96 | Elem Bank 97 | Elem |
| ---------- | ------------ | ------------ | ------------ | ------------ | ---- |
Group
| Piano | 1   |     |     |     |     |
| ----- | --- | --- | --- | --- | --- |
2
3
4
5
6
7
8
| Chromatic  | 9   |     |     |     |     |
| ---------- | --- | --- | --- | --- | --- |
| Percussion | 10  |     |     |     |     |
11
12
|     | 13  |     | Balafon | 2 Balafon2 | 2   |
| --- | --- | --- | ------- | ---------- | --- |
14
|     | 15  |                  | ChrchBel | 2 Carillon | 2                |
| --- | --- | ---------------- | -------- | ---------- | ---------------- |
|     | 16  |                  | Cimbalom | 2 Santur   | 2                |
|     |     | :MU80/MU50 voice |          |            | :MU80 voice only |

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 98 | Elem Bank 99 | Elem Bank 100 | Elem Bank 101 | Elem |
| ---------- | ------------ | ------------ | ------------- | ------------- | ---- |
Group
| Piano | 1   |     |     |     |     |
| ----- | --- | --- | --- | --- | --- |
2
3
4
5
6
7
8
| Chromatic  | 9   |     |     |     |     |
| ---------- | --- | --- | --- | --- | --- |
| Percussion | 10  |     |     |     |     |
11
12
|     | 13 Log Drum | 2   |     |     |     |
| --- | ----------- | --- | --- | --- | --- |
14
15
16

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
Slow
|     |     | KSP | Stereo | Single | Fast Decay |     |
| --- | --- | --- | ------ | ------ | ---------- | --- |
Instrument Pch# Bank 0 Elem Bank 1 Elem Bank 3 Elem Bank 6 Elem Bank 8 Elem Bank 12 Elem
Group
| Organ  | 17 DrawOrgn  | 1   |                  |     |                  |     |
| ------ | ------------ | --- | ---------------- | --- | ---------------- | --- |
|        | 18 PercOrgn  | 1   |                  |     |                  |     |
|        | 19 RockOrgn  | 2   |                  |     |                  |     |
|        | 20 ChrchOrgn | 2   |                  |     |                  |     |
|        | 21 ReedOrgn  | 1   |                  |     |                  |     |
|        | 22 Acordion  | 2   |                  |     |                  |     |
|        | 23 Harmnica  | 1   |                  |     |                  |     |
|        | 24 TangoAcd  | 2   |                  |     |                  |     |
| Guitar | 25 NylonGtr  | 1   |                  |     |                  |     |
|        | 26 SteelGtr  | 1   |                  |     |                  |     |
|        | 27 Jazz Gtr  | 1   |                  |     |                  |     |
|        | 28 CleanGtr  | 1   |                  |     |                  |     |
|        | 29 Mute.Gtr  | 1   |                  |     |                  |     |
|        | 30 Ovrdrive  | 1   |                  |     |                  |     |
|        | 31 Dist.Gtr  | 1   |                  |     | DstRthmG         | 2   |
|        | 32 GtrHarmo  | 1   |                  |     |                  |     |
|        |              |     | :MU80/MU50 voice |     | :MU80 voice only |     |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
|     | Double  Attack | Bright |     | Dark |     | Rsonant |
| --- | -------------- | ------ | --- | ---- | --- | ------- |
Instrument Pch# Bank 14 Elem Bank 16 Elem Bank 17 Elem Bank 18 Elem Bank 19 Elem Bank 20 Elem
Group
| Organ | 17  |     |     |     |     |     |
| ----- | --- | --- | --- | --- | --- | --- |
18
19
20
21
22
23
24
| Guitar | 25  | NylonGt2 | 1   |          |     |     |
| ------ | --- | -------- | --- | -------- | --- | --- |
|        | 26  | SteelGt2 | 1   |          |     |     |
|        | 27  |          |     | MelloGtr | 1   |     |
28
29
30
31
32

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     | Attack | Release | Rezo Sweep | Muted | Detune 1 | Detune 2 |     |
| --- | ------ | ------- | ---------- | ----- | -------- | -------- | --- |
Instrument Pch# Bank 24 Elem Bank 25 Elem Bank 27 Elem Bank 28 Elem Bank 32 Elem Bank 33 Elem
Group
| Organ | 17          |     |     |     | DetDrwOr | 2 60sDrOr1 | 2   |
| ----- | ----------- | --- | --- | --- | -------- | ---------- | --- |
|       | 18 70sPcOr1 | 2   |     |     | DetPrcOr | 2 LiteOrg  | 2   |
19
|     | 20  |     |     |     | ChurOrg3 | 2   |     |
| --- | --- | --- | --- | --- | -------- | --- | --- |
21
|     | 22  |     |     |     | AccordIt | 2   |     |
| --- | --- | --- | --- | --- | -------- | --- | --- |
|     | 23  |     |     |     | Harmo 2  | 2   |     |
24
| Guitar | 25  | NylonGt3 | 2   |     |     |     |     |
| ------ | --- | -------- | --- | --- | --- | --- | --- |
26
|     | 27  |     |     |     | JazzAmp  | 2   |     |
| --- | --- | --- | --- | --- | -------- | --- | --- |
|     | 28  |     |     |     | ChorusGt | 2   |     |
29
30
|     | 31 DistGtr2 | 2   |     |     |     |     |     |
| --- | ----------- | --- | --- | --- | --- | --- | --- |
32
|     |     | :MU80/MU50 voice |     | :MU80 voice only |     |     |     |
| --- | --- | ---------------- | --- | ---------------- | --- | --- | --- |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
|     | Detune 3 | Octave 1 | Octave 2 | 5th 1 | 5th 2 | Bend |
| --- | -------- | -------- | -------- | ----- | ----- | ---- |
Instrument Pch#Bank 34 Elem Bank 35 Elem Bank 36 Elem Bank 37 Elem Bank 38 Elem Bank 39 Elem
Group
| Organ | 17 60sDrOr2 | 2 70sDrOr1 | 2 DrawOrg2 | 2 60sDrOr3 | 2 EvenBar | 2   |
| ----- | ----------- | ---------- | ---------- | ---------- | --------- | --- |
|       | 18          |            |            | PercOrg2   | 2         |     |
19
|     | 20  | ChurOrg2 | 2   |     |     |     |
| --- | --- | -------- | --- | --- | --- | --- |
21
22
23
24
| Guitar | 25  |          |     |     |     |     |
| ------ | --- | -------- | --- | --- | --- | --- |
|        | 26  | 12StrGtr | 2   |     |     |     |
27
28
29
30
|     | 31  | DistGtr3 | 2 PowerGt2 | 2 PowerGt1 | 2 Dst.5ths | 2   |
| --- | --- | -------- | ---------- | ---------- | ---------- | --- |
32
|     |     | :MU80/MU50 voice |     |     | :MU80 voice only |     |
| --- | --- | ---------------- | --- | --- | ---------------- | --- |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     | Tutti |     |     | Velo-Switch | Velo-Xfade | other wave |     |
| --- | ----- | --- | --- | ----------- | ---------- | ---------- | --- |
Instrument Pch# Bank 40 Elem Bank 41 Elem Bank 42 Elem Bank 43 Elem Bank 45 Elem Bank 64 Elem
Group
| Organ | 17 16+2”2/3 | 2   |     |     |     | Organ Ba | 1   |
| ----- | ----------- | --- | --- | --- | --- | -------- | --- |
18
|     | 19  |     |     |     |     | RotaryOr |     |
| --- | --- | --- | --- | --- | --- | -------- | --- |
2
|     | 20 NotreDam | 2   |     |     |     | OrgFlute | 2   |
| --- | ----------- | --- | --- | --- | --- | -------- | --- |
|     | 21 Puff Org | 2   |     |     |     |          |     |
22
23
|     | 24  |     |     |     |     | TngoAcd2 |     |
| --- | --- | --- | --- | --- | --- | -------- | --- |
2
| Guitar | 25          |            |     | VelGtHrm | 2   |     |     |
| ------ | ----------- | ---------- | --- | -------- | --- | --- | --- |
|        | 26 Nyln&Stl | 2 Stl&Body | 2   |          |     |     |     |
27
|     | 28          |                  |     |          |                  | CleanGt2 | 1   |
| --- | ----------- | ---------------- | --- | -------- | ---------------- | -------- | --- |
|     | 29          | MuteStlG         |     |          | Jazz Man         |          |     |
|     | FunkGtr1    | 2                | 2   | FunkGtr2 | 2                | 1        |     |
|     | 30          |                  |     | Gt.Pinch | 2                |          |     |
|     | 31 FeedbkGt | 2 FeedbGt2       | 2   | RkRythm2 | 2 RockRthm       | 2        |     |
|     | 32          |                  |     |          |                  | AcoHarmo | 1   |
|     |             | :MU80/MU50 voice |     |          | :MU80 voice only |          |     |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |
| --- | --- | --------- | ------------------------- | --- |
Bank Select MSB=00H
Instrument Pch# Bank 65 Elem Bank 66 Elem Bank 67 Elem Bank 68 Elem Bank 69 Elem Bank 70 Elem
Group
| Organ | 17 70sDrOr2 | 2 CheezOrg | 2 DrawOrg3 | 2   |
| ----- | ----------- | ---------- | ---------- | --- |
18
|     | 19 SloRotar | 2 FstRotar | 2   |     |
| --- | ----------- | ---------- | --- | --- |
|     | 20 TrmOrgFl | 2          |     |     |
21
22
23
24
| Guitar | 25  |     |     |     |
| ------ | --- | --- | --- | --- |
26
27
28
29
30
31
|     | 32 GtFeedbk | 1 GtrHrmo2 | 1   |     |
| --- | ----------- | ---------- | --- | --- |

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 71 | Elem Bank 72 | Elem Bank 96 | Elem Bank 97 | Elem |
| ---------- | ------------ | ------------ | ------------ | ------------ | ---- |
Group
| Organ | 17  |     |     |     |     |
| ----- | --- | --- | --- | --- | --- |
18
19
20
21
22
23
24
| Guitar | 25  |     | Ukulele  | 1   |     |
| ------ | --- | --- | -------- | --- | --- |
|        | 26  |     | Mandolin | 2   |     |
|        | 27  |     | PdlSteel | 1   |     |
28
|     | 29  |     | Mu.DstGt | 2   |     |
| --- | --- | --- | -------- | --- | --- |
30
31
32
|     |     | :MU80/MU50 voice |     |     | :MU80 voice only |
| --- | --- | ---------------- | --- | --- | ---------------- |

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 98 | Elem Bank 99 | Elem Bank 100 | Elem Bank 101 | Elem |
| ---------- | ------------ | ------------ | ------------- | ------------- | ---- |
Group
| Organ | 17  |     |     |     |     |
| ----- | --- | --- | --- | --- | --- |
18
19
20
21
22
23
24
| Guitar | 25  |     |     |     |     |
| ------ | --- | --- | --- | --- | --- |
26
27
28
29
30
31
32

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     |     | KSP | Stereo | Single | Slow | Fast Decay |     |
| --- | --- | --- | ------ | ------ | ---- | ---------- | --- |
Instrument Pch# Bank 0 Elem Bank 1 Elem Bank 3 Elem Bank 6 Elem Bank 8 Elem Bank 12 Elem
Group
| Bass    | 33 Aco.Bass | 1   |     |          |           |          |     |
| ------- | ----------- | --- | --- | -------- | --------- | -------- | --- |
|         | 34 FngrBass | 1   |     |          |           |          |     |
|         | 35 PickBass | 1   |     |          |           |          |     |
|         | 36 Fretless | 1   |     |          |           |          |     |
|         | 37 SlapBas1 | 1   |     |          |           |          |     |
|         | 38 SlapBas2 | 1   |     |          |           |          |     |
|         | 39 SynBass1 | 1   |     |          |           |          |     |
|         | 40 SynBass2 | 2   |     | MelloSB1 | 1         | Seq Bass | 2   |
| Strings | 41 Violin   | 1   |     |          | SlowVln   | 1        |     |
|         | 42 Viola    | 1   |     |          |           |          |     |
|         | 43 Cello    | 1   |     |          |           |          |     |
|         | 44 Contrabs | 1   |     |          |           |          |     |
|         | 45 Trem.Str | 1   |     |          | SlowTrStr | 1        |     |
|         | 46 Pizz.Str | 1   |     |          |           |          |     |
|         | 47 Harp     | 1   |     |          |           |          |     |
|         | 48 Timpani  | 1   |     |          |           |          |     |

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Double Attack Bright Dark Rsonant
Instrument Pch# Bank 14 Elem Bank 16 Elem Bank 17 Elem Bank 18 Elem Bank 19 Elem Bank 20 Elem
Group
Bass 33
34 FingrDrk 2
35
36
37
38
39 SynBal Dk 1 FastResB 1
40 ClkSynBa 2 SynBa2Dk 1
Strings 41
42
43
44
45
46
47
48

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
| Attack | Release | Rezo Sweep | Muted | Detune 1 | Detune 2 |     |
| ------ | ------- | ---------- | ----- | -------- | -------- | --- |
Instrument Pch# Bank 24 Elem Bank 25 Elem Bank 27 Elem Bank 28 Elem Bank 32 Elem Bank 33 Elem
Group
Bass 33
| 34  |     | FlangeBa | 2        |          |            |     |
| --- | --- | -------- | -------- | -------- | ---------- | --- |
| 35  |     |          | MutePkBa | 1        |            |     |
| 36  |     |          |          | Fretles2 | 2 Fretles3 | 2   |
| 37  |     | ResoSlap | 1        | PunchThm | 2          |     |
38
| 39 AcidBass | 1   |     |     |          |     |     |
| ----------- | --- | --- | --- | -------- | --- | --- |
| 40          |     |     |     | SmthBa 2 | 2   |     |
Strings 41
42
43
44
45
46
47
48

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Detune 3 Octave 1 Octave 2 5th 1 5th 2 Bend
Instrument Pch#Bank 34 Elem Bank 35 Elem Bank 36 Elem Bank 37 Elem Bank 38 Elem Bank 39 Elem
Group
Bass 33
34
35
36 Fretles4 2
37
38
39 Clv Bass 2
40
Strings 41
42
43
44
45
46
47
48

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     | Tutti |     |     | Velo-Switch | Velo-Xfade | other wave |     |
| --- | ----- | --- | --- | ----------- | ---------- | ---------- | --- |
Instrument Pch# Bank 40 Elem Bank 41 Elem Bank 42 Elem Bank 43 Elem Bank 45 Elem Bank 64 Elem
Group
VXUprght
| Bass | 33 JazzRthm | 2   |     |          |            | 2          |     |
| ---- | ----------- | --- | --- | -------- | ---------- | ---------- | --- |
|      | 34 Ba&DstEG | 2   |     | FngrSlap | 2 FngBass2 | 2 JazzBass | 1   |
35
36
37
|         | 38          |           |     | VeloSlap | 2   |          |     |
| ------- | ----------- | --------- | --- | -------- | --- | -------- | --- |
|         | 39 TeknoBa  | 2         |     |          |     | Oscar    | 2   |
|         | 40 ModulrBa | 2 DX Bass | 2   |          |     | X WireBa | 2   |
| Strings | 41          |           |     |          |     |          |     |
42
43
44
|     | 45 Susp Str | 2   |     |     |     |     |     |
| --- | ----------- | --- | --- | --- | --- | --- | --- |
46
|     | 47 YangChin | 2   |     |     |     |     |     |
| --- | ----------- | --- | --- | --- | --- | --- | --- |
48
|     |     | :MU80/MU50 voice |     |     | :MU80 voice only |     |     |
| --- | --- | ---------------- | --- | --- | ---------------- | --- | --- |

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Instrument Pch# Bank 65 Elem Bank 66 Elem Bank 67 Elem Bank 68 Elem Bank 69 Elem Bank 70 Elem
Group
Bass 33
34 ModAlem 2
35
36
37
38
39 SqrBass 2 RubberBa 2
40
Strings 41
42
43
44
45
46
47
48

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 71 | Elem Bank 72 | Elem Bank 96 | Elem Bank 97 | Elem |
| ---------- | ------------ | ------------ | ------------ | ------------ | ---- |
Group
| Bass | 33  |     |     |     |     |
| ---- | --- | --- | --- | --- | --- |
34
35
|     | 36  |     | SynFret1 | 2 Smooth | 2   |
| --- | --- | --- | -------- | -------- | --- |
37
38
|     | 39  |     | Hammer | 2   |     |
| --- | --- | --- | ------ | --- | --- |
40
| Strings | 41  |     |     |     |     |
| ------- | --- | --- | --- | --- | --- |
42
43
44
45
46
47
48

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 98 | Elem Bank 99 | Elem Bank 100 | Elem Bank 101 | Elem |
| ---------- | ------------ | ------------ | ------------- | ------------- | ---- |
Group
| Bass | 33  |     |     |     |     |
| ---- | --- | --- | --- | --- | --- |
34
35
36
37
38
39
40
| Strings | 41  |     |     |     |     |
| ------- | --- | --- | --- | --- | --- |
42
43
44
45
46
47
48

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     |     | KSP | Stereo | Single | Slow | Fast Decay |     |
| --- | --- | --- | ------ | ------ | ---- | ---------- | --- |
Instrument Pch# Bank 0 Elem Bank 1 Elem Bank 3 Elem Bank 6 Elem Bank 8 Elem Bank 12 Elem
Group
| Ensemble | 49 Strings1 | 1   | S.Strngs | 2        | SlowStr  | 1       |     |
| -------- | ----------- | --- | -------- | -------- | -------- | ------- | --- |
|          | 50 Strings2 | 1   | S.SlwStr | 2        | LegatoSt | 2       |     |
|          | 51 Syn.Str1 | 2   |          |          |          |         |     |
|          | 52 Syn.Str2 | 2   |          |          |          |         |     |
|          | 53 ChoirAah | 1   | S.Choir  | 2        |          |         |     |
|          | 54 VoiceOoh | 1   |          |          |          |         |     |
|          | 55 SynVoice | 1   |          |          |          |         |     |
|          | 56 Orch.Hit | 2   |          |          |          |         |     |
| Brass    | 57 Trumpet  | 1   |          |          |          |         |     |
|          | 58 Trombone | 1   |          |          |          |         |     |
|          | 59 Tuba     | 1   |          |          |          |         |     |
|          | 60 Mute.Trp | 1   |          |          |          |         |     |
|          | 61 Fr.Horn  | 1   |          | FrHrSolo | 2        |         |     |
|          | 62 BrasSect | 1   |          |          |          |         |     |
|          | 63 SynBras1 | 2   |          |          |          | QuackBr | 2   |
|          | 64 SynBras2 | 1   |          |          |          |         |     |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     | Double  Attack | Bright |     | Dark |     | Rsonant |     |
| --- | -------------- | ------ | --- | ---- | --- | ------- | --- |
Instrument Pch# Bank 14 Elem Bank 16 Elem Bank 17 Elem Bank 18 Elem Bank 19 Elem Bank 20 Elem
Group
| Ensemble | 49  |     |     |     |     |     |     |
| -------- | --- | --- | --- | --- | --- | --- | --- |
50
51
52
|     | 53  | Ch.Aahs2 | 2   |     |     |     |     |
| --- | --- | -------- | --- | --- | --- | --- | --- |
54
55
56
| Brass | 57  | Trumpet2 | 1 BriteTrp | 2        |     |     |     |
| ----- | --- | -------- | ---------- | -------- | --- | --- | --- |
|       | 58  |          |            | Trmbone2 | 2   |     |     |
|       | 59  | Tuba 2   | 1          |          |     |     |     |
60
61
|     | 62 SfrzndBr | 2                |     |          |                  |          |     |
| --- | ----------- | ---------------- | --- | -------- | ---------------- | -------- | --- |
|     | 63          |                  |     |          |                  | RezSynBr | 2   |
|     | 64          |                  |     | Soft Brs | 2                |          |     |
|     |             | :MU80/MU50 voice |     |          | :MU80 voice only |          |     |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
Detune 1
|     | Attack | Release | Rezo Sweep | Muted |     | Detune 2 |
| --- | ------ | ------- | ---------- | ----- | --- | -------- |
Instrument Pch# Bank 24 Elem Bank 25 Elem Bank 27 Elem Bank 28 Elem Bank 32 Elem Bank 33 Elem
Group
| Ensemble | 49 ArcoStr | 2   |     |     |     |     |
| -------- | ---------- | --- | --- | --- | --- | --- |
50
|     | 51  |     | ResoStr | 2   |     |     |
| --- | --- | --- | ------- | --- | --- | --- |
52
|     | 53  |     |     |     | MelChoir | 2   |
| --- | --- | --- | --- | --- | -------- | --- |
54
55
56
| Brass | 57  |     |     |     | WarmTrp | 2   |
| ----- | --- | --- | --- | --- | ------- | --- |
58
59
60
FrHorn2
|     | 61  |     |     |     |     | 1   |
| --- | --- | --- | --- | --- | --- | --- |
62
|     | 63 PolyBrss | 2   | SynBras3 | 2   | JumpBrss | 2   |
| --- | ----------- | --- | -------- | --- | -------- | --- |
64

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     | Detune 3 | Octave 1 |          |       | 5th 2 |      |     |
| --- | -------- | -------- | -------- | ----- | ----- | ---- | --- |
|     |          |          | Octave 2 | 5th 1 |       | Bend |     |
Instrument Pch#Bank 34 Elem Bank 35 Elem Bank 36 Elem Bank 37 Elem Bank 38 Elem Bank 39 Elem
Group
| Ensemble | 49  | 60sStrng | 2   |     |     |     |     |
| -------- | --- | -------- | --- | --- | --- | --- | --- |
50
|     |     | Syn Str 3 | 2   |     |     |     |     |
| --- | --- | --------- | --- | --- | --- | --- | --- |
51
52
53
54
55
|     |     | OrchHit2 | 2   |     |     |     |     |
| --- | --- | -------- | --- | --- | --- | --- | --- |
56
| Brass | 57  |     |     |     |     |     |     |
| ----- | --- | --- | --- | --- | --- | --- | --- |
58
59
60
|     | 61  |          |     | HornOrch | 2   |          |     |
| --- | --- | -------- | --- | -------- | --- | -------- | --- |
|     | 62  | Tp&TbSec | 2   |          |     | BrssFall | 1   |
63
64
|     |     | :MU80/MU50 voice |     |     | :MU80 voice only |     |     |
| --- | --- | ---------------- | --- | --- | ---------------- | --- | --- |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     |     |     |     | Velo-Switch | Velo-Xfade | other wave |     |
| --- | --- | --- | --- | ----------- | ---------- | ---------- | --- |
Tutti
Instrument Pch# Bank 40 Elem Bank 41 Elem Bank 42 Elem Bank 43 Elem Bank 45 Elem Bank 64 Elem
Group
| Ensemble | 49 Orchestr | 2 Orchstr2 | 2 TremOrch | 2   | VeloStr | 2      |     |
| -------- | ----------- | ---------- | ---------- | --- | ------- | ------ | --- |
|          | 50 Warm Str | 2 Kingdom  | 2          |     |         | 70sStr | 1   |
Syn Str4
|     | 51  |     |     |     |     |     | 2   |
| --- | --- | --- | --- | --- | --- | --- | --- |
52
|     | 53 ChoirStr | 2        |     |     |     | StrngAah | 1   |
| --- | ----------- | -------- | --- | --- | --- | -------- | --- |
|     | 54          |          |     |     |     | VoiceDoo | 1   |
|     | 55 SynVox2  | 2 Choral | 2   |     |     | AnaVoice | 1   |
Impact
|       | 56  |     |     |     |     |     | 2   |
| ----- | --- | --- | --- | --- | --- | --- | --- |
| Brass | 57  |     |     |     |     |     |     |
58
59
|     | 60  |     |     |     |     | MuteTrp2 | 1   |
| --- | --- | --- | --- | --- | --- | -------- | --- |
61
|     | 62 BrssSec2 | 2 HiBrass        | 2 MelloBrs | 2                |          |            |     |
| --- | ----------- | ---------------- | ---------- | ---------------- | -------- | ---------- | --- |
|     | 63          |                  |            |                  | AnaVelBr | 2 AnaBrss1 | 2   |
|     | 64 SynBrss4 | 2 ChoirBrs       | 2          |                  | VelBrss2 | 2 AnaBrss2 | 2   |
|     |             | :MU80/MU50 voice |            | :MU80 voice only |          |            |     |

|     | <Table 1> | XG Voice List (MU80/MU50) |     |
| --- | --------- | ------------------------- | --- |
Bank Select MSB=00H
Instrument Pch# Bank 65 Elem Bank 66 Elem Bank 67 Elem Bank 68 Elem Bank 69 Elem Bank 70 Elem
Group
Ensemble 49
| 50 Str Ens3 | 1   |     |     |
| ----------- | --- | --- | --- |
| 51 SS Str   | 2   |     |     |
52
| 53 Male Aah | 1   |     |     |
| ----------- | --- | --- | --- |
54
55
| 56 BrssStab | 2 DoublHit | 2 BrStab80 | 2   |
| ----------- | ---------- | ---------- | --- |
Brass 57
58
59
60
61
62
63
64
:MU80/MU50 voice :MU80 voice only

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 71 | Elem Bank 72 | Elem Bank 96 | Elem Bank 97 | Elem |
| ---------- | ------------ | ------------ | ------------ | ------------ | ---- |
Group
| Ensemble | 49  |     |     |     |     |
| -------- | --- | --- | --- | --- | --- |
50
51
52
53
|     | 54  |     | VoiceHmn | 1   |     |
| --- | --- | --- | -------- | --- | --- |
55
56
| Brass | 57  |     | FluglHrn | 1   |     |
| ----- | --- | --- | -------- | --- | --- |
58
59
60
61
62
63
64
|     |     | :MU80/MU50 voice |     |     | :MU80 voice only |
| --- | --- | ---------------- | --- | --- | ---------------- |

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 98 | Elem Bank 99 | Elem Bank 100 | Elem Bank 101 | Elem |
| ---------- | ------------ | ------------ | ------------- | ------------- | ---- |
Group
| Ensemble | 49  |     |     |     |     |
| -------- | --- | --- | --- | --- | --- |
50
51
52
53
54
55
56
| Brass | 57  |     |     |     |     |
| ----- | --- | --- | --- | --- | --- |
58
59
60
61
62
63
64

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
|     |     | KSP | Stereo | Single | Slow | Fast Decay |
| --- | --- | --- | ------ | ------ | ---- | ---------- |
Instrument Pch# Bank 0 Elem Bank 1 Elem Bank 3 Elem Bank 6 Elem Bank 8 Elem Bank 12 Elem
Group
| Reed | 65 SprnoSax | 1   |     |     |     |     |
| ---- | ----------- | --- | --- | --- | --- | --- |
|      | 66 Alto Sax | 1   |     |     |     |     |
|      | 67 TenorSax | 1   |     |     |     |     |
|      | 68 Bari.Sax | 1   |     |     |     |     |
|      | 69 Oboe     | 2   |     |     |     |     |
|      | 70 Eng.Horn | 1   |     |     |     |     |
|      | 71 Bassoon  | 1   |     |     |     |     |
|      | 72 Clarinet | 1   |     |     |     |     |
| Pipe | 73 Piccolo  | 1   |     |     |     |     |
|      | 74 Flute    | 1   |     |     |     |     |
|      | 75 Recorder | 1   |     |     |     |     |
|      | 76 PanFlute | 1   |     |     |     |     |
|      | 77 Bottle   | 2   |     |     |     |     |
|      | 78 Shakhchi | 2   |     |     |     |     |
|      | 79 Whistle  | 1   |     |     |     |     |
|      | 80 Ocarina  | 1   |     |     |     |     |

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Double Attack Bright Dark Rsonant
Instrument Pch# Bank 14 Elem Bank 16 Elem Bank 17 Elem Bank 18 Elem Bank 19 Elem Bank 20 Elem
Group
Reed 65
66
67
68
69
70
71
72
Pipe 73
74
75
76
77
78
79
80

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Attack Release Rezo Sweep Muted Detune 1 Detune 2
Instrument Pch# Bank 24 Elem Bank 25 Elem Bank 27 Elem Bank 28 Elem Bank 32 Elem Bank 33 Elem
Group
Reed 65
66
67
68
69
70
71
72
Pipe 73
74
75
76
77
78
79
80

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Detune 3 Octave 1 Octave 2 5th 1 5th 2 Bend
Instrument Pch#Bank 34 Elem Bank 35 Elem Bank 36 Elem Bank 37 Elem Bank 38 Elem Bank 39 Elem
Group
Reed 65
66
67
68
69
70
71
72
Pipe 73
74
75
76
77
78
79
80

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
| Tutti |     |     | Velo-Switch | Velo-Xfade | other wave |     |
| ----- | --- | --- | ----------- | ---------- | ---------- | --- |
Instrument Pch# Bank 40 Elem Bank 41 Elem Bank 42 Elem Bank 43 Elem Bank 45 Elem Bank 64 Elem
Group
Reed 65
| 66 Sax Sect | 2          |     | HyprAlto | 2   |          |     |
| ----------- | ---------- | --- | -------- | --- | -------- | --- |
| 67 BrthTnSx | 2 SoftTenr | 2   |          |     | TnrSax 2 |     |
1
68
69
70
71
72
Pipe 73
74
75
| 76  |     |     |     |     | PanFlut2 | 1   |
| --- | --- | --- | --- | --- | -------- | --- |
77
78
79
80
|     | :MU80/MU50 voice |     |     | :MU80 voice only |     |     |
| --- | ---------------- | --- | --- | ---------------- | --- | --- |

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Instrument Pch# Bank 65 Elem Bank 66 Elem Bank 67 Elem Bank 68 Elem Bank 69 Elem Bank 70 Elem
Group
Reed 65
66
67
68
69
70
71
72
Pipe 73
74
75
76
77
78
79
80

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 71 | Elem Bank 72 | Elem Bank 96 | Elem Bank 97 | Elem |
| ---------- | ------------ | ------------ | ------------ | ------------ | ---- |
Group
| Reed | 65  |     |     |     |     |
| ---- | --- | --- | --- | --- | --- |
66
67
68
69
70
71
|      | 72  |     | BassClar | 1   |     |
| ---- | --- | --- | -------- | --- | --- |
| Pipe | 73  |     |          |     |     |
74
75
|     | 76  |     | Kawala | 2   |     |
| --- | --- | --- | ------ | --- | --- |
77
78
79
80
|     |     | :MU80/MU50 voice |     |     | :MU80 voice only |
| --- | --- | ---------------- | --- | --- | ---------------- |

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 98 | Elem Bank 99 | Elem Bank 100 | Elem Bank 101 | Elem |
| ---------- | ------------ | ------------ | ------------- | ------------- | ---- |
Group
| Reed | 65  |     |     |     |     |
| ---- | --- | --- | --- | --- | --- |
66
67
68
69
70
71
72
| Pipe | 73  |     |     |     |     |
| ---- | --- | --- | --- | --- | --- |
74
75
76
77
78
79
80

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
|     |     | KSP | Stereo | Single | Slow | Fast Decay |
| --- | --- | --- | ------ | ------ | ---- | ---------- |
Instrument Pch# Bank 0 Elem Bank 1 Elem Bank 3 Elem Bank 6 Elem Bank 8 Elem Bank 12 Elem
Group
LMSquare
| Synth Lead | 81 SquareLd | 2   |     | Square 2 | 1          | 2   |
| ---------- | ----------- | --- | --- | -------- | ---------- | --- |
|            | 82 Saw.Lead | 2   |     | Saw 2    | 1 ThickSaw | 2   |
|            | 83 CaliopLd | 2   |     |          |            |     |
|            | 84 Chiff Ld | 2   |     |          |            |     |
|            | 85 CharanLd | 2   |     |          |            |     |
|            | 86 Voice Ld | 2   |     |          |            |     |
|            | 87 Fifth Ld | 2   |     |          |            |     |
|            | 88 Bass &Ld | 2   |     |          |            |     |
| Synth Pad  | 89 NewAgePd | 2   |     |          |            |     |
|            | 90 Warm Pad | 2   |     |          |            |     |
|            | 91 PolySyPd | 2   |     |          |            |     |
|            | 92 ChoirPad | 2   |     |          |            |     |
|            | 93 BowedPad | 2   |     |          |            |     |
|            | 94 MetalPad | 2   |     |          |            |     |
|            | 95 Halo Pad | 2   |     |          |            |     |
|            | 96 SweepPad | 2   |     |          |            |     |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     | Double  Attack | Bright |     | Dark |     | Rsonant |     |
| --- | -------------- | ------ | --- | ---- | --- | ------- | --- |
Instrument Pch# Bank 14 Elem Bank 16 Elem Bank 17 Elem Bank 18 Elem Bank 19 Elem Bank 20 Elem
Group
| Synth Lead | 81  |     |     | Hollow  | 1 Shmoog  | 2          |     |
| ---------- | --- | --- | --- | ------- | --------- | ---------- | --- |
|            | 82  |     |     | DynaSaw | 1 DigiSaw | 2 Big Lead | 2   |
83
84
85
86
87
|           | 88  | Big&Low  | 2          |           |     |     |     |
| --------- | --- | -------- | ---------- | --------- | --- | --- | --- |
| Synth Pad | 89  |          |            |           |     |     |     |
|           | 90  | ThickPad | 2 Soft Pad | 2 SinePad | 2   |     |     |
91
92
93
94
95
|     | 96  |     |     |     |     | Shwimmer | 2   |
| --- | --- | --- | --- | --- | --- | -------- | --- |

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Attack | Release | Rezo Sweep | Muted | Detune 1 | Detune 2 |
| ------ | ------- | ---------- | ----- | -------- | -------- |
Instrument Pch# Bank 24 Elem Bank 25 Elem Bank 27 Elem Bank 28 Elem Bank 32 Elem Bank 33 Elem
Group
Synth Lead 81
| 82 HeavySyn | 2 WaspySyn | 2   |     |     |     |
| ----------- | ---------- | --- | --- | --- | --- |
83
84
85
| 86 SynthAah | 2   |     |     |     |     |
| ----------- | --- | --- | --- | --- | --- |
87
88
Synth Pad 89
90
91
92
93
94
95
Converge
| 96  |     |     | 2   |     |     |
| --- | --- | --- | --- | --- | --- |

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Detune 3 Octave 1 Octave 2 5th 1 5th 2 Bend
Instrument Pch#Bank 34 Elem Bank 35 Elem Bank 36 Elem Bank 37 Elem Bank 38 Elem Bank 39 Elem
Group
Synth Lead 81
82
83
84
85
86
87 BigFive 2
88
Synth Pad 89
90
91
92
93
94
95
96

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     | Tutti |     |     | Velo-Switch | Velo-Xfade | other wave |     |
| --- | ----- | --- | --- | ----------- | ---------- | ---------- | --- |
Instrument Pch# Bank 40 Elem Bank 41 Elem Bank 42 Elem Bank 43 Elem Bank 45 Elem Bank 64 Elem
Group
| Synth Lead | 81          |            |     |     |          | Mellow   | 2   |
| ---------- | ----------- | ---------- | --- | --- | -------- | -------- | --- |
|            | 82 PulseSaw | 2 Dr. Lead | 2   |     | VeloLead | 2        |     |
|            | 83          |            |     |     |          | Vent Syn |     |
2
|     | 84  |     |     |     |     | Rubby              | 2   |
| --- | --- | --- | --- | --- | --- | ------------------ | --- |
|     | 85  |     |     |     |     | DistLead           | 2   |
|     | 86  |     |     |     |     | VoxLead / Voice Ld | 2   |
87
|     | 88  |     |     |     |     | Fat&Prky |     |
| --- | --- | --- | --- | --- | --- | -------- | --- |
2
| Synth Pad | 89  |     |     |     |     | Fantasy2 | 2   |
| --------- | --- | --- | --- | --- | --- | -------- | --- |
|           | 90  |     |     |     |     | Horn Pad | 2   |
|           | 91  |     |     |     |     | PolyPd80 | 2   |
|           | 92  |     |     |     |     | Heaven2  | 2   |
|           | 93  |     |     |     |     | Glacier  |     |
2
|     | 94  |     |     |     |     | Tine Pad | 2   |
| --- | --- | --- | --- | --- | --- | -------- | --- |
95
|     | 96  |                  |     |                  |     | PolarPad | 2   |
| --- | --- | ---------------- | --- | ---------------- | --- | -------- | --- |
|     |     | :MU80/MU50 voice |     | :MU80 voice only |     |          |     |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |
| --- | --- | --------- | ------------------------- | --- |
Bank Select MSB=00H
Instrument Pch# Bank 65 Elem Bank 66 Elem Bank 67 Elem Bank 68 Elem Bank 69 Elem Bank 70 Elem
Group
| Synth Lead | 81 SoloSine | 2 SineLead | 1   |     |
| ---------- | ----------- | ---------- | --- | --- |
82
|     | 83 Pure Pad | 2   |     |     |
| --- | ----------- | --- | --- | --- |
84
|     | 85 Wire Lead | 2   |     |     |
| --- | ------------ | --- | --- | --- |
86
87
|           | 88 SoftWurl | 2         |            |     |
| --------- | ----------- | --------- | ---------- | --- |
| Synth Pad | 89          |           |            |     |
|           | 90 RotarStr | 2         |            |     |
|           | 91 ClickPad | 2 Ana Pad | 2 SquarPad | 2   |
|           | 92 Lite Pad | 2 Itopia  | 2 CC Pad   | 2   |
|           | 93 GlassPad | 2         |            |     |
|           | 94 PanPad   | 2         |            |     |
95
|     | 96 Sweepy / SweepPad | 2 Celstial | 2   |     |
| --- | -------------------- | ---------- | --- | --- |
:MU80/MU50 voice :MU80 voice only

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 71 | Elem Bank 72 | Elem Bank 96 | Elem Bank 97 | Elem |
| ---------- | ------------ | ------------ | ------------ | ------------ | ---- |
Group
| Synth Lead | 81  |     |         |     |     |
| ---------- | --- | --- | ------- | --- | --- |
|            | 82  |     | Seq Ana | 2   |     |
83
84
85
86
87
88
| Synth Pad | 89  |     |     |     |     |
| --------- | --- | --- | --- | --- | --- |
90
91
92
93
94
95
96

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 98 | Elem Bank 99 | Elem Bank 100 | Elem Bank 101 | Elem |
| ---------- | ------------ | ------------ | ------------- | ------------- | ---- |
Group
| Synth Lead | 81  |     |     |     |     |
| ---------- | --- | --- | --- | --- | --- |
82
83
84
85
86
87
88
| Synth Pad | 89  |     |     |     |     |
| --------- | --- | --- | --- | --- | --- |
90
91
92
93
94
95
96

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     |     | KSP | Stereo | Single | Slow | Fast Decay |     |
| --- | --- | --- | ------ | ------ | ---- | ---------- | --- |
Instrument Pch# Bank 0 Elem Bank 1 Elem Bank 3 Elem Bank 6 Elem Bank 8 Elem Bank 12 Elem
Group
| Synth Effects | 97 Rain      | 2   |     |     |          |          |     |
| ------------- | ------------ | --- | --- | --- | -------- | -------- | --- |
|               | 98 SoundTrk  | 2   |     |     |          |          |     |
|               | 99 Crystal   | 2   |     |     |          | SynDrCmp | 2   |
|               | 100 Atmosphr | 2   |     |     |          |          |     |
|               | 101 Bright   | 2   |     |     |          |          |     |
|               | 102 Goblins  | 2   |     |     |          |          |     |
|               | 103 Echoes   | 2   |     |     | EchoPad2 | 2        |     |
|               | 104 Sci-Fi   | 2   |     |     |          |          |     |
| Ethnic        | 105 Sitar    | 1   |     |     |          |          |     |
|               | 106 Banjo    | 1   |     |     |          |          |     |
|               | 107 Shamisen | 1   |     |     |          |          |     |
|               | 108 Koto     | 1   |     |     |          |          |     |
|               | 109 Kalimba  | 1   |     |     |          |          |     |
|               | 110 Bagpipe  | 2   |     |     |          |          |     |
|               | 111 Fiddle   | 1   |     |     |          |          |     |
|               | 112 Shanai   | 1   |     |     |          |          |     |

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Double Attack Bright Dark Rsonant
Instrument Pch# Bank 14 Elem Bank 16 Elem Bank 17 Elem Bank 18 Elem Bank 19 Elem Bank 20 Elem
Group
Synth Effects 97
98
99 Popcorn 2 TinyBell 2
100 WarmAtms 2 HollwRls 2
101
102
103 Echo Pan 2
104
Ethnic 105
106
107
108
109
110
111
112

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
|     | Attack | Release | Rezo Sweep | Muted | Detune 1 | Detune 2 |
| --- | ------ | ------- | ---------- | ----- | -------- | -------- |
Instrument Pch# Bank 24 Elem Bank 25 Elem Bank 27 Elem Bank 28 Elem Bank 32 Elem Bank 33 Elem
Group
| Synth Effects | 97  |     |          |     |     |     |
| ------------- | --- | --- | -------- | --- | --- | --- |
|               | 98  |     | Prologue | 2   |     |     |
99
100
101
102
103
104
| Ethnic | 105 |     |     |          | DetSitar | 2   |
| ------ | --- | --- | --- | -------- | -------- | --- |
|        | 106 |     |     | MuteBnjo | 1        |     |
107
108
109
110
111
112

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
|     | Detune 3 | Octave 1 | Octave 2 | 5th 1 | 5th 2 | Bend |
| --- | -------- | -------- | -------- | ----- | ----- | ---- |
Pch#Bank 34
Instrument Elem Bank 35 Elem Bank 36 Elem Bank 37 Elem Bank 38 Elem Bank 39 Elem
Group
| Synth Effects | 97  |     |     |     |     |     |
| ------------- | --- | --- | --- | --- | --- | --- |
98
|     | 99  | RndGlock | 2   |     |     |     |
| --- | --- | -------- | --- | --- | --- | --- |
100
101
102
103
104
| Ethnic | 105 | Sitar 2 | 2   |     |     |     |
| ------ | --- | ------- | --- | --- | --- | --- |
106
107
108
109
110
111
112

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
|     | Tutti |     |     | Velo-Switch | Velo-Xfade | other wave |     |
| --- | ----- | --- | --- | ----------- | ---------- | ---------- | --- |
Instrument Pch# Bank 40 Elem Bank 41 Elem Bank 42 Elem Bank 43 Elem Bank 45 Elem Bank 64 Elem
Group
| Synth Effects | 97          |            |            |     | ClaviPad | 2 HrmoRain | 2   |
| ------------- | ----------- | ---------- | ---------- | --- | -------- | ---------- | --- |
|               | 98          |            |            |     |          | Ancestrl   | 2   |
|               | 99 GlockChi | 2 ClearBel | 2 ChorBell | 2   |          | SynMalet   |     |
1
|     | 100 NylonEP | 2   |     |     |     | NylnHarp | 2   |
| --- | ----------- | --- | --- | --- | --- | -------- | --- |
|     | 101         |     |     |     |     | FantaBel | 2   |
|     | 102         |     |     |     |     | GobSyn   | 2   |
|     | 103         |     |     |     |     | EchoBell | 2   |
|     | 104         |     |     |     |     | Starz    |     |
2
| Ethnic | 105 |     |     |     |     |     |     |
| ------ | --- | --- | --- | --- | --- | --- | --- |
106
107
108
|     | 109 |     |     |     |     | BigKalim |     |
| --- | --- | --- | --- | --- | --- | -------- | --- |
2
110
111
|     | 112 |                  |     |                  |     | Shanai2 | 1   |
| --- | --- | ---------------- | --- | ---------------- | --- | ------- | --- |
|     |     | :MU80/MU50 voice |     | :MU80 voice only |     |         |     |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=00H
Elem
Instrument Pch# Bank 65 Elem Bank 66 Elem Bank 67 Bank 68 Elem Bank 69 Elem Bank 70 Elem
Group
| Synth Effects | 97 AfrcnWnd | 2 Caribean | 2          |            |            |            |     |
| ------------- | ----------- | ---------- | ---------- | ---------- | ---------- | ---------- | --- |
|               | 98 Rave     | 2          |            |            |            |            |     |
|               | 99 SftCryst | 2 LoudGlok | 2 XmasBell | 2 VibeBell | 2 DigiBell | 2 Airbells | 2   |
2
|     | 100 Harp Vox | 2 AtmosPad | 2 Planet |     |     |     |     |
| --- | ------------ | ---------- | -------- | --- | --- | --- | --- |
101
|        | 102 50sSciFi | 2 Ring Pad | 2 Ritual   | 2 ToHeaven | 2 MilkyWay | 2 Night | 2   |
| ------ | ------------ | ---------- | ---------- | ---------- | ---------- | ------- | --- |
|        | 103 Big Pan  | 2 SynPiano | 2 Creation | 2 Stardust | 2 Reso Pan | 2       |     |
|        | 104 Odyssey  | 2          |            |            |            |         |     |
| Ethnic | 105          |            |            |            |            |         |     |
106
107
108
109
110
111
112
|     |     | :MU80/MU50 voice |     |     | :MU80 voice only |     |     |
| --- | --- | ---------------- | --- | --- | ---------------- | --- | --- |

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 71 | Elem Bank 72 | Elem Bank 96 | Elem Bank 97 | Elem |
| ---------- | ------------ | ------------ | ------------ | ------------ | ---- |
Group
| Synth Effects | 97  |     |     |     |     |
| ------------- | --- | --- | --- | --- | --- |
98
|     | 99 BellHarp | 2 Gamelmba | 2   |     |     |
| --- | ----------- | ---------- | --- | --- | --- |
100
|     | 101         |         | Smokey     | 2   |     |
| --- | ----------- | ------- | ---------- | --- | --- |
|     | 102 Glisten | 2 Puffy | 2 BelChoir | 2   |     |
103
104
| Ethnic | 105 |     | Tambra  | 2 Tamboura | 2   |
| ------ | --- | --- | ------- | ---------- | --- |
|        | 106 |     | Rabab   | 2 Gopichnt | 2   |
|        | 107 |     | Tsugaru | 2          |     |
|        | 108 |     | T. Koto | 2 Kanoon   | 2   |
109
110
111
Pungi
|     | 112 |                  |     | 1 Hichriki | 2                |
| --- | --- | ---------------- | --- | ---------- | ---------------- |
|     |     | :MU80/MU50 voice |     |            | :MU80 voice only |

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 98 | Elem Bank 99 | Elem Bank 100 | Elem Bank 101 | Elem |
| ---------- | ------------ | ------------ | ------------- | ------------- | ---- |
Group
| Synth Effects | 97  |     |     |     |     |
| ------------- | --- | --- | --- | --- | --- |
98
99
100
101
102
103
104
| Ethnic | 105     |     |     |     |     |
| ------ | ------- | --- | --- | --- | --- |
|        | 106 Oud | 2   |     |     |     |
107
108
109
110
111
112

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
|     |     | KSP | Stereo | Single | Slow | Fast Decay |
| --- | --- | --- | ------ | ------ | ---- | ---------- |
Instrument Pch# Bank 0 Elem Bank 1 Elem Bank 3 Elem Bank 6 Elem Bank 8 Elem Bank 12 Elem
Group
| Percussive    | 113 TnklBell | 2   |     |     |     |     |
| ------------- | ------------ | --- | --- | --- | --- | --- |
|               | 114 Agogo    | 2   |     |     |     |     |
|               | 115 SteelDrm | 2   |     |     |     |     |
|               | 116 WoodBlok | 1   |     |     |     |     |
|               | 117 TaikoDrm | 1   |     |     |     |     |
|               | 118 MelodTom | 2   |     |     |     |     |
|               | 119 Syn.Drum | 1   |     |     |     |     |
|               | 120 RevCymbl | 1   |     |     |     |     |
| Sound Effects | 121 FretNoiz | 2   |     |     |     |     |
|               | 122 BrthNoiz | 2   |     |     |     |     |
|               | 123 Seashore | 2   |     |     |     |     |
|               | 124 Tweet    | 2   |     |     |     |     |
|               | 125 Telphone | 1   |     |     |     |     |
|               | 126 Helicptr | 1   |     |     |     |     |
|               | 127 Applause | 1   |     |     |     |     |
|               | 128 Gunshot  | 1   |     |     |     |     |

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Double Attack Bright Dark Rsonant
Instrument Pch# Bank 14 Elem Bank 16 Elem Bank 17 Elem Bank 18 Elem Bank 19 Elem Bank 20 Elem
Group
Percussive 113
114
115
116
117
118
119
120
Sound Effects 121
122
123
124
125
126
127
128

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Attack Release Rezo Sweep Muted Detune 1 Detune 2
Instrument Pch# Bank 24 Elem Bank 25 Elem Bank 27 Elem Bank 28 Elem Bank 32 Elem Bank 33 Elem
Group
Percussive 113
114
115
116
117
118
119
120
Sound Effects 121
122
123
124
125
126
127
128

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Detune 3 Octave 1 Octave 2 5th 1 5th 2 Bend
Instrument Pch#Bank 34 Elem Bank 35 Elem Bank 36 Elem Bank 37 Elem Bank 38 Elem Bank 39 Elem
Group
Percussive 113
114
115
116
117
118
119
120
Sound Effects 121
122
123
124
125
126
127
128

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Tutti Velo-Switch Velo-Xfade other wave
Instrument Pch# Bank 40 Elem Bank 41 Elem Bank 42 Elem Bank 43 Elem Bank 45 Elem Bank 64 Elem
Group
Percussive 113
114
115
116
117
118 Mel Tom2 1
119 Ana Tom 1
120 Rev Cym2 1
Sound Effects 121
122
123
124
125
126
127
128
:MU80/MU50 voice :MU80 voice only

<Table 1> XG Voice List (MU80/MU50)
Bank Select MSB=00H
Instrument Pch# Bank 65 Elem Bank 66 Elem Bank 67 Elem Bank 68 Elem Bank 69 Elem Bank 70 Elem
Group
Percussive 113
114
115
116
117
118 Real Tom 2 Rock Tom 2
119 ElecPerc 2
120
Sound Effects 121
122
123
124
125
126
127
128

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 71 | Elem Bank 72 | Elem Bank 96 | Elem Bank 97 | Elem |
| ---------- | ------------ | ------------ | ------------ | ------------ | ---- |
Group
| Percussive | 113 |     | Bonang   | 2 Gender | 2   |
| ---------- | --- | --- | -------- | -------- | --- |
|            | 114 |     | Atrigane | 2        |     |
115
|     |     |     | Tablas   | 2 GlasPerc | 2   |
| --- | --- | --- | -------- | ---------- | --- |
|     | 116 |     | Castanet | 1          |     |
|     | 117 |     | Gr.Cassa | 1          |     |
118
119
120
|               |     |     | RevSnar1 | 1 RevSnar2 | 1   |
| ------------- | --- | --- | -------- | ---------- | --- |
| Sound Effects | 121 |     |          |            |     |
122
123
124
125
126
127
128
|     |     | :MU80/MU50 voice |     |     | :MU80 voice only |
| --- | --- | ---------------- | --- | --- | ---------------- |

|     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |
| --- | --------- | ------------------------- | --- | --- | --- |
Bank Select MSB=00H
| Instrument | Pch# Bank 98 | Elem Bank 99 | Elem Bank 100 | Elem Bank 101 | Elem |
| ---------- | ------------ | ------------ | ------------- | ------------- | ---- |
Group
| Percussive | 113 Gamelan | 2 S.Gamlan | 2 Rama Cym | 2 AsianBel | 2   |
| ---------- | ----------- | ---------- | ---------- | ---------- | --- |
114
|     | 115 ThaiBell | 2   |     |     |     |
| --- | ------------ | --- | --- | --- | --- |
116
117
118
119
|               | 120 RevKick1 | 1 RevConBD | 1 Rev Tom1 | 1 Rev Tom2 | 1   |
| ------------- | ------------ | ---------- | ---------- | ---------- | --- |
| Sound Effects | 121          |            |            |            |     |
122
123
124
125
126
127
128
|     |     | :MU80/MU50 voice |     |     | :MU80 voice only |
| --- | --- | ---------------- | --- | --- | ---------------- |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=40H
| SFX |     | SFX |     | SFX |     | SFX |     |
| --- | --- | --- | --- | --- | --- | --- | --- |
Pch# Bank 0 Elem Pch# Bank 0 Elem Pch# Bank 0 Elem Pch# Bank 0 Elem
| 1 CuttngNz  | 1                | 17 Fl.KClik | 1   | 33 Rain          | 1   | 49 Dog     | 1   |
| ----------- | ---------------- | ----------- | --- | ---------------- | --- | ---------- | --- |
| 2 CuttngNz2 | 2                | 18          |     | 34 Thunder       | 1   | 50 Horse   | 1   |
| 3 DstCutNz  | 2                | 19          |     | 35 Wind          | 1   | 51 Bird 2  | 1   |
| 4 Str Slap  | 1                | 20          |     | 36 Stream        | 2   | 52 Kitty   | 1   |
| 5 B.Slide   | 2                | 21          |     | 37 Bubble        | 2   | 53 Growl   | 1   |
| 6 P.Scrape  | 1                | 22          |     | 38 Feed          | 2   | 54 Haunted | 2   |
| 7           |                  | 23          |     | 39               |     | 55 Ghost   | 2   |
| 8           |                  | 24          |     | 40               |     | 56 Maou    | 2   |
| 9           |                  | 25          |     | 41               |     | 57         |     |
| 10          |                  | 26          |     | 42               |     | 58         |     |
| 11          |                  | 27          |     | 43               |     | 59         |     |
| 12          |                  | 28          |     | 44               |     | 60         |     |
| 13          |                  | 29          |     | 45               |     | 61         |     |
| 14          |                  | 30          |     | 46               |     | 62         |     |
| 15          |                  | 31          |     | 47               |     | 63         |     |
| 16          |                  | 32          |     | 48               |     | 64         |     |
|             | :MU80/MU50 voice |             |     | :MU80 voice only |     | :No sound  |     |

|     |     | <Table 1> | XG Voice List (MU80/MU50) |     |     |     |     |
| --- | --- | --------- | ------------------------- | --- | --- | --- | --- |
Bank Select MSB=40H
| SFX |     | SFX |     | SFX |     | SFX |     |
| --- | --- | --- | --- | --- | --- | --- | --- |
Pch# Bank 0 Elem Pch# Bank 0 Elem Pch# Bank 0 Elem Pch# Bank 0 Elem
| 65 Tel.Dial  | 1                | 81 CarEngin | 1   | 97 Laughing      | 1 113 | MchinGun  | 1   |
| ------------ | ---------------- | ----------- | --- | ---------------- | ----- | --------- | --- |
| 66 DoorSqek  | 1                | 82 Car Stop | 1   | 98 Scream        | 1 114 | LaserGun  | 2   |
| 67 Door Slam | 1                | 83 Car Pass | 1   | 99 Punch         | 1 115 | Xplosion  | 2   |
| 68 Scratch   | 1                | 84 CarCrash | 1   | 100 Heart        | 1 116 | FireWork  | 2   |
| 69 Scratch 2 | 2                | 85 Siren    | 2   | 101 FootStep     | 1 117 |           |     |
| 70 WindChm   | 1                | 86 Train    | 1   | 102 Applaus2     | 1 118 |           |     |
| 71 Telphon2  | 1                | 87 Jetplane | 2   | 103              | 119   |           |     |
| 72           |                  | 88 Starship | 2   | 104              | 120   |           |     |
| 73           |                  | 89 Burst    | 2   | 105              | 121   |           |     |
| 74           |                  | 90 Coaster  | 2   | 106              | 122   |           |     |
| 75           |                  | 91 SbMarine | 2   | 107              | 123   |           |     |
| 76           |                  | 92          |     | 108              | 124   |           |     |
| 77           |                  | 93          |     | 109              | 125   |           |     |
| 78           |                  | 94          |     | 110              | 126   |           |     |
| 79           |                  | 95          |     | 111              | 127   |           |     |
| 80           |                  | 96          |     | 112              | 128   |           |     |
|              | :MU80/MU50 voice |             |     | :MU80 voice only |       | :No sound |     |

|           | <Table 2> | XG Drum Map (MU80/MU50) |     |     |     |     |
| --------- | --------- | ----------------------- | --- | --- | --- | --- |
| Bank MSB# | 127       | 127                     | 127 | 127 | 127 | 127 |
Program #
|     | 1   | 2   | 9   | 17  | 25  | 26  |
| --- | --- | --- | --- | --- | --- | --- |
Key Alternate
|                       | Standard Kit | Standard2 Kit | Room Kit | Rock Kit | Electro Kit | Analog Kit |
| --------------------- | ------------ | ------------- | -------- | -------- | ----------- | ---------- |
| Note# Note Off assign |              |               |          |          |             |            |
| 13 C# -1 3            | Surdo Mute   |               |          |          |             |            |
| 14 D  -1 3            | Surdo Open   |               |          |          |             |            |
| 15 D# -1              | Hi Q         |               |          |          |             |            |
| 16 E -1               | Whip Slap    |               |          |          |             |            |
Scratch Push
| 17 F  -1 4 |                 |     |     |     |     |     |
| ---------- | --------------- | --- | --- | --- | --- | --- |
| 18 F# -1 4 | Scratch Pull    |     |     |     |     |     |
| 19 G -1    | Finger Snap     |     |     |     |     |     |
| 20 G# -1   | Click Noise     |     |     |     |     |     |
| 21 A -1    | Metronome Click |     |     |     |     |     |
Metronome Bell
22 A# -1
| 23 B -1 | Seq Click L |     |     |     |     |     |
| ------- | ----------- | --- | --- | --- | --- | --- |
| 24 C 0  | Seq Click H |     |     |     |     |     |
| 25 C# 0 | BrushTap    |     |     |     |     |     |
o
| 26 D 0 | Brush Swirl L |     |     |     |     |     |
| ------ | ------------- | --- | --- | --- | --- | --- |
Brush Slap
27 D# 0
o
| 28 E 0 | Brush Swirl H |     |     |     | Reverse Cymbal | Reverse Cymbal |
| ------ | ------------- | --- | --- | --- | -------------- | -------------- |
:Same as Standard Kit

<Table 2> XG Drum Map (MU80/MU50)
Bank MSB# 127 127 127 126 126
Program # 33 41 49 1 2
Key Alternate
Note# Note Off assign Jazz Kit Brush Kit Classic Kit SFX 1 SFX 2
13 C# -1 3
14 D -1 3
15 D# -1
16 E -1
17 F -1 4
18 F# -1 4
19 G -1
20 G# -1
21 A -1
22 A# -1
23 B -1
24 C 0
25 C# 0
o
26 D 0
27 D# 0
o
28 E 0
:Same as Standard Kit :No Sound

|           |     | <Table 2> | XG Drum Map (MU80/MU50) |     |     |     |     |
| --------- | --- | --------- | ----------------------- | --- | --- | --- | --- |
| Bank MSB# |     | 127       | 127                     | 127 | 127 | 127 | 127 |
Program #
|     |     | 1   | 2   | 9   | 17  | 25  | 26  |
| --- | --- | --- | --- | --- | --- | --- | --- |
Key Alternate
|                |        | Standard Kit | Standard2 Kit | Room Kit | Rock Kit | Electro Kit | Analog Kit |
| -------------- | ------ | ------------ | ------------- | -------- | -------- | ----------- | ---------- |
| Note# Note Off | assign |              |               |          |          |             |            |
o
| 29 F 0  | Snare Roll  |     | Snare Roll 2 |     |             |               |             |
| ------- | ----------- | --- | ------------ | --- | ----------- | ------------- | ----------- |
| 30 F# 0 | Castanet    |     |              |     |             | Hi Q          | Hi Q        |
| 31 G 0  | Snare L     |     | Snare L 2    |     | SD Rock M   | Snare M       | SDRock H    |
| 32 G# 0 | Sticks      |     |              |     |             |               |             |
|         | Bass Drum L |     |              |     | Bass Drum M | Bass Drum H 4 | Bass Drum M |
33 A 0
| 34 A# 0 | Open Rim Shot |     | OpenRimShot2 |     |     |     |     |
| ------- | ------------- | --- | ------------ | --- | --- | --- | --- |
35 B 0 Bass DrumM Bass Drum M 2 Bass Drum H 3 BD Rock BD Analog L
36 C 1 Bass DrumH Bass Drum H 2 BD Room BD Rock BD Gate BDAnalog H
| 37 C# 1 | Side Stick |     |           |           |         |          | AnalogSideStick |
| ------- | ---------- | --- | --------- | --------- | ------- | -------- | --------------- |
|         | Snare M    |     | Snare M 2 | SD Room L | SD Rock | SDRock L | Analog Snare L  |
38 D 1
| 39 D# 1 | Hand Clap |     |     |     |     |     |     |
| ------- | --------- | --- | --- | --- | --- | --- | --- |
40 E 1 Snare H Snare H 2 SD Room H SD Rock Rim SD Rock H Analog Snare H
41 F 1 Floor Tom L Room Tom 1 Rock Tom 1 E Tom 1 Analog Tom 1
| 42 F# 1 | 1 Hi-Hat Closed |     |     |            |            |         | AnalogHHClosed 1 |
| ------- | --------------- | --- | --- | ---------- | ---------- | ------- | ---------------- |
|         | Floor Tom H     |     |     | Room Tom 2 | Rock Tom 2 | E Tom 2 | Analog Tom 2     |
43 G 1
| 44 G# 1 | 1 Hi-Hat Pedal |     |                       |     |     |                  | AnalogHHClosed 2 |
| ------- | -------------- | --- | --------------------- | --- | --- | ---------------- | ---------------- |
|         |                |     | :Same as Standard Kit |     |     | :MU80 voice only |                  |

|     |           | <Table 2> | XG Drum Map (MU80/MU50) |     |     |     |     |     |
| --- | --------- | --------- | ----------------------- | --- | --- | --- | --- | --- |
|     | Bank MSB# |           | 127                     | 127 | 127 |     | 126 | 126 |
Program #
|       |          |           | 33       | 41        | 49          |     | 1     | 2     |
| ----- | -------- | --------- | -------- | --------- | ----------- | --- | ----- | ----- |
|       | Key      | Alternate |          |           |             |     |       |       |
|       |          |           | Jazz Kit | Brush Kit | Classic Kit |     | SFX 1 | SFX 2 |
| Note# | Note Off | assign    |          |           |             |     |       |       |
o
| 29  | F 0  |     |     |              |     |     |     |     |
| --- | ---- | --- | --- | ------------ | --- | --- | --- | --- |
| 30  | F# 0 |     |     |              |     |     |     |     |
| 31  | G 0  |     |     | Brush Slap L |     |     |     |     |
| 32  | G# 0 |     |     |              |     |     |     |     |
Bass Drum L2
| 33  | A 0              |     |                  |             |                       |                     |     |                 |
| --- | ---------------- | --- | ---------------- | ----------- | --------------------- | ------------------- | --- | --------------- |
| 34  | A# 0             |     |                  |             |                       |                     |     |                 |
| 35  | B 0              |     |                  |             | Gran Cassa            |                     |     |                 |
| 36  | C 1              |     | BDJazz           | BDSoft      | GranCassaMute         | GuitarCuttingNoise  |     | Dial Tone       |
| 37  | C# 1             |     |                  |             |                       | GuitarCuttingNoise2 |     | Door Creaking   |
|     |                  |     |                  | Brush Slap  | Marching Sn M         | Dist. Cut Noise     |     | Door Slam       |
| 38  | D 1              |     |                  |             |                       |                     |     |                 |
| 39  | D# 1             |     |                  |             |                       | String Slap         |     | Scratch         |
| 40  | E 1              |     |                  | Brush Tap   | Marching Sn H         | Bass Slide          |     | Scratch 2       |
| 41  | F 1              |     | Jazz Tom 1       | Brush Tom 1 | Jazz Tom 1            | Pick Scrape         |     | Windchime       |
| 42  | F# 1             | 1   |                  |             |                       |                     |     | Telephone Ring2 |
|     |                  |     | Jazz Tom 2       | Brush Tom 2 | Jazz Tom 2            |                     |     |                 |
| 43  | G 1              |     |                  |             |                       |                     |     |                 |
| 44  | G# 1             | 1   |                  |             |                       |                     |     |                 |
|     | :MU80/MU50 voice |     | :MU80 voice only |             | :Same as Standard Kit |                     |     | :No Sound       |

|           |     | <Table 2> | XG Drum Map (MU80/MU50) |     |     |     |     |
| --------- | --- | --------- | ----------------------- | --- | --- | --- | --- |
| Bank MSB# |     | 127       | 127                     | 127 | 127 | 127 | 127 |
Program #
|     |     | 1   | 2   | 9   | 17  | 25  | 26  |
| --- | --- | --- | --- | --- | --- | --- | --- |
Key Alternate
|                |                | Standard Kit | Standard2 Kit | Room Kit   | Rock Kit   | Electro Kit | Analog Kit     |
| -------------- | -------------- | ------------ | ------------- | ---------- | ---------- | ----------- | -------------- |
| Note# Note Off | assign         |              |               |            |            |             |                |
| 45 A 1         | Low Tom        |              |               | Room Tom 3 | Rock Tom 3 | E Tom 3     | Analog Tom 3   |
| 46 A# 1        | 1 Hi-Hat Open  |              |               |            |            |             | Analog HH Open |
| 47 B 1         | Mid Tom L      |              |               | Room Tom 4 | Rock Tom 4 | E Tom 4     | Analog Tom 4   |
| 48 C 2         | Mid Tom H      |              |               | Room Tom 5 | Rock Tom 5 | E Tom 5     | Analog Tom 5   |
|                | Crash Cymbal 1 |              |               |            |            |             | Analog Cymbal  |
49 C# 2
| 50 D 2  | High Tom        |     |     | Room Tom 6 | Rock Tom 6 | E Tom 6 | Analog Tom 6 |
| ------- | --------------- | --- | --- | ---------- | ---------- | ------- | ------------ |
| 51 D# 2 | Ride Cymbal 1   |     |     |            |            |         |              |
| 52 E 2  | Chinese Cymbal  |     |     |            |            |         |              |
| 53 F 2  | Ride Cymbal Cup |     |     |            |            |         |              |
Tambourine
54 F# 2
| 55 G 2 | Splash Cymbal |     |     |     |     |     |     |
| ------ | ------------- | --- | --- | --- | --- | --- | --- |
:Same as Standard Kit

|           | <Table 2> XG Drum Map (MU80/MU50) |     |     |     |     |
| --------- | --------------------------------- | --- | --- | --- | --- |
| Bank MSB# | 127                               | 127 | 127 | 126 | 126 |
Program #
|     | 33  | 41  | 49  | 1   | 2   |
| --- | --- | --- | --- | --- | --- |
Key Alternate
|                       | Jazz Kit   | Brush Kit   | Classic Kit | SFX 1 | SFX 2 |
| --------------------- | ---------- | ----------- | ----------- | ----- | ----- |
| Note# Note Off assign |            |             |             |       |       |
| 45 A 1                | Jazz Tom 3 | Brush Tom 3 | Jazz Tom 3  |       |       |
| 46 A# 1 1             |            |             |             |       |       |
| 47 B 1                | Jazz Tom 4 | Brush Tom 4 | Jazz Tom 4  |       |       |
| 48 C 2                | Jazz Tom 5 | Brush Tom 5 | Jazz Tom 5  |       |       |
HandCym. OpenL
49 C# 2
| 50 D 2  | Jazz Tom 6 | Brush Tom 6 | Jazz Tom 6        |             |              |
| ------- | ---------- | ----------- | ----------------- | ----------- | ------------ |
| 51 D# 2 |            |             | HandCym. Closed L |             |              |
| 52 E 2  |            |             |                   | FL.KeyClick | Engine Start |
| 53 F 2  |            |             |                   |             | Tire Screech |
Car Passing
54 F# 2
| 55 G 2 |                       |     |     |           | Crash |
| ------ | --------------------- | --- | --- | --------- | ----- |
|        | :Same as Standard Kit |     |     | :No Sound |       |

|           |           | <Table 2> | XG Drum Map (MU80/MU50) |     |     |     |     |
| --------- | --------- | --------- | ----------------------- | --- | --- | --- | --- |
| Bank MSB# |           | 127       | 127                     | 127 | 127 | 127 | 127 |
|           | Program # | 1         | 2                       | 9   | 17  | 25  | 26  |
Key Alternate
|            |            | Standard Kit   |               | Room Kit | Rock Kit | Electro Kit | Analog Kit     |
| ---------- | ---------- | -------------- | ------------- | -------- | -------- | ----------- | -------------- |
| Note# Note | Off assign |                | Standard2 Kit |          |          |             |                |
| 56 G#      | 2          | Cowbell        |               |          |          |             | Analog Cowbell |
| 57 A       | 2          | Crash Cymbal 2 |               |          |          |             |                |
| 58 A#      | 2          | Vibraslap      |               |          |          |             |                |
| 59 B       | 2          | Ride Cymbal 2  |               |          |          |             |                |
| C          | 3          | Bongo H        |               |          |          |             |                |
60
| 61 C# | 3   | Bongo L      |     |     |     |     |               |
| ----- | --- | ------------ | --- | --- | --- | --- | ------------- |
| 62 D  | 3   | Conga H Mute |     |     |     |     | AnalogConga H |
| 63 D# | 3   | Conga HOpen  |     |     |     |     | AnalogConga M |
| 64 E  | 3   | Conga L      |     |     |     |     | AnalogConga L |
| F     | 3   | Timbale H    |     |     |     |     |               |
65
| 66 F# | 3   | Timbale L |     |     |     |     |     |
| ----- | --- | --------- | --- | --- | --- | --- | --- |
| 67 G  | 3   | Agogo H   |     |     |     |     |     |
:Same as Standard Kit

<Table 2> XG Drum Map (MU80/MU50)
| Bank MSB# | 127 | 127 | 127 | 126 | 126 |
| --------- | --- | --- | --- | --- | --- |
Program #
|     | 33  | 41  | 49  | 1   | 2   |
| --- | --- | --- | --- | --- | --- |
Key Alternate
|     | Jazz Kit | Brush Kit | Classic Kit | SFX 1 | SFX 2 |
| --- | -------- | --------- | ----------- | ----- | ----- |
Note# Note Off assign
| 56 G# 2 |     |     |                    |     | Siren    |
| ------- | --- | --- | ------------------ | --- | -------- |
| 57 A 2  |     |     | Hand Cym. OpenH    |     | Train    |
| 58 A# 2 |     |     |                    |     | Jetplane |
| 59 B 2  |     |     | Hand Cym. Closed H |     | Starship |
Burst Noise
60 C 3
| 61 C# 3 |     |     |     |     | Coaster  |
| ------- | --- | --- | --- | --- | -------- |
| 62 D 3  |     |     |     |     | SbMarine |
63 D# 3
64 E 3
65 F 3
66 F# 3
67 G 3
|     | :Same as Standard Kit |     |     | :No Sound |     |
| --- | --------------------- | --- | --- | --------- | --- |

|           | <Table 2> | XG Drum Map (MU80/MU50) |     |     |     |     |
| --------- | --------- | ----------------------- | --- | --- | --- | --- |
| Bank MSB# | 127       | 127                     | 127 | 127 | 127 | 127 |
Program #
|     | 1   | 2   | 9   | 17  | 25  | 26  |
| --- | --- | --- | --- | --- | --- | --- |
Key Alternate
|                       | Standard Kit | Standard2 Kit | Room Kit | Rock Kit | Electro Kit | Analog Kit     |
| --------------------- | ------------ | ------------- | -------- | -------- | ----------- | -------------- |
| Note# Note Off assign |              |               |          |          |             |                |
| 68 G# 3               | Agogo L      |               |          |          |             |                |
| 69 A  3               | Cabasa       |               |          |          |             |                |
| 70 A# 3               | Maracas      |               |          |          |             | Analog Maracas |
o
| 71 B 3 | SambaWhistleH |     |     |     |     |     |
| ------ | ------------- | --- | --- | --- | --- | --- |
o SambaWhistleL
72 C  4
| 73 C# 4 | Guiro Short |     |     |     |     |     |
| ------- | ----------- | --- | --- | --- | --- | --- |
o
| 74 D 4  | Guiro Long   |     |     |     |     |               |
| ------- | ------------ | --- | --- | --- | --- | ------------- |
| 75 D# 4 | Claves       |     |     |     |     | Analog Claves |
| 76 E 4  | Wood Block H |     |     |     |     |               |
Wood Block L
77 F 4
| 78 F# 4 | Cuica Mute |     |     |     | Scratch Push | Scratch Push |
| ------- | ---------- | --- | --- | --- | ------------ | ------------ |
| 79 G 4  | Cuica Open |     |     |     | Scratch Pull | Scratch Pull |
:Same as Standard Kit

<Table 2> XG Drum Map (MU80/MU50)
| Bank MSB# |     | 127 | 127 | 127 | 126 | 126 |
| --------- | --- | --- | --- | --- | --- | --- |
Program #
|     |     | 33  | 41  | 49  | 1   | 2   |
| --- | --- | --- | --- | --- | --- | --- |
Key Alternate
|            |            | Jazz Kit | Brush Kit | Classic Kit | SFX 1   | SFX 2     |
| ---------- | ---------- | -------- | --------- | ----------- | ------- | --------- |
| Note# Note | Off assign |          |           |             |         |           |
| 68 G#      | 3          |          |           |             | Rain    | Laughing  |
| 69 A       |            |          |           |             | Thunder | Screaming |
3
| 70 A# | 3   |     |     |     | Wind | Punch |
| ----- | --- | --- | --- | --- | ---- | ----- |
o
| 71 B  | 3   |     |     |     | Stream | Heartbeat |
| ----- | --- | --- | --- | --- | ------ | --------- |
|       | o   |     |     |     | Bubble | Footsteps |
| 72 C  | 4   |     |     |     |        |           |
| 73 C# | 4   |     |     |     | Feed   | Applaus2  |
| 74 D  | o   |     |     |     |        |           |
4
| 75 D# | 4   |     |     |     |     |     |
| ----- | --- | --- | --- | --- | --- | --- |
| 76 E  | 4   |     |     |     |     |     |
| 77 F  | 4   |     |     |     |     |     |
| 78 F# | 4   |     |     |     |     |     |
79 G
4
| :MU80/MU50 voice |     | :MU80 voice only |     |                       |     |           |
| ---------------- | --- | ---------------- | --- | --------------------- | --- | --------- |
|                  |     |                  |     | :Same as Standard Kit |     | :No Sound |

|           | <Table 2> | XG Drum Map (MU80/MU50) |     |     |     |     |
| --------- | --------- | ----------------------- | --- | --- | --- | --- |
| Bank MSB# | 127       | 127                     | 127 | 127 | 127 | 127 |
Program #
|     | 1   | 2   | 9   | 17  | 25  | 26  |
| --- | --- | --- | --- | --- | --- | --- |
Key Alternate
|     | Standard Kit | Standard2 Kit | Room Kit | Rock Kit | Electro Kit | Analog Kit |
| --- | ------------ | ------------- | -------- | -------- | ----------- | ---------- |
Note# Note Off assign
| 80 G# 4 2 | Triangle Mute |     |     |     |     |     |
| --------- | ------------- | --- | --- | --- | --- | --- |
| 81 A  4 2 | Triangle Open |     |     |     |     |     |
| 82 A# 4   | Shaker        |     |     |     |     |     |
| 83 B 4    | Jingle Bell   |     |     |     |     |     |
Bell Tree
84 C  5
85 C# 5
86 D 5
87 D# 5
88 E 5
89 F 5
90 F# 5
91 G 5
|     | :Same as Standard Kit |     |     | :No Sound |     |     |
| --- | --------------------- | --- | --- | --------- | --- | --- |

<Table 2> XG Drum Map (MU80/MU50)
| Bank MSB# | 127 | 127 | 127 | 126 |     | 126 |
| --------- | --- | --- | --- | --- | --- | --- |
Program #
|     | 33  | 41  | 49  | 1   |     | 2   |
| --- | --- | --- | --- | --- | --- | --- |
Key Alternate
|     | Jazz Kit | Brush Kit | Classic Kit | SFX 1 | SFX 2 |     |
| --- | -------- | --------- | ----------- | ----- | ----- | --- |
Note# Note Off assign
80 G# 4 2
81 A  4 2
82 A# 4
83 B 4
|     |     |     |     | Dog | Machine Gun |     |
| --- | --- | --- | --- | --- | ----------- | --- |
84 C  5
| 85 C# 5 |     |     |     | Horse Gallop | Laser Gun |     |
| ------- | --- | --- | --- | ------------ | --------- | --- |
| 86 D 5  |     |     |     | Bird 2       | Explosion |     |
| 87 D# 5 |     |     |     | Kitty        | FireWork  |     |
| 88 E 5  |     |     |     | Growl        |           |     |
Haunted
89 F 5
| 90 F# 5          |                  |     |                       | Ghost |     |           |
| ---------------- | ---------------- | --- | --------------------- | ----- | --- | --------- |
| 91 G 5           |                  |     |                       | Maou  |     |           |
| :MU80/MU50 voice | :MU80 voice only |     | :Same as Standard Kit |       |     | :No Sound |

XG Drum Default Data
STANDARDKIT(page 1 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
C#-1 Surdo Mute 64 64 102 3 51 95 95 127 0 0 1 64 64 64 64 64
| D-1 Surdo Open | 64 64 | 121 3 | 51 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#-1 Hi Q      | 64 64 | 63 0  | 51 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E-1 Whip Slap 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
F-1 Scratch Push 64 64 93 4 52 63 63 127 0 0 1 64 64 64 64 64
F#-1 Scratch Pull 64 64 116 4 52 63 63 127 0 0 1 64 64 64 64 64
| G-1 Finger Snap | 64 64 | 127 0 | 64 75 | 0 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ----- | ----- | --- | ---- | ----- | ----- |
G#-1 Click Noise 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
A-1 Metronome Click 64 64 94 0 64 63 63 127 0 0 1 64 64 64 64 64
Bb-1 Metronome Bell 64 64 98 0 64 63 63 127 0 0 1 64 64 64 64 64
B-1 Seq Click L 64 64 87 0 64 127 127 127 0 0 1 64 64 64 64 64
C0 Seq Click H 64 64 96 0 64 127 127 127 0 0 1 64 64 64 64 64
| C#0 Brush Tap | 64 64 | 49 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
D0 Brush Swirl L 64 64 47 0 64 127 127 127 0 1 1 64 64 64 64 64
D#0 Brush Slap 64 64 52 0 64 127 127 127 0 0 1 64 64 64 64 64
E0 Brush Swirl H 64 64 45 0 64 127 127 127 0 1 1 64 64 64 64 64
| F0 Snare Roll  | 64 64 | 79 0  | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F#0 Castanet   | 64 64 | 127 0 | 64 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| G0 Snare L     | 64 64 | 75 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#0 Sticks     | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A0 Bass Drum L | 64 64 | 116 0 | 64 32  | 32 127  | 0 0 | 1 64 | 64 64 | 64 64 |
Bb0 Open Rim Shot 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
STANDARDKIT(page 2 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| B0 Bass Drum M | 64 64 | 102 0 | 64 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
| C1 Bass Drum H | 64 64 | 127 0 | 64 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
C#1 Side Stick 64 64 93 0 64 127 127 127 0 0 1 64 64 64 64 64
| D1 Snare M | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
D#1 Hand Clap 64 64 110 0 64 127 127 127 0 0 1 64 64 64 64 64
| E1 Snare H | 64 64 | 123 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
F1 Floor Tom L 64 64 111 0 24 127 127 127 0 0 1 64 64 64 64 64
F#1 Hi-Hat Closed 64 64 91 1 77 32 32 127 0 0 1 64 64 64 64 64
G1 Floor Tom H 64 64 113 0 39 127 127 127 0 0 1 64 64 64 64 64
G#1 Hi-Hat Pedal 64 64 97 1 77 32 32 127 0 0 1 64 64 64 64 64
| A1 Low Tom      | 64 64 | 104 0 | 52 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| Bb1 Hi-Hat Open | 64 64 | 96 1  | 77 32  | 32 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| B1 Mid Tom L    | 64 64 | 87 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C2 Mid Tom H    | 64 64 | 103 0 | 83 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
C#2 Crash Cymbal 1 64 64 127 0 69 127 127 127 0 0 1 64 64 64 64 64
| D2 High Tom | 64 64 | 116 0 | 104 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ------- | ------- | --- | ---- | ----- | ----- |
D#2 Ride Cymbal 1 64 64 105 0 34 127 127 127 0 0 1 64 64 64 64 64
E2 Chinese Cymbal 64 64 120 0 34 127 127 127 0 0 1 64 64 64 64 64
F2 Ride Cymbal Cup 64 64 107 0 46 127 127 127 0 0 1 64 64 64 64 64
| F#2 Tambourine | 64 64 | 120 0 | 64 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
G2 Splash Cymbal 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
| G#2 Cowbell | 64 64 | 118 0 | 77 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |

XG Drum Default Data
STANDARDKIT(page 3 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
A2 Crash Cymbal 2 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
Bb2 Vibraslap 64 64 106 0 25 127 127 127 0 0 1 64 64 64 64 64
B2 Ride Cymbal 2 64 64 110 0 46 127 127 127 0 0 1 64 64 64 64 64
| C3 Bongo H  | 64 64 | 110 0 | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| C#3 Bongo L | 64 64 | 87 0  | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
D3 Conga H Mute 64 64 73 0 39 127 127 127 0 0 1 64 64 64 64 64
D#3 Conga H Open64 64 89 0 25 127 127 127 0 0 1 64 64 64 64 64
| E3 Conga L    | 64 64 | 111 0 | 64 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F3 Timbale H  | 64 64 | 91 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#3 Timbale L | 64 64 | 95 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G3 Agogo H    | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#3 Agogo L   | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A3 Cabasa     | 64 64 | 90 0  | 28 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb3 Maracas   | 64 64 | 103 0 | 21 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
B3 Samba Whistle H 64 64 103 0 101 127 127 127 0 1 1 64 64 64 64 64
C4 Samba Whistle L 64 64 110 0 101 127 127 127 0 1 1 64 64 64 64 64
C#4 Guiro Short 64 64 124 0 95 63 63 127 0 0 1 64 64 64 64 64
| D4 Guiro Long | 64 64 | 106 0 | 110 63 | 63 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| D#4 Claves    | 64 64 | 88 0  | 64 95  | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E4 Wood Block H 64 64 107 0 104 95 95 127 0 0 1 64 64 64 64 64
F4 Wood Block L 64 64 96 0 104 95 95 127 0 0 1 64 64 64 64 64
F#4 Cuica Mute 64 64 97 0 21 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
STANDARDKIT(page 4 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
G4 Cuica Open 64 64 107 0 34 127 127 127 0 0 1 64 64 64 64 64
G#4 Triangle Mute 64 64 127 2 25 95 95 127 0 0 1 64 64 64 64 64
A4 Triangle Open 64 64 127 2 25 127 127 127 0 0 1 64 64 64 64 64
| Bb4 Shaker | 64 64 | 106 0 | 83 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
B4 Jingle Bell 64 64 123 0 105 127 127 127 0 0 1 64 64 64 64 64
| C5 Bell Tree | 64 64 | 68 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |

XG Drum Default Data
STANDARD2KIT(page 1 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
C#-1 Surdo Mute 64 64 102 3 51 95 95 127 0 0 1 64 64 64 64 64
| D-1 Surdo Open | 64 64 | 121 3 | 51 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#-1 Hi Q      | 64 64 | 63 0  | 51 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E-1 Whip Slap 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
F-1 Scratch Push 64 64 93 4 52 63 63 127 0 0 1 64 64 64 64 64
F#-1 Scratch Pull 64 64 116 4 52 63 63 127 0 0 1 64 64 64 64 64
| G-1 Finger Snap | 64 64 | 127 0 | 64 75 | 0 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ----- | ----- | --- | ---- | ----- | ----- |
G#-1 Click Noise 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
A-1 Metronome Click 64 64 94 0 64 63 63 127 0 0 1 64 64 64 64 64
Bb-1 Metronome Bell 64 64 98 0 64 63 63 127 0 0 1 64 64 64 64 64
B-1 Seq Click L 64 64 87 0 64 127 127 127 0 0 1 64 64 64 64 64
C0 Seq Click H 64 64 96 0 64 127 127 127 0 0 1 64 64 64 64 64
| C#0 Brush Tap | 64 64 | 49 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
D0 Brush Swirl L 64 64 47 0 64 127 127 127 0 1 1 64 64 64 64 64
D#0 Brush Slap 64 64 52 0 64 127 127 127 0 0 1 64 64 64 64 64
E0 Brush Swirl H 64 64 45 0 64 127 127 127 0 1 1 64 64 64 64 64
| F0 Snare Roll 2 | 64 64 | 79 0  | 64 127 | 127 0   | 0 1 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F#0 Castanet    | 64 64 | 127 0 | 64 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| G0 Snare L2     | 64 64 | 75 0  | 64 127 | 127 0   | 0 0 | 1 64 | 64 64 | 64 64 |
| G#0 Sticks      | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A0 Bass Drum L  | 64 64 | 116 0 | 64 32  | 32 127  | 0 0 | 1 64 | 64 64 | 64 64 |
Bb0 Open Rim Shot 2 64 64 127 0 64 127 127 0 0 0 1 64 64 64 64 64

XG Drum Default Data
STANDARD2KIT(page 2 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| B0 Bass Drum M 2 | 64 64 | 102 0 | 64 32 | 32 0 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------------- | ----- | ----- | ----- | ---- | --- | ---- | ----- | ----- |
| C1 Bass Drum H 2 | 64 64 | 127 0 | 64 32 | 32 0 | 0 0 | 1 64 | 64 64 | 64 64 |
C#1 Side Stick 64 64 93 0 64 127 127 127 0 0 1 64 64 64 64 64
| D1 Snare M 2 | 64 64 | 127 0 | 64 127 | 127 0 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ----- | --- | ---- | ----- | ----- |
D#1 Hand Clap 64 64 110 0 64 127 127 127 0 0 1 64 64 64 64 64
| E1 Snare H 2 | 64 64 | 123 0 | 64 127 | 127 0 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ----- | --- | ---- | ----- | ----- |
F1 Floor Tom L 64 64 111 0 24 127 127 127 0 0 1 64 64 64 64 64
F#1 Hi-Hat Closed 64 64 91 1 77 32 32 127 0 0 1 64 64 64 64 64
G1 Floor Tom H 64 64 113 0 39 127 127 127 0 0 1 64 64 64 64 64
G#1 Hi-Hat Pedal 64 64 97 1 77 32 32 127 0 0 1 64 64 64 64 64
| A1 Low Tom      | 64 64 | 104 0 | 52 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| Bb1 Hi-Hat Open | 64 64 | 96 1  | 77 32  | 32 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| B1 Mid Tom L    | 64 64 | 87 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C2 Mid Tom H    | 64 64 | 103 0 | 83 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
C#2 Crash Cymbal 1 64 64 127 0 69 127 127 127 0 0 1 64 64 64 64 64
| D2 High Tom | 64 64 | 116 0 | 104 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ------- | ------- | --- | ---- | ----- | ----- |
D#2 Ride Cymbal 1 64 64 105 0 34 127 127 127 0 0 1 64 64 64 64 64
E2 Chinese Cymbal 64 64 120 0 34 127 127 127 0 0 1 64 64 64 64 64
F2 Ride Cymbal Cup 64 64 107 0 46 127 127 127 0 0 1 64 64 64 64 64
| F#2 Tambourine | 64 64 | 120 0 | 64 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
G2 Splash Cymbal 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
| G#2 Cowbell | 64 64 | 118 0 | 77 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |

XG Drum Default Data
STANDARD2KIT(page 3 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
A2 Crash Cymbal 2 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
Bb2 Vibraslap 64 64 106 0 25 127 127 127 0 0 1 64 64 64 64 64
B2 Ride Cymbal 2 64 64 110 0 46 127 127 127 0 0 1 64 64 64 64 64
| C3 Bongo H  | 64 64 | 110 0 | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| C#3 Bongo L | 64 64 | 87 0  | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
D3 Conga H Mute 64 64 73 0 39 127 127 127 0 0 1 64 64 64 64 64
D#3 Conga H Open64 64 89 0 25 127 127 127 0 0 1 64 64 64 64 64
| E3 Conga L    | 64 64 | 111 0 | 64 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F3 Timbale H  | 64 64 | 91 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#3 Timbale L | 64 64 | 95 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G3 Agogo H    | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#3 Agogo L   | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A3 Cabasa     | 64 64 | 90 0  | 28 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb3 Maracas   | 64 64 | 103 0 | 21 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
B3 Samba Whistle H 64 64 103 0 101 127 127 127 0 1 1 64 64 64 64 64
C4 Samba Whistle L 64 64 110 0 101 127 127 127 0 1 1 64 64 64 64 64
C#4 Guiro Short 64 64 124 0 95 63 63 127 0 0 1 64 64 64 64 64
| D4 Guiro Long | 64 64 | 106 0 | 110 63 | 63 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| D#4 Claves    | 64 64 | 88 0  | 64 95  | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E4 Wood Block H 64 64 107 0 104 95 95 127 0 0 1 64 64 64 64 64
F4 Wood Block L 64 64 96 0 104 95 95 127 0 0 1 64 64 64 64 64
F#4 Cuica Mute 64 64 97 0 21 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
STANDARD2KIT(page 4 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
G4 Cuica Open 64 64 107 0 34 127 127 127 0 0 1 64 64 64 64 64
G#4 Triangle Mute 64 64 127 2 25 95 95 127 0 0 1 64 64 64 64 64
A4 Triangle Open 64 64 127 2 25 127 127 127 0 0 1 64 64 64 64 64
| Bb4 Shaker | 64 64 | 106 0 | 83 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
B4 Jingle Bell 64 64 123 0 105 127 127 127 0 0 1 64 64 64 64 64
| C5 Bell Tree | 64 64 | 68 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |

XG Drum Default Data
ROOM KIT(page 1 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
C#-1 Surdo Mute 64 64 102 3 51 95 95 127 0 0 1 64 64 64 64 64
| D-1 Surdo Open | 64 64 | 121 3 | 51 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#-1 Hi Q      | 64 64 | 63 0  | 51 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E-1 Whip Slap 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
F-1 Scratch Push 64 64 93 4 52 63 63 127 0 0 1 64 64 64 64 64
F#-1 Scratch Pull 64 64 116 4 52 63 63 127 0 0 1 64 64 64 64 64
| G-1 Finger Snap | 64 64 | 127 0 | 64 75 | 0 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ----- | ----- | --- | ---- | ----- | ----- |
G#-1 Click Noise 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
A-1 Metronome Click 64 64 94 0 64 63 63 127 0 0 1 64 64 64 64 64
Bb-1 Metronome Bell 64 64 98 0 64 63 63 127 0 0 1 64 64 64 64 64
B-1 Seq Click L 64 64 87 0 64 127 127 127 0 0 1 64 64 64 64 64
C0 Seq Click H 64 64 96 0 64 127 127 127 0 0 1 64 64 64 64 64
| C#0 Brush Tap | 64 64 | 49 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
D0 Brush Swirl L 64 64 47 0 64 127 127 127 0 1 1 64 64 64 64 64
D#0 Brush Slap 64 64 52 0 64 127 127 127 0 0 1 64 64 64 64 64
E0 Brush Swirl H 64 64 45 0 64 127 127 127 0 1 1 64 64 64 64 64
| F0 Snare Roll  | 64 64 | 79 0  | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F#0 Castanet   | 64 64 | 127 0 | 64 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| G0 Snare L     | 64 64 | 75 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#0 Sticks     | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A0 Bass Drum L | 64 64 | 116 0 | 64 32  | 32 127  | 0 0 | 1 64 | 64 64 | 64 64 |
Bb0 Open Rim Shot 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
ROOM KIT(page 2 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| B0 Bass Drum M | 64 64 | 102 0 | 64 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
| C1 BD Room     | 64 64 | 127 0 | 64 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
C#1 Side Stick 64 64 93 0 64 127 127 127 0 0 1 64 64 64 64 64
| D1 SD Room L | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
D#1 Hand Clap 64 64 110 0 64 127 127 127 0 0 1 64 64 64 64 64
| E1 SD Room H | 64 64 | 123 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
F1 Room Tom 1 64 64 123 0 24 127 127 127 0 0 1 64 64 64 64 64
F#1 Hi-Hat Closed 64 64 91 1 77 32 32 127 0 0 1 64 64 64 64 64
G1 Room Tom 2 64 64 127 0 39 127 127 127 0 0 1 64 64 64 64 64
G#1 Hi-Hat Pedal 64 64 97 1 77 32 32 127 0 0 1 64 64 64 64 64
A1 Room Tom 3 64 64 117 0 52 127 127 127 0 0 1 64 64 64 64 64
| Bb1 Hi-Hat Open | 64 64 | 96 1 | 77 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ---- | ----- | ------ | --- | ---- | ----- | ----- |
B1 Room Tom 4 64 64 121 0 64 127 127 127 0 0 1 64 64 64 64 64
C2 Room Tom 5 64 64 126 0 83 127 127 127 0 0 1 64 64 64 64 64
C#2 Crash Cymbal 1 64 64 127 0 69 127 127 127 0 0 1 64 64 64 64 64
D2 Room Tom 6 64 64 124 0 95 127 127 127 0 0 1 64 64 64 64 64
D#2 Ride Cymbal 1 64 64 105 0 34 127 127 127 0 0 1 64 64 64 64 64
E2 Chinese Cymbal 64 64 120 0 34 127 127 127 0 0 1 64 64 64 64 64
F2 Ride Cymbal Cup 64 64 107 0 46 127 127 127 0 0 1 64 64 64 64 64
| F#2 Tambourine | 64 64 | 120 0 | 64 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
G2 Splash Cymbal 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
| G#2 Cowbell | 64 64 | 118 0 | 77 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |

XG Drum Default Data
ROOM KIT(page 3 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
A2 Crash Cymbal 2 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
Bb2 Vibraslap 64 64 106 0 25 127 127 127 0 0 1 64 64 64 64 64
B2 Ride Cymbal 2 64 64 110 0 46 127 127 127 0 0 1 64 64 64 64 64
| C3 Bongo H  | 64 64 | 110 0 | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| C#3 Bongo L | 64 64 | 87 0  | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
D3 Conga H Mute 64 64 73 0 39 127 127 127 0 0 1 64 64 64 64 64
D#3 Conga H Open64 64 89 0 25 127 127 127 0 0 1 64 64 64 64 64
| E3 Conga L    | 64 64 | 111 0 | 64 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F3 Timbale H  | 64 64 | 91 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#3 Timbale L | 64 64 | 95 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G3 Agogo H    | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#3 Agogo L   | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A3 Cabasa     | 64 64 | 90 0  | 28 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb3 Maracas   | 64 64 | 103 0 | 21 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
B3 Samba Whistle H 64 64 103 0 101 127 127 127 0 1 1 64 64 64 64 64
C4 Samba Whistle L 64 64 110 0 101 127 127 127 0 1 1 64 64 64 64 64
C#4 Guiro Short 64 64 124 0 95 63 63 127 0 0 1 64 64 64 64 64
| D4 Guiro Long | 64 64 | 106 0 | 110 63 | 63 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| D#4 Claves    | 64 64 | 88 0  | 64 95  | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E4 Wood Block H 64 64 107 0 104 95 95 127 0 0 1 64 64 64 64 64
F4 Wood Block L 64 64 96 0 104 95 95 127 0 0 1 64 64 64 64 64
F#4 Cuica Mute 64 64 97 0 21 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
ROOMKIT(page 4 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
G4 Cuica Open 64 64 107 0 34 127 127 127 0 0 1 64 64 64 64 64
G#4 Triangle Mute 64 64 127 2 25 95 95 127 0 0 1 64 64 64 64 64
A4 Triangle Open 64 64 127 2 25 127 127 127 0 0 1 64 64 64 64 64
| Bb4 Shaker | 64 64 | 106 0 | 83 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
B4 Jingle Bell 64 64 123 0 105 127 127 127 0 0 1 64 64 64 64 64
| C5 Bell Tree | 64 64 | 68 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |

XG Drum Default Data
ROCK KIT(page 1 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
C#-1 Surdo Mute 64 64 102 3 51 95 95 127 0 0 1 64 64 64 64 64
| D-1 Surdo Open | 64 64 | 121 3 | 51 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#-1 Hi Q      | 64 64 | 63 0  | 51 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E-1 Whip Slap 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
F-1 Scratch Push 64 64 93 4 52 63 63 127 0 0 1 64 64 64 64 64
F#-1 Scratch Pull 64 64 116 4 52 63 63 127 0 0 1 64 64 64 64 64
| G-1 Finger Snap | 64 64 | 127 0 | 64 75 | 0 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ----- | ----- | --- | ---- | ----- | ----- |
G#-1 Click Noise 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
A-1 Metronome Click 64 64 94 0 64 63 63 127 0 0 1 64 64 64 64 64
Bb-1 Metronome Bell 64 64 98 0 64 63 63 127 0 0 1 64 64 64 64 64
B-1 Seq Click L 64 64 87 0 64 127 127 127 0 0 1 64 64 64 64 64
C0 Seq Click H 64 64 96 0 64 127 127 127 0 0 1 64 64 64 64 64
| C#0 Brush Tap | 64 64 | 49 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
D0 Brush Swirl L 64 64 47 0 64 127 127 127 0 1 1 64 64 64 64 64
D#0 Brush Slap 64 64 52 0 64 127 127 127 0 0 1 64 64 64 64 64
E0 Brush Swirl H 64 64 45 0 64 127 127 127 0 1 1 64 64 64 64 64
| F0 Snare Roll  | 64 64 | 79 0  | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F#0 Castanet   | 64 64 | 127 0 | 64 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| G0 SDRock M    | 64 64 | 121 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#0 Sticks     | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A0 Bass Drum M | 64 64 | 111 0 | 64 32  | 32 127  | 0 0 | 1 64 | 64 64 | 64 64 |
Bb0 Open Rim Shot 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
ROCK KIT(page 2 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
B0 Bass Drum H 3 64 64 127 0 64 32 32 127 0 0 1 64 64 64 64 64
C1 BD Rock 64 64 119 0 64 32 32 127 0 0 1 64 64 64 64 64
C#1 Side Stick 64 64 93 0 64 127 127 127 0 0 1 64 64 64 64 64
D1 SD Rock 64 64 110 0 64 127 127 127 0 0 1 64 64 64 64 64
D#1 Hand Clap 64 64 110 0 64 127 127 127 0 0 1 64 64 64 64 64
E1 SD Rock Rim 64 64 119 0 64 127 127 127 0 0 1 64 64 64 64 64
F1 Rock Tom 1 64 64 123 0 24 127 127 127 0 0 1 64 64 64 64 64
F#1 Hi-Hat Closed 64 64 91 1 77 32 32 127 0 0 1 64 64 64 64 64
G1 Rock Tom 2 64 64 127 0 39 127 127 127 0 0 1 64 64 64 64 64
G#1 Hi-Hat Pedal 64 64 97 1 77 32 32 127 0 0 1 64 64 64 64 64
A1 Rock Tom 3 64 64 117 0 52 127 127 127 0 0 1 64 64 64 64 64
Bb1 Hi-Hat Open 64 64 96 1 77 32 32 127 0 0 1 64 64 64 64 64
B1 Rock Tom 4 64 64 121 0 64 127 127 127 0 0 1 64 64 64 64 64
C2 Rock Tom 5 64 64 123 0 83 127 127 127 0 0 1 64 64 64 64 64
C#2 Crash Cymbal 1 64 64 127 0 69 127 127 127 0 0 1 64 64 64 64 64
D2 Rock Tom 6 64 64 124 0 95 127 127 127 0 0 1 64 64 64 64 64
D#2 Ride Cymbal 1 64 64 105 0 34 127 127 127 0 0 1 64 64 64 64 64
E2 Chinese Cymbal 64 64 120 0 34 127 127 127 0 0 1 64 64 64 64 64
F2 Ride Cymbal Cup 64 64 107 0 46 127 127 127 0 0 1 64 64 64 64 64
F#2 Tambourine 64 64 120 0 64 63 63 127 0 0 1 64 64 64 64 64
G2 Splash Cymbal 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
G#2 Cowbell 64 64 118 0 77 63 63 127 0 0 1 64 64 64 64 64

XG Drum Default Data
ROCK KIT(page 3 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
A2 Crash Cymbal 2 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
Bb2 Vibraslap 64 64 106 0 25 127 127 127 0 0 1 64 64 64 64 64
B2 Ride Cymbal 2 64 64 110 0 46 127 127 127 0 0 1 64 64 64 64 64
| C3 Bongo H  | 64 64 | 110 0 | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| C#3 Bongo L | 64 64 | 87 0  | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
D3 Conga H Mute 64 64 73 0 39 127 127 127 0 0 1 64 64 64 64 64
D#3 Conga H Open64 64 89 0 25 127 127 127 0 0 1 64 64 64 64 64
| E3 Conga L    | 64 64 | 111 0 | 64 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F3 Timbale H  | 64 64 | 91 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#3 Timbale L | 64 64 | 95 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G3 Agogo H    | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#3 Agogo L   | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A3 Cabasa     | 64 64 | 90 0  | 28 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb3 Maracas   | 64 64 | 103 0 | 21 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
B3 Samba Whistle H 64 64 103 0 101 127 127 127 0 1 1 64 64 64 64 64
C4 Samba Whistle L 64 64 110 0 101 127 127 127 0 1 1 64 64 64 64 64
C#4 Guiro Short 64 64 124 0 95 63 63 127 0 0 1 64 64 64 64 64
| D4 Guiro Long | 64 64 | 106 0 | 110 63 | 63 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| D#4 Claves    | 64 64 | 88 0  | 64 95  | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E4 Wood Block H 64 64 107 0 104 95 95 127 0 0 1 64 64 64 64 64
F4 Wood Block L 64 64 96 0 104 95 95 127 0 0 1 64 64 64 64 64
F#4 Cuica Mute 64 64 97 0 21 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
ROCKKIT(page 4 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
G4 Cuica Open 64 64 107 0 34 127 127 127 0 0 1 64 64 64 64 64
G#4 Triangle Mute 64 64 127 2 25 95 95 127 0 0 1 64 64 64 64 64
A4 Triangle Open 64 64 127 2 25 127 127 127 0 0 1 64 64 64 64 64
| Bb4 Shaker | 64 64 | 106 0 | 83 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
B4 Jingle Bell 64 64 123 0 105 127 127 127 0 0 1 64 64 64 64 64
| C5 Bell Tree | 64 64 | 68 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |

XG Drum Default Data
ELECTRO KIT(page 1 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
C#-1 Surdo Mute 64 64 102 3 51 95 95 127 0 0 1 64 64 64 64 64
| D-1 Surdo Open | 64 64 | 121 3 | 51 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#-1 Hi Q      | 64 64 | 63 0  | 51 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E-1 Whip Slap 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
F-1 Scratch Push 64 64 93 4 52 63 63 127 0 0 1 64 64 64 64 64
F#-1 Scratch Pull 64 64 116 4 52 63 63 127 0 0 1 64 64 64 64 64
| G-1 Finger Snap | 64 64 | 127 0 | 64 75 | 0 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ----- | ----- | --- | ---- | ----- | ----- |
G#-1 Click Noise 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
A-1 Metronome Click 64 64 94 0 64 63 63 127 0 0 1 64 64 64 64 64
Bb-1 Metronome Bell 64 64 98 0 64 63 63 127 0 0 1 64 64 64 64 64
B-1 Seq Click L 64 64 87 0 64 127 127 127 0 0 1 64 64 64 64 64
C0 Seq Click H 64 64 96 0 64 127 127 127 0 0 1 64 64 64 64 64
| C#0 Brush Tap | 64 64 | 49 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
D0 Brush Swirl L 64 64 47 0 64 127 127 127 0 1 1 64 64 64 64 64
D#0 Brush Slap 64 64 52 0 64 127 127 127 0 0 1 64 64 64 64 64
E0 Reverse Cymbal 64 64 100 0 64 127 127 127 0 1 1 64 64 64 64 64
| F0 Snare Roll | 64 64 | 79 0  | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F#0 Hi Q      | 64 64 | 127 0 | 64 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| G0 Snare M    | 64 64 | 114 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#0 Sticks    | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
A0 Bass Drum H 4 64 64 123 0 64 32 32 127 0 0 1 64 64 64 64 64
Bb0 Open Rim Shot 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
ELECTRO KIT (page 2 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| B0 BD Rock | 64 64 | 127 0 | 64 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
| C1 BD Gate | 64 64 | 122 0 | 64 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
C#1 Side Stick 64 64 93 0 64 127 127 127 0 0 1 64 64 64 64 64
| D1 SD Rock L | 64 64 | 107 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
D#1 Hand Clap 64 64 110 0 64 127 127 127 0 0 1 64 64 64 64 64
| E1 SD Rock H | 64 64 | 102 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F1 E Tom 1   | 64 64 | 92 0  | 24 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
F#1 Hi-Hat Closed 64 64 91 1 77 32 32 127 0 0 1 64 64 64 64 64
| G1 E Tom 2 | 64 64 | 94 0 | 39 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
G#1 Hi-Hat Pedal 64 64 97 1 77 32 32 127 0 0 1 64 64 64 64 64
| A1 E Tom 3      | 64 64 | 97 0  | 52 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| Bb1 Hi-Hat Open | 64 64 | 96 1  | 77 32  | 32 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| B1 E Tom 4      | 64 64 | 93 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C2 E Tom 5      | 64 64 | 102 0 | 83 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
C#2 Crash Cymbal 1 64 64 127 0 69 127 127 127 0 0 1 64 64 64 64 64
| D2 E Tom 6 | 64 64 | 97 0 | 101 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ---- | ------- | ------- | --- | ---- | ----- | ----- |
D#2 Ride Cymbal 1 64 64 105 0 34 127 127 127 0 0 1 64 64 64 64 64
E2 Chinese Cymbal 64 64 120 0 34 127 127 127 0 0 1 64 64 64 64 64
F2 Ride Cymbal Cup 64 64 107 0 46 127 127 127 0 0 1 64 64 64 64 64
| F#2 Tambourine | 64 64 | 120 0 | 64 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
G2 Splash Cymbal 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
| G#2 Cowbell | 64 64 | 118 0 | 77 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |

XG Drum Default Data
ELECTRO KIT(page 3 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
A2 Crash Cymbal 2 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
Bb2 Vibraslap 64 64 106 0 25 127 127 127 0 0 1 64 64 64 64 64
B2 Ride Cymbal 2 64 64 110 0 46 127 127 127 0 0 1 64 64 64 64 64
| C3 Bongo H  | 64 64 | 110 0 | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| C#3 Bongo L | 64 64 | 87 0  | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
D3 Conga H Mute 64 64 73 0 39 127 127 127 0 0 1 64 64 64 64 64
D#3 Conga H Open64 64 89 0 25 127 127 127 0 0 1 64 64 64 64 64
| E3 Conga L    | 64 64 | 111 0 | 64 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F3 Timbale H  | 64 64 | 91 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#3 Timbale L | 64 64 | 95 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G3 Agogo H    | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#3 Agogo L   | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A3 Cabasa     | 64 64 | 90 0  | 28 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb3 Maracas   | 64 64 | 103 0 | 21 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
B3 Samba Whistle H 64 64 103 0 101 127 127 127 0 1 1 64 64 64 64 64
C4 Samba Whistle L 64 64 110 0 101 127 127 127 0 1 1 64 64 64 64 64
C#4 Guiro Short 64 64 124 0 95 63 63 127 0 0 1 64 64 64 64 64
| D4 Guiro Long | 64 64 | 106 0 | 110 63 | 63 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| D#4 Claves    | 64 64 | 88 0  | 64 95  | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E4 Wood Block H 64 64 107 0 104 95 95 127 0 0 1 64 64 64 64 64
F4 Wood Block L 64 64 96 0 104 95 95 127 0 0 1 64 64 64 64 64
F#4 Scratch Push 64 64 89 4 21 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
ELECTRO KIT(page 4 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
G4 Scratch Pull 64 64 94 4 34 127 127 127 0 0 1 64 64 64 64 64
G#4 Triangle Mute 64 64 127 2 25 95 95 127 0 0 1 64 64 64 64 64
A4 Triangle Open 64 64 127 2 25 127 127 127 0 0 1 64 64 64 64 64
| Bb4 Shaker | 64 64 | 106 0 | 83 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
B4 Jingle Bell 64 64 123 0 105 127 127 127 0 0 1 64 64 64 64 64
| C5 Bell Tree | 64 64 | 68 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |

XG Drum Default Data
ANALOG KIT(page 1 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
C#-1 Surdo Mute 64 64 102 3 51 95 95 127 0 0 1 64 64 64 64 64
| D-1 Surdo Open | 64 64 | 121 3 | 51 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#-1 Hi Q      | 64 64 | 63 0  | 51 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E-1 Whip Slap 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
F-1 Scratch Push 64 64 93 4 52 63 63 127 0 0 1 64 64 64 64 64
F#-1 Scratch Pull 64 64 116 4 52 63 63 127 0 0 1 64 64 64 64 64
| G-1 Finger Snap | 64 64 | 127 0 | 64 75 | 0 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ----- | ----- | --- | ---- | ----- | ----- |
G#-1 Click Noise 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
A-1 Metronome Click 64 64 94 0 64 63 63 127 0 0 1 64 64 64 64 64
Bb-1 Metronome Bell 64 64 98 0 64 63 63 127 0 0 1 64 64 64 64 64
B-1 Seq Click L 64 64 87 0 64 127 127 127 0 0 1 64 64 64 64 64
C0 Seq Click H 64 64 96 0 64 127 127 127 0 0 1 64 64 64 64 64
| C#0 Brush Tap | 64 64 | 49 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
D0 Brush Swirl L 64 64 47 0 64 127 127 127 0 1 1 64 64 64 64 64
D#0 Brush Slap 64 64 52 0 64 127 127 127 0 0 1 64 64 64 64 64
E0 Reverse Cymbal 64 64 100 0 64 127 127 127 0 1 1 64 64 64 64 64
| F0 Snare Roll  | 64 64 | 79 0  | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F#0 Hi Q       | 64 64 | 127 0 | 64 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| G0 SD Rock H   | 64 64 | 120 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#0 Sticks     | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A0 Bass Drum M | 64 64 | 111 0 | 64 32  | 32 127  | 0 0 | 1 64 | 64 64 | 64 64 |
Bb0 Open Rim Shot 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
ANALOG KIT(page 2 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
B0 BD Analog L 64 64 123 0 64 32 32 127 0 0 1 64 64 64 64 64
C1 BD Analog H 64 64 127 0 64 32 32 127 0 0 1 64 64 64 64 64
C#1 Analog Side Stick 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
D1 Analog Snare L 64 64 107 0 64 127 127 127 0 0 1 64 64 64 64 64
D#1 Hand Clap 64 64 110 0 64 127 127 127 0 0 1 64 64 64 64 64
E1 Analog Snare H 64 64 102 0 64 127 127 127 0 0 1 64 64 64 64 64
F1 Analog Tom 1 64 64 127 0 24 127 127 127 0 0 1 64 64 64 64 64
F#1 Analog HH Closed 1 64 64 108 1 77 32 32 127 0 0 1 64 64 64 64 64
G1 Analog Tom 2 64 64 112 0 39 127 127 127 0 0 1 64 64 64 64 64
G#1 Analog HH Closed 2 64 64 91 1 77 32 32 127 0 0 1 64 64 64 64 64
A1 Analog Tom 3 64 64 108 0 52 127 127 127 0 0 1 64 64 64 64 64
Bb1 Analog HH Open 64 64 96 1 77 32 32 127 0 0 1 64 64 64 64 64
B1 Analog Tom 4 64 64 112 0 64 127 127 127 0 0 1 64 64 64 64 641
C2 Analog Tom 5 64 64 109 0 83 127 127 127 0 0 1 64 64 64 64 64
C#2 Analog Cymbal 64 64 109 0 69 127 127 127 0 0 1 64 64 64 64 64
D2 Analog Tom 6 64 64 109 0 101 127 127 127 0 0 1 64 64 64 64 64
D#2 Ride Cymbal 1 64 64 105 0 34 127 127 127 0 0 1 64 64 64 64 64
E2 Chinese Cymbal 64 64 120 0 34 127 127 127 0 0 1 64 64 64 64 64
F2 Ride Cymbal Cup 64 64 107 0 46 127 127 127 0 0 1 64 64 64 64 64
F#2 Tambourine 64 64 120 0 64 63 63 127 0 0 1 64 64 64 64 64
G2 Splash Cymbal 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
G#2 Analog Cowbell 64 64 118 0 77 63 63 127 0 0 1 64 64 64 64 64

XG Drum Default Data
ANALOG KIT(page 3 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
A2 Crash Cymbal 2 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
Bb2 Vibraslap 64 64 106 0 25 127 127 127 0 0 1 64 64 64 64 64
B2 Ride Cymbal 2 64 64 110 0 46 127 127 127 0 0 1 64 64 64 64 64
| C3 Bongo H  | 64 64 | 110 0 | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| C#3 Bongo L | 64 64 | 87 0  | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
D3 Analog Conga H 64 64 89 0 39 127 127 127 0 0 1 64 64 64 64 64
D#3 Analog Conga M 64 64 89 0 25 127 127 127 0 0 1 64 64 64 64 6L
E3 Analog Conga L 64 64 115 0 64 95 95 127 0 0 1 64 64 64 64 64
| F3 Timbale H  | 64 64 | 91 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F#3 Timbale L | 64 64 | 95 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G3 Agogo H    | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#3 Agogo L   | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A3 Cabasa     | 64 64 | 90 0  | 28 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
Bb3 Analog Maracas 64 64 96 0 21 63 63 127 0 0 1 64 64 64 64 64
B3 Samba Whistle H 64 64 103 0 101 127 127 127 0 1 1 64 64 64 64 64
C4 Samba Whistle L 64 64 110 0 101 127 127 127 0 1 1 64 64 64 64 64
C#4 Guiro Short 64 64 124 0 95 63 63 127 0 0 1 64 64 64 64 64
| D4 Guiro Long | 64 64 | 106 0 | 110 63 | 63 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
D#4 Analog Claves 64 64 88 0 64 95 95 127 0 0 1 64 64 64 64 64
E4 Wood Block H 64 64 107 0 104 95 95 127 0 0 1 64 64 64 64 64
F4 Wood Block L 64 64 96 0 104 95 95 127 0 0 1 64 64 64 64 64
F#4 Scratch Push 64 64 89 4 21 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
ANALOG KIT(page 4 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
G4 Scratch Pull 64 64 94 4 34 127 127 127 0 0 1 64 64 64 64 64
G#4 Triangle Mute 64 64 127 2 25 95 95 127 0 0 1 64 64 64 64 64
A4 Triangle Open 64 64 127 2 25 127 127 127 0 0 1 64 64 64 64 64
| Bb4 Shaker | 64 64 | 106 0 | 83 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
B4 Jingle Bell 64 64 123 0 105 127 127 127 0 0 1 64 64 64 64 64
| C5 Bell Tree | 64 64 | 68 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |

XG Drum Default Data
JAZZ KIT(page 1 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
C#-1 Surdo Mute 64 64 102 3 51 95 95 127 0 0 1 64 64 64 64 64
| D-1 Surdo Open | 64 64 | 121 3 | 51 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#-1 Hi Q      | 64 64 | 63 0  | 51 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E-1 Whip Slap 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
F-1 Scratch Push 64 64 93 4 52 63 63 127 0 0 1 64 64 64 64 64
F#-1 Scratch Pull 64 64 116 4 52 63 63 127 0 0 1 64 64 64 64 64
| G-1 Finger Snap | 64 64 | 127 0 | 64 75 | 0 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ----- | ----- | --- | ---- | ----- | ----- |
G#-1 Click Noise 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
A-1 Metronome Click 64 64 94 0 64 63 63 127 0 0 1 64 64 64 64 64
Bb-1 Metronome Bell 64 64 98 0 64 63 63 127 0 0 1 64 64 64 64 64
B-1 Seq Click L 64 64 87 0 64 127 127 127 0 0 1 64 64 64 64 64
C0 Seq Click H 64 64 96 0 64 127 127 127 0 0 1 64 64 64 64 64
| C#0 Brush Tap | 64 64 | 49 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
D0 Brush Swirl L 64 64 47 0 64 127 127 127 0 1 1 64 64 64 64 64
D#0 Brush Slap 64 64 52 0 64 127 127 127 0 0 1 64 64 64 64 64
E0 Brush Swirl H 64 64 45 0 64 127 127 127 0 1 1 64 64 64 64 64
| F0 Snare Roll  | 64 64 | 79 0  | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F#0 Castanet   | 64 64 | 127 0 | 64 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| G0 SDRock M    | 64 64 | 121 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#0 Sticks     | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A0 Bass Drum M | 64 64 | 111 0 | 64 32  | 32 127  | 0 0 | 1 64 | 64 64 | 64 64 |
Bb0 Open Rim Shot 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
JAZZ KIT(page 2 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| B0 Bass Drum M | 64 64 | 102 0 | 64 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
| C1 BD Jazz     | 64 64 | 120 0 | 64 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
C#1 Side Stick 64 64 93 0 64 127 127 127 0 0 1 64 64 64 64 64
| D1 Snare M | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
D#1 Hand Clap 64 64 110 0 64 127 127 127 0 0 1 64 64 64 64 64
| E1 SD Room H | 64 64 | 123 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
F1 Jazz Tom 1 64 64 113 0 24 127 127 127 0 0 1 64 64 64 64 64
F#1 Hi-Hat Closed 64 64 91 1 77 32 32 127 0 0 1 64 64 64 64 64
G1 Jazz Tom 2 64 64 122 0 39 127 127 127 0 0 1 64 64 64 64 64
G#1 Hi-Hat Pedal 64 64 97 1 77 32 32 127 0 0 1 64 64 64 64 64
A1 Jazz Tom 3 64 64 112 0 52 127 127 127 0 0 1 64 64 64 64 64
| Bb1 Hi-Hat Open | 64 64 | 96 1 | 77 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ---- | ----- | ------ | --- | ---- | ----- | ----- |
B1 Jazz Tom 4 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
C2 Jazz Tom 5 64 64 110 0 83 127 127 127 0 0 1 64 64 64 64 64
C#2 Crash Cymbal 1 64 64 127 0 69 127 127 127 0 0 1 64 64 64 64 64
D2 Jazz Tom 6 64 64 116 0 104 127 127 127 0 0 1 64 64 64 64 64
D#2 Ride Cymbal 1 64 64 105 0 34 127 127 127 0 0 1 64 64 64 64 64
E2 Chinese Cymbal 64 64 120 0 34 127 127 127 0 0 1 64 64 64 64 64
F2 Ride Cymbal Cup 64 64 107 0 46 127 127 127 0 0 1 64 64 64 64 64
| F#2 Tambourine | 64 64 | 120 0 | 64 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
G2 Splash Cymbal 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
| G#2 Cowbell | 64 64 | 118 0 | 77 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |

XG Drum Default Data
JAZZ KIT(page 3 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
A2 Crash Cymbal 2 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
Bb2 Vibraslap 64 64 106 0 25 127 127 127 0 0 1 64 64 64 64 64
B2 Ride Cymbal 2 64 64 110 0 46 127 127 127 0 0 1 64 64 64 64 64
| C3 Bongo H  | 64 64 | 110 0 | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| C#3 Bongo L | 64 64 | 87 0  | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
D3 Conga H Mute 64 64 73 0 39 127 127 127 0 0 1 64 64 64 64 64
D#3 Conga H Open64 64 89 0 25 127 127 127 0 0 1 64 64 64 64 64
| E3 Conga L    | 64 64 | 111 0 | 64 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F3 Timbale H  | 64 64 | 91 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#3 Timbale L | 64 64 | 95 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G3 Agogo H    | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#3 Agogo L   | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A3 Cabasa     | 64 64 | 90 0  | 28 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb3 Maracas   | 64 64 | 103 0 | 21 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
B3 Samba Whistle H 64 64 103 0 101 127 127 127 0 1 1 64 64 64 64 64
C4 Samba Whistle L 64 64 110 0 101 127 127 127 0 1 1 64 64 64 64 64
C#4 Guiro Short 64 64 124 0 95 63 63 127 0 0 1 64 64 64 64 64
| D4 Guiro Long | 64 64 | 106 0 | 110 63 | 63 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| D#4 Claves    | 64 64 | 88 0  | 64 95  | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E4 Wood Block H 64 64 107 0 104 95 95 127 0 0 1 64 64 64 64 64
F4 Wood Block L 64 64 96 0 104 95 95 127 0 0 1 64 64 64 64 64
F#4 Cuica Mute 64 64 97 0 21 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
JAZZ KIT(page 4 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
G4 Cuica Open 64 64 107 0 34 127 127 127 0 0 1 64 64 64 64 64
G#4 Triangle Mute 64 64 127 2 25 95 95 127 0 0 1 64 64 64 64 64
A4 Triangle Open 64 64 127 2 25 127 127 127 0 0 1 64 64 64 64 64
| Bb4 Shaker | 64 64 | 106 0 | 83 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
B4 Jingle Bell 64 64 123 0 105 127 127 127 0 0 1 64 64 64 64 64
| C5 Bell Tree | 64 64 | 68 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |

XG Drum Default Data
BRUSH KIT(page 1 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
C#-1 Surdo Mute 64 64 102 3 51 95 95 127 0 0 1 64 64 64 64 64
| D-1 Surdo Open | 64 64 | 121 3 | 51 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#-1 Hi Q      | 64 64 | 63 0  | 51 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E-1 Whip Slap 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
F-1 Scratch Push 64 64 93 4 52 63 63 127 0 0 1 64 64 64 64 64
F#-1 Scratch Pull 64 64 116 4 52 63 63 127 0 0 1 64 64 64 64 64
| G-1 Finger Snap | 64 64 | 127 0 | 64 75 | 0 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ----- | ----- | --- | ---- | ----- | ----- |
G#-1 Click Noise 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
A-1 Metronome Click 64 64 94 0 64 63 63 127 0 0 1 64 64 64 64 64
Bb-1 Metronome Bell 64 64 98 0 64 63 63 127 0 0 1 64 64 64 64 64
B-1 Seq Click L 64 64 87 0 64 127 127 127 0 0 1 64 64 64 64 64
C0 Seq Click H 64 64 96 0 64 127 127 127 0 0 1 64 64 64 64 64
| C#0 Brush Tap | 64 64 | 49 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
D0 Brush Swirl L 64 64 47 0 64 127 127 127 0 1 1 64 64 64 64 64
D#0 Brush Slap 64 64 52 0 64 127 127 127 0 0 1 64 64 64 64 64
E0 Brush Swirl H 64 64 45 0 64 127 127 127 0 1 1 64 64 64 64 64
| F0 Snare Roll | 64 64 | 79 0  | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F#0 Castanet  | 64 64 | 127 0 | 64 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
G0 Brush Slap L 64 64 85 0 64 127 127 127 0 0 1 64 64 64 64 64
| G#0 Sticks     | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| A0 Bass Drum L | 64 64 | 116 0 | 64 32  | 32 127  | 0 0 | 1 64 | 64 64 | 64 64 |
Bb0 Open Rim Shot 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
BRUSH KIT(page 2 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| B0 Bass Drum M | 64 64 | 102 0 | 64 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
| C1 BD Soft     | 64 64 | 117 0 | 64 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
C#1 Side Stick 64 64 93 0 64 127 127 127 0 0 1 64 64 64 64 64
| D1 Brush Slap | 64 64 | 84 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
D#1 Hand Clap 64 64 110 0 64 127 127 127 0 0 1 64 64 64 64 64
| E1 Brush Tap | 64 64 | 74 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
F1 Brush Tom 1 64 64 127 0 24 127 127 127 0 0 1 64 64 64 64 64
F#1 Hi-Hat Closed 64 64 91 1 77 32 32 127 0 0 1 64 64 64 64 64
G1 Brush Tom 2 64 64 127 0 39 127 127 127 0 0 1 64 64 64 64 64
G#1 Hi-Hat Pedal 64 64 97 1 77 32 32 127 0 0 1 64 64 64 64 64
A1 Brush Tom 3 64 64 127 0 52 127 127 127 0 0 1 64 64 64 64 64
| Bb1 Hi-Hat Open | 64 64 | 96 1 | 77 32 | 32 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ---- | ----- | ------ | --- | ---- | ----- | ----- |
B1 Brush Tom 4 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
C2 Brush Tom 5 64 64 120 0 83 127 127 127 0 0 1 64 64 64 64 64
C#2 Crash Cymbal 1 64 64 127 0 69 127 127 127 0 0 1 64 64 64 64 64
D2 Brush Tom 6 64 64 122 0 104 127 127 127 0 0 1 64 64 64 64 64
D#2 Ride Cymbal 1 64 64 105 0 34 127 127 127 0 0 1 64 64 64 64 64
E2 Chinese Cymbal 64 64 120 0 34 127 127 127 0 0 1 64 64 64 64 64
F2 Ride Cymbal Cup 64 64 107 0 46 127 127 127 0 0 1 64 64 64 64 64
| F#2 Tambourine | 64 64 | 120 0 | 64 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
G2 Splash Cymbal 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
| G#2 Cowbell | 64 64 | 118 0 | 77 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |

XG Drum Default Data
BRUSH KIT(page 3 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
A2 Crash Cymbal 2 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
Bb2 Vibraslap 64 64 106 0 25 127 127 127 0 0 1 64 64 64 64 64
B2 Ride Cymbal 2 64 64 110 0 46 127 127 127 0 0 1 64 64 64 64 64
| C3 Bongo H  | 64 64 | 110 0 | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| C#3 Bongo L | 64 64 | 87 0  | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
D3 Conga H Mute 64 64 73 0 39 127 127 127 0 0 1 64 64 64 64 64
D#3 Conga H Open64 64 89 0 25 127 127 127 0 0 1 64 64 64 64 64
| E3 Conga L    | 64 64 | 111 0 | 64 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F3 Timbale H  | 64 64 | 91 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#3 Timbale L | 64 64 | 95 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G3 Agogo H    | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#3 Agogo L   | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A3 Cabasa     | 64 64 | 90 0  | 28 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb3 Maracas   | 64 64 | 103 0 | 21 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
B3 Samba Whistle H 64 64 103 0 101 127 127 127 0 1 1 64 64 64 64 64
C4 Samba Whistle L 64 64 110 0 101 127 127 127 0 1 1 64 64 64 64 64
C#4 Guiro Short 64 64 124 0 95 63 63 127 0 0 1 64 64 64 64 64
| D4 Guiro Long | 64 64 | 106 0 | 110 63 | 63 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| D#4 Claves    | 64 64 | 88 0  | 64 95  | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E4 Wood Block H 64 64 107 0 104 95 95 127 0 0 1 64 64 64 64 64
F4 Wood Block L 64 64 96 0 104 95 95 127 0 0 1 64 64 64 64 64
F#4 Cuica Mute 64 64 97 0 21 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
BRUSH KIT(page 4 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
G4 Cuica Open 64 64 107 0 34 127 127 127 0 0 1 64 64 64 64 64
G#4 Triangle Mute 64 64 127 2 25 95 95 127 0 0 1 64 64 64 64 64
A4 Triangle Open 64 64 127 2 25 127 127 127 0 0 1 64 64 64 64 64
| Bb4 Shaker | 64 64 | 106 0 | 83 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
B4 Jingle Bell 64 64 123 0 105 127 127 127 0 0 1 64 64 64 64 64
| C5 Bell Tree | 64 64 | 68 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |

XG Drum Default Data
CLASSIC KIT(page 1 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
C#-1 Surdo Mute 64 64 102 3 51 95 95 127 0 0 1 64 64 64 64 64
| D-1 Surdo Open | 64 64 | 121 3 | 51 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| -------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#-1 Hi Q      | 64 64 | 63 0  | 51 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E-1 Whip Slap 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
F-1 Scratch Push 64 64 93 4 52 63 63 127 0 0 1 64 64 64 64 64
F#-1 Scratch Pull 64 64 116 4 52 63 63 127 0 0 1 64 64 64 64 64
| G-1 Finger Snap | 64 64 | 127 0 | 64 75 | 0 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --------------- | ----- | ----- | ----- | ----- | --- | ---- | ----- | ----- |
G#-1 Click Noise 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
A-1 Metronome Click 64 64 94 0 64 63 63 127 0 0 1 64 64 64 64 64
Bb-1 Metronome Bell 64 64 98 0 64 63 63 127 0 0 1 64 64 64 64 64
B-1 Seq Click L 64 64 87 0 64 127 127 127 0 0 1 64 64 64 64 64
C0 Seq Click H 64 64 96 0 64 127 127 127 0 0 1 64 64 64 64 64
| C#0 Brush Tap | 64 64 | 49 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |
D0 Brush Swirl L 64 64 47 0 64 127 127 127 0 1 1 64 64 64 64 64
D#0 Brush Slap 64 64 52 0 64 127 127 127 0 0 1 64 64 64 64 64
E0 Brush Swirl H 64 64 45 0 64 127 127 127 0 1 1 64 64 64 64 64
| F0 Snare Roll | 64 64 | 79 0  | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F#0 Castanet  | 64 64 | 127 0 | 64 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| G0 Snare L    | 64 64 | 75 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#0 Sticks    | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
A0 Bass Drum L2 64 64 116 0 64 32 32 127 0 0 1 64 64 64 64 64
Bb0 Open Rim Shot 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
CLASSIC KIT (page 2 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
B0 Gran Cassa 64 64 127 0 64 32 32 127 0 0 1 64 64 64 64 64
C1 Gran Cassa Mute 64 64 127 0 64 32 32 127 0 0 1 64 64 64 64 64
C#1 Side Stick 64 64 93 0 64 127 127 127 0 0 1 64 64 64 64 64
D1 Marching Sn M 64 64 79 0 64 127 127 127 0 0 1 64 64 64 64 64
D#1 Hand Clap 64 64 110 0 64 127 127 127 0 0 1 64 64 64 64 64
E1 Marching Sn H 64 64 79 0 64 127 127 127 0 0 1 64 64 64 64 64
F1 Jazz Tom 1 64 64 111 0 24 127 127 127 0 0 1 64 64 64 64 64
F#1 Hi-Hat Closed 64 64 91 1 77 32 32 127 0 0 1 64 64 64 64 64
G1 Jazz Tom 2 64 64 113 0 39 127 127 127 0 0 1 64 64 64 64 64
G#1 Hi-Hat Pedal 64 64 97 1 77 32 32 127 0 0 1 64 64 64 64 64
A1 Jazz Tom 3 64 64 104 0 52 127 127 127 0 0 1 64 64 64 64 64
Bb1 Hi-Hat Open 64 64 96 1 77 32 32 127 0 0 1 64 64 64 64 64
B1 Jazz Tom 4 64 64 87 0 64 127 127 127 0 0 1 64 64 64 64 64
C2 Jazz Tom 5 64 64 103 0 83 127 127 127 0 0 1 64 64 64 64 64
C#2 Hand Cym Open L 64 64 123 0 64 127 127 127 0 0 1 64 64 64 64 64
D2 Jazz Tom 6 64 64 116 0 104 127 127 127 0 0 1 64 64 64 64 64
D#2 Hand Cym.Closed L 64 64 124 0 34 127 127 127 0 0 1 64 64 64 64 64
E2 Chinese Cymbal 64 64 120 0 34 127 127 127 0 0 1 64 64 64 64 64
F2 Ride Cymbal Cup 64 64 107 0 46 127 127 127 0 0 1 64 64 64 64 64
F#2 Tambourine 64 64 120 0 64 63 63 127 0 0 1 64 64 64 64 64
G2 Splash Cymbal 64 64 127 0 64 127 127 127 0 0 1 64 64 64 64 64
G#2 Cowbell 64 64 118 0 77 63 63 127 0 0 1 64 64 64 64 64

XG Drum Default Data
CLASSIC KIT(page 3 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
A2 Hand Cym Open H 64 64 127 0 51 127 127 127 0 0 1 64 64 64 64 64
Bb2 Vibraslap 64 64 106 0 25 127 127 127 0 0 1 64 64 64 64 64
B2 Hand Cym Closed H 64 64 106 0 46 127 127 127 0 0 1 64 64 64 64 64
| C3 Bongo H  | 64 64 | 110 0 | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ----------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| C#3 Bongo L | 64 64 | 87 0  | 110 95 | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
D3 Conga H Mute 64 64 73 0 39 127 127 127 0 0 1 64 64 64 64 64
D#3 Conga H Open64 64 89 0 25 127 127 127 0 0 1 64 64 64 64 64
| E3 Conga L    | 64 64 | 111 0 | 64 95  | 95 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F3 Timbale H  | 64 64 | 91 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#3 Timbale L | 64 64 | 95 0  | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G3 Agogo H    | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#3 Agogo L   | 64 64 | 108 0 | 34 100 | 100 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A3 Cabasa     | 64 64 | 90 0  | 28 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb3 Maracas   | 64 64 | 103 0 | 21 63  | 63 127  | 0 0 | 1 64 | 64 64 | 64 64 |
B3 Samba Whistle H 64 64 103 0 101 127 127 127 0 1 1 64 64 64 64 64
C4 Samba Whistle L 64 64 110 0 101 127 127 127 0 1 1 64 64 64 64 64
C#4 Guiro Short 64 64 124 0 95 63 63 127 0 0 1 64 64 64 64 64
| D4 Guiro Long | 64 64 | 106 0 | 110 63 | 63 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------- | ----- | ----- | ------ | ------ | --- | ---- | ----- | ----- |
| D#4 Claves    | 64 64 | 88 0  | 64 95  | 95 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E4 Wood Block H 64 64 107 0 104 95 95 127 0 0 1 64 64 64 64 64
F4 Wood Block L 64 64 96 0 104 95 95 127 0 0 1 64 64 64 64 64
F#4 Cuica Mute 64 64 97 0 21 127 127 127 0 0 1 64 64 64 64 64

XG Drum Default Data
CLASSIC KIT(page 4 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
G4 Cuica Open 64 64 107 0 34 127 127 127 0 0 1 64 64 64 64 64
G#4 Triangle Mute 64 64 127 2 25 95 95 127 0 0 1 64 64 64 64 64
A4 Triangle Open 64 64 127 2 25 127 127 127 0 0 1 64 64 64 64 64
| Bb4 Shaker | 64 64 | 106 0 | 83 63 | 63 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ----- | ------ | --- | ---- | ----- | ----- |
B4 Jingle Bell 64 64 123 0 105 127 127 127 0 0 1 64 64 64 64 64
| C5 Bell Tree | 64 64 | 68 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ---- | ------ | ------- | --- | ---- | ----- | ----- |

XG Drum Default Data
SFX1 KIT(page 1 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| C#-1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D#-1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| E-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#-1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#-1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb-1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| B-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C#0  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D#0  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| E0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#0  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#0  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb0  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |

XG Drum Default Data
SFX1 KIT(page 2 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| B0  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
C1 Guitar Cutting Noise 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
C#1 Guitar Cutting Noise 2 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
D1 Dist. Cut Noise** 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
D#1 String Slap 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
E1 Bass Slide** 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
F1 Pick Scrape** 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
| F#1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| G1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| B1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C2  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C#2 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D2  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D#2 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E2 FL.Key Click 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
| F2  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| F#2 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G2  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#2 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |

XG Drum Default Data
SFX1 KIT(page 3 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| A2         | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| Bb2        | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| B2         | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C3         | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C#3        | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D3         | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D#3        | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| E3         | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F3         | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#3        | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G3         | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#3 Rain   | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| A3 Thunder | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| Bb3 Wind   | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| B3 Stream  | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| C4 Bubble  | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| C#4 Feed   | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| D4         | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D#4        | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| E4         | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F4         | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#4        | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |

XG Drum Default Data
SFX1 KIT(page 4 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| G4     | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| G#4    | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A4     | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb4    | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| B4     | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C5 Dog | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
C#5 Horse Gallop 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
| D5 Bird 2    | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#5 Kitty**  | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| E5 Growl**   | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| F5 Haunted** | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| F#5 Ghost    | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| G5 Maou      | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
**: [Ext.] (Optional SFXvoice)
With MU50, value for Rcv. Note Off is “0”.

XG Drum Default Data
SFX2 KIT(page 1 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| C#-1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ---- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D#-1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| E-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#-1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#-1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb-1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| B-1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C#0  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D#0  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| E0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#0  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#0  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A0   | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb0  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |

XG Drum Default Data
SFX2 KIT(page 2 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| B0           | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| C1 Dial Tone | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
C#1 Door Creaking 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
| D1 Door Slam | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#1 Scratch  | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| E1 Scratch 2 | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| F1 Windchime | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
F#1 Telephone Ring2 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
| G1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| G#1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb1 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| B1  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C2  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| C#2 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D2  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| D#2 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
E2 Engine Start 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
F2 Tire Screech 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
F#2 Car Passing 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
| G2 Crash  | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| --------- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| G#2 Siren | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |

XG Drum Default Data
SFX2 KIT(page 3 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| A2 Train     | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| Bb2 Jetplane | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| B2 Starship  | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
C3 Burst Noise 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
| C#3 Coaster  | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D3 SbMarine  | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| D#3          | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| E3           | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F3           | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#3          | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G3           | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G#3 Laughing | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| A3 Screaming | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| Bb3 Punch    | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| B3 Heartbeat | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| C4 Footsteps | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
C#4 Applaus2** 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
| D4  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#4 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| E4  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F4  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#4 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |

XG Drum Default Data
SFX2KIT(page 4 of 4)
Note Pitch Level Alt Pan Rev Cho Var Key Off On Coff Q Att D1 D2
C F
| G4  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| --- | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| G#4 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| A4  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| Bb4 | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| B4  | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
C5 Machine Gun 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
C#5 Laser Gun 64 64 127 0 64 127 127 127 0 1 1 64 64 64 64 64
| D5 Explosion | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| ------------ | ----- | ----- | ------ | ------- | --- | ---- | ----- | ----- |
| D#5 FireWork | 64 64 | 127 0 | 64 127 | 127 127 | 0 1 | 1 64 | 64 64 | 64 64 |
| E5           | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F5           | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| F#5          | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
| G5           | 64 64 | 127 0 | 64 127 | 127 127 | 0 0 | 1 64 | 64 64 | 64 64 |
**: [Ext.] (Optional SFXvoice)
With MU50, value for Rcv. Note Off is “0”.

XG Bank Definition
Bank No. 1-63:Voices that can be created by modifying voice parameters
| Bank No.                                    | Description                 | Note (example) |
| ------------------------------------------- | --------------------------- | -------------- |
| 0 Capital Tone Voice                        | GMbasic tone                |                |
| 1                                           | Key Scaled Panning (L to R) |                |
| 2                                           | Key Scaled Panning (R to L) |                |
| 3 Voices that can be added without changing | Stereo                      |                |
| 4 the sound                                 | With LFO                    |                |
| 5                                           | Without LFO                 |                |
| 6                                           | Single Element              |                |
7
| 8                                            | Slow Attack   |     |
| -------------------------------------------- | ------------- | --- |
| 9                                            | Fast Attack   |     |
| 10                                           | Long Release  |     |
| 11 Voices that can be added mainly by        | Short Release |     |
| 12 AEGchanges (or by equivalent operations). | Fast Decay    |     |
| 13                                           | Slow Decay    |     |
| 14                                           | Double Attack |     |
15

XG Bank Definition
| Bank No.                                        | Description | Note (example) |
| ----------------------------------------------- | ----------- | -------------- |
| 16                                              | Bright      |                |
| 17                                              | Bright      |                |
| 18                                              | Dark        |                |
| 19 Voices which can be added mainly by          | Dark        |                |
| 20 Cutoff changes (or equivalent operations) or | Resonant    |                |
| 21 changes in Q(or equivalent operations).      |             |                |
22
23
| 24                                         | Attack Transient  |     |
| ------------------------------------------ | ----------------- | --- |
| 25                                         | Release Transient |     |
| 26                                         | Sweep             |     |
| 27 Voices which can be added mainly by     | Rezo Sweep        |     |
| 28 FEG changes (or equivalent operations). | Muted             |     |
29
30
31

XG Bank Definition
| Bank No.                                    | Description |           | Note (example)        |
| ------------------------------------------- | ----------- | --------- | --------------------- |
| 32                                          |             |           | Detune with same wave |
| 33                                          |             |           | Detune with same wave |
| 34 Voices which can be added by modifying   |             |           | Detune with same wave |
| 35 the pitch (or equivalent operations),    |             | including | Octave Layered        |
| 36 1-element <> 2-element extensions of the |             |           | Octave Layered        |
| 37 same type of voice.                      |             |           | 5th Layered           |
| 38                                          |             |           | 5th Layered           |
| 39                                          |             |           | Bend Up/Down          |
| 40                                          |             |           | Tutti                 |
| 41 Voices which can be added by layering    |             |           | Tutti                 |
| 42 with an entirely different type of wave. |             |           | Tutti                 |
| 43                                          |             |           | Velocity Switch       |
| 44                                          |             |           | Velocity Switch       |
| 45                                          |             |           | Velocity X-Fade       |
| 46                                          |             |           | Velocity X-Fade       |
| 47                                          |             |           | Breathy WW            |

XG Bank Definition
Bank No. Description Note (example)
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63

XG Bank Definition
Bank No. 64-127:Voices that can be created by changing the wave
| Bank No. | Description | Note (example) |
| -------- | ----------- | -------------- |
64
65
| 66 Identical instrument sounds which can       |     |     |
| ---------------------------------------------- | --- | --- |
| 67 be created using an entirely different type |     |     |
| 68 of wave.                                    |     |     |
69
70
71
72
73
74
75
76
77
78
79

XG Bank Definition
| Bank No. | Description | Note (example) |
| -------- | ----------- | -------------- |
80
81
| 82 Identical instrument sounds which can       |     |     |
| ---------------------------------------------- | --- | --- |
| 83 be created using an entirely different type |     |     |
| 84 of wave.                                    |     |     |
85
86
87
88
89
90
91
92
93
94
95

XG Bank Definition
| Bank No.                                  | Description          | Note (example) |
| ----------------------------------------- | -------------------- | -------------- |
| 96                                        | Dulcimer -> Cimbalon |                |
| 97                                        | Nylon Gt. -> Ukelele |                |
| 98 Voices which are not unacceptably      |                      |                |
| 99 incompatible with capital tones,       | even though          |                |
| 100 from a perspective of category and    |                      |                |
| 101 instrumental family they are entirely |                      |                |
| 102 different instruments                 |                      |                |
103
104
105
106
107
108
109
110
111

XG Bank Definition
Bank No. Description Note (example)
112
113
114 User voices which are not unacceptably
115 incompatible with capital tones.
116
117
118
119
120
121
122
123
124
125
126
127

XG Specification Definitions
Definition:
GM - Abbreviation for “General MIDI.”Instruments that are GM-compatible follow a standardized set of rules for memory
organization and drum mapping,as well as meeting a minimum set of requirements for the reception of selected MIDI messages.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Tone generators - Electronic components that produce sound.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
variation voice - An alternate sound to those described in the “General MIDI Sound Set.”
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
basic voice - A voice described in the General MIDI Sound Set.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
graphic equalizer - A signal processor that enables various bands of frequencies to be selectively attenuated or boosted.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Bank Select messages - Control change #0 (MSB) and #32 (LSB) messages.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Bank Select LSB- The Bank Select “Least Significant Bit,”control change #32.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
XG Melody Sounds Bank Definitions:
| Bank #                                                 | Description              | Bank #                                                 | Description        |
| ------------------------------------------------------ | ------------------------ | ------------------------------------------------------ | ------------------ |
| ------------------------------------------------------ |                          | ------------------------------------------------------ |                    |
| 0                                                      | GM Sound Set             | 20                                                     | Resonant           |
| 1 - 2                                                  | Key Scaled Panning (KSP) | 24                                                     | Attack Transient   |
| 3 - 5                                                  | Stereo                   | 25                                                     | Release Transient  |
| 6                                                      | Single Element           | 26                                                     | Sweep              |
| 8                                                      | Slow Attack              | 27                                                     | Rezo Sweep         |
| 9                                                      | Fast Attack              | 28                                                     | Muted              |
| 10                                                     | Long Release             | 32 - 34                                                | Detune             |
| 11                                                     | Short Release            | 35 - 36                                                | Octave Layered     |
| 12                                                     | Fast Decay               | 37 - 38                                                | Fifth Layered      |
| 13                                                     | Slow Decay               | 39                                                     | Bend Up/Down       |
| 14                                                     | Double Attack            | 40 - 42                                                | Tutti              |
| 16 - 17                                                | Bright                   | 43 - 44                                                | Velocity Switch    |
| 18 - 19                                                | Dark                     | 45 - 46                                                | Velocity Crossfade |
|                                                        |                          | 64 - 127                                               | Other Wave         |
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Bank Select MSB- The Bank Select “Most Significant Bit,”control change #0.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
SFX- Abbreviation for “Special Effects.”
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Control Change commands - MIDI enables expressivity in electronic musical instruments through the use of special channel
messages called control change (“cc”) messages,where realtime controllers such as wheels,sliders,and footpedals—or software
emulations of these devices—are used to impart change to a sound as it is playing. The MIDI Specification defines 128 different
controllers,each given a unique control number from 0 to 127.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
System Exclusive messages - Types of MIDI messages that affect the entire instrument or handle data unique to a manufacturer and
model. The concept of “channel”does not apply to System messages—they affect all voices.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
AEG - Abbreviation for “Amplitude Envelope Generator,”a device which enables change in loudness over time.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
XGRhythm Kits:
| MSB | Prog # (Decimal) | Description |
| --- | ---------------- | ----------- |
----------------------------------------------------------------------
| 127 | 1   | Standard Kit   |
| --- | --- | -------------- |
| 127 | 2   | Standard Kit 2 |
| 127 | 9   | Room Kit       |
| 127 | 17  | Rock Kit       |
| 127 | 25  | Electronic Kit |
| 127 | 26  | Analog Kit     |
| 127 | 33  | Jazz Kit       |
| 127 | 41  | Brush Kit      |
| 127 | 49  | Classic Kit    |
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Channel Mode messages - Special MIDI control change messages designed to affect the overall operating system of an instrument.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
XG Melody Sounds Bank Definitions:
| Bank #                                                 | Description              | Bank #                                                 | Description        |
| ------------------------------------------------------ | ------------------------ | ------------------------------------------------------ | ------------------ |
| ------------------------------------------------------ |                          | ------------------------------------------------------ |                    |
| 0                                                      | GM Sound Set             | 20                                                     | Resonant           |
| 1 - 2                                                  | Key Scaled Panning (KSP) | 24                                                     | Attack Transient   |
| 3 - 5                                                  | Stereo                   | 25                                                     | Release Transient  |
| 6                                                      | Single Element           | 26                                                     | Sweep              |
| 8                                                      | Slow Attack              | 27                                                     | Rezo Sweep         |
| 9                                                      | Fast Attack              | 28                                                     | Muted              |
| 10                                                     | Long Release             | 32 - 34                                                | Detune             |
| 11                                                     | Short Release            | 35 - 36                                                | Octave Layered     |
| 12                                                     | Fast Decay               | 37 - 38                                                | Fifth Layered      |
| 13                                                     | Slow Decay               | 39                                                     | Bend Up/Down       |
| 14                                                     | Double Attack            | 40 - 42                                                | Tutti              |
| 16 - 17                                                | Bright                   | 43 - 44                                                | Velocity Switch    |
| 18 - 19                                                | Dark                     | 45 - 46                                                | Velocity Crossfade |
|                                                        |                          | 64 - 127                                               | Other Wave         |
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
extension voices - Same as “Variation voices”i.e.,alternate sounds to those described in the “General MIDI Sound Set.”
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
initialization - Reset procedure that causes default settings to be entered in a number of parameters.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Portamento - Glide; the smooth transformation from one note to another.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Panpot - A control that enables the relative position of a sound in the left-right stereo spectrum to be changed.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
diminuendo and crescendo -
Diminuendo:a smooth decrease in volume over a specified period of time.
Crescendo:a smooth increase in volume over a specified period of time.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Sustain - A MIDI control change message (usually derived from a physical pedal) that acts like the sustain pedal of a piano.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Sostenuto - A MIDI control change messages (cc #66) which replicates the actions of the center pedal of an acoustic grand piano,
sustaining only those notes played at the time the pedal was depressed,with all new notes given no sustain.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Soft Pedal - A MIDI control change messages (cc #67) which replicates the actions of the left pedal of an acoustic grand piano.
In an acoustic piano,the Soft pedal quiets the sound by shifting the hammers to fewer strings or by lowering the damper; the MIDI
controller of the same name creates a similar effect by means of filtering.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
resonance - Refers to an emphasis of the filter’s center (“cutoff”) frequency. Increasing resonance amounts cause a sound to become
increasingly nasal.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
envelope release time - The amount of time it takes for an envelope generator to return from its sustain level to zero after a note is
no longer played.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
envelope attack time -The amount of time it takes for an envelope generator to rise from zero when a note is first sounded.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
filter cutoff frequency - The center frequency point above or below which a filter attenuates a signal.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
reverb send level - The amount of signal being routed to a device that adds reverberant effects.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
chorus send level - The amount of signal being routed to a device that adds pitch change effects such as chorusing.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
variation effect send level - The amount of signal being routed to a device that adds various effects,including reverberation and
pitch change such as chorusing.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
portamento control - A MIDI control change message (cc #84) that sets the note number that a new note will glide from when
glide is enabled. If the new note is the same as the Portamento Control value,it will sound without re-triggering (that is,it will play
legato).
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Mode 4 - A MIDI “mode”determines how an instrument will recognize voice messages. There are four basic modes. Mode 4 is
sometimes called “Omni Off/Mono.”An instrument set to operate in Mode 4 will respond to MIDI data on a selected channel or
channels (as opposed to all channels) but can only be played monophonically (that is,one note at a time,so that chords cannot be
sounded). Mono mode is particularly useful for receiving data from guitar controllers and for purposes such as independent pitch
bend of individual notes,portamento at specific rates between two notes,or transposition effects.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Mode 3 - A MIDI “mode”determines how an instrument will recognize voice messages. There are four basic modes. Mode 3 is
sometimes called “Omni Off/Poly.”An instrument set to operate in Mode 3 will respond to MIDI data on a selected channel or
channels (as opposed to all channels) and can be played polyphonically (that is,chords can be sounded).
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Channel Aftertouch - A specialized controller message that is generated by many MIDI keyboards,channel aftertouch is a stream of
continuous data that reflects how hard a key is physically being pressed down (or,more rarely,how a key is moved from side to side)
while a note is being played. This data can then be used by the receiving instrument to alter timbre,volume or pitch in real time; for
example,a sound can be made brighter,louder,or given vibrato as a key is pressed down with increased force. Channel Pressure is a
message which affects all notes played on a particular MIDI channel. In other words,when a chord is played on an instrument that
utilizes Channel Pressure,the pressure of each key will be detected independently and the highest value (that of the key being pressed
most strongly) is transmitted as aftertouch. A receiving instrument capable of recognizing Channel Pressure messages then applies
that value equally to all notes in the chord.
Click HEREto return to the text you were reading...

XG Specification Definitions
Definition:
Polyphonic Aftertouch - A specialized controller message that is generated by many MIDI keyboards,channel aftertouch is a stream
of continuous data that reflects how hard a key is physically being pressed down (or,more rarely,how a key is moved from side to
side) while a note is being played. This data can then be used by the receiving instrument to alter timbre,volume or pitch in real
time; for example,a sound can be made brighter,louder,or given vibrato as a key is pressed down with increased force. Polyphonic
Key Pressure is a message which is separately transmitted for each note being played. In other words,when a chord is played on an
instrument that utilizes Polyphonic Key Pressure,the pressure of each key will be detected independently and all values transmitted
as aftertouch. A receiving instrument capable of recognizing Polyphonic Key Pressure messages will then apply each value
independently to each of the notes in the chord.
Click HEREto return to the text you were reading...