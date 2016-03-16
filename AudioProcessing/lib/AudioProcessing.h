/*
 * Author Kelson Ball, 2016
 * This header file defines an external interface for C code
 * that performs resource intensive, performance critical audio processing.
 * This interface should be interopable with all CLI/.NET/Mono languages.
 * The target client language is C# 6.0
 * Serialized data (char* parameters) will be defined in ... / ** /InteropSpecification.md
 *
 */


/*
 * The basic heirarchy is as follows
 * Audio Out 						// A byte array containing aggregated audio output that can be mapped directly to a .wav file
 *   -> Channels 					// An ordered collection of Blocks. Metadata: Pan, Volume, ...
 *     -> Blocks 					// A user defined set of Notes played on a single instrument. Metadata: Volume, ReverbData, ...
 *        -> Notes 					// Defines a starting point, ending point, and offset to be applied to the parent blocks instrument.
 * Instrument 						// An expresion tree and post-processor for defining sounds based on pitch and state.
 *   -> Nodes
 *     - WaveSource
 *       - Function					// MetaData: Shape, Frequency, PitchOffset (Harmonic), Amplitude, ...
 *       - File 					// MetaData: FileLocation, FileFormat, ...
 *       - AudioInputDevice
 *       - ...
 *     - WaveStatelessFilter
 *     - WaveFrequencyFilter
 *     - WaveformBrush
 *     - ...
 *	   -> Nodes
 */

 /*
  * Each of the items will have an Add and Remove function that will return an unsigned integer Id.
  * Each item in the heirarchy will have a SelectById function.
  * Each item will have an Edit[Item][Parameter]([Id], [ParameterValue]) function that assumes the correct parent container is selected.
  *
  */

#ifndef AUDIOPROCESSING_H
#define AUDIOPROCESSING_H


typedef unsigned int uint;

/// <summary>
///
/// </summary>


/// <summary>
///
/// </summary>


/// <summary>
///
/// </summary>


/// <summary>
///
/// </summary>


/// <summary>
///
/// </summary>


/// <summary>
///
/// </summary>


/// <summary>
///	Adds an instrument based on serialized data and returns its Id.
/// </summary>
uint AddInstrument(char* instrument_data, uint length);

/// <summary>
///	Removes an instrument based on its Id.
/// </summary>
uint RemoveInstrument(uint instrument_id);

/// <summary>
/// Adds a note to the selected instrument and block.
/// </summary>
uint AddNote(uint start, uint end, uint pitch);

/// <summary>
/// Removes a note from the selected instrument and block by Id.
/// </summary>
uint RemoveNote(uint note_id);


#endif

















