# Audio
Application allows user to define instruments and audio post-processing machines as expression trees.

### Audio Processing
Continuous feedback is essential for the creative process. The user must be able to 
hear the effects of their changes immedietly, without waiting for the computer to process complex
expression trees across megabytes of audio data. 

In order to obtain this the audio processing must meet the following requirements.

* Isolate changes so only values that are likely to have changed are recalculated.
* Calculate each value as few times as possible. 
* Maintain as small a memory footprint as possible by continuously saving playback data to .wav files.
Keep only what is changing in memory.
* Store discrete logical chunks in independent files so they can be loaded into memory independently. 
 