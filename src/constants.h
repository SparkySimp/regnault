#pragma once
// constants.h - some physical constants required by the Regnault engine
// Copyright (c) 2024 Kıvılcım L. Öztürk

namespace regnault {
	namespace consts {
	// SI base constants

	/// The unpertubed ground-state hyperfine transition frequency of the caesium-133 atom, in Hz.
	/// This is an SI base constant, used for defining the second. 
	const double CS133_TFREQ = 9192631770; /*Hz*/

	/// The speed of light in vacuum, in meters per second.
	/// This is an SI base constant, used for defining the metre.
	const double SPEED_OF_LIGHT = 29979258;/*m/s*/
	/// The Planck constant, in Joule seconds
	/// This is an SI base constant, used for defining the kilogram.
	const double PLANCK_CONST = 6.62607015E-34;/*Js*/
	/// Electron charge, in Coulombs
	/// This is an SI base constant, used for defining the ampere.
	const double ELECTRON_CHARGE = 1.602176634E-19;/*C*/
	/// The Boltzmann constant, in Joules per Kelvin
	/// This is an SI base constant, used for defining the Kelvin.
	const double BOLTZMANN_CONST = 1.380649E-23;/*J/K*/
	/// The Avogadro constant, in pieces per mole
	/// This is an SI base constant, used for defining the mole. 
	const double AVOGADRO_CONST = 6.02214076E23;/*1/mol*/
	/// Luminous efficacy of the monochromatic radiation of frequency 540(10^12) Hz, in lumens per watt
	/// This is an SI base constant, used for defining the candela.
	const double CANDELA_CONST = 683; /*lm/W*/

	// end of SI base constants region
	}
}