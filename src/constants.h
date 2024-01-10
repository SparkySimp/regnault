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

	/// The Regnault constant, in joules per moles Kelvin
	const double REGNAULT_CONST = BOLTZMANN_CONST * AVOGADRO_CONST; /*J/molK*/
	/// The Newton constant, in Newton metre square per kilogram squared.
	const double NEWTON_CONST = 6.674E-11; /*Nm^2/kg^2*/
	/// The gravitational acceleration at the surface of the Earth,
	/// on 45 degrees latitude, at sea level, in meters per second squared.
	const double SGRAVACCEL = 9.80665; 
	
	/// The Coulomb constant, in Newton meter squared per Coulomb squared.
	const double COULOMB_CONST = 8.9875517923E9; /*N*m^2/C^2*/
	/// The electric permitivity of vacuum, in Farads per meter.
	const double ELECTRIC_PERMITTIVITY = 8.8541878128E-12; /*F/m*/
	/// The electric permeability of vacuum, in Henrys per meter.
	const double ELECTRIC_PERMEABILITY = 1.25663706212E-6; /*N/A^2*/
	
	/// The impedance of vacuum, in Ohms. 
	const double VACUUM_IMPEDANCE = 376.730313668; /*Ohm*/
	/// The magnetic permeability of vacuum, in Henrys per meter.
	const double VACUUM_PERMEABILITY = 1.25663706212E-6; /*H/m*/
	/// The magnetic permitivity of vacuum, in Farads per meter.
	const double VACUUM_PERMITTIVITY = 8.8541878128E-12; /*F/m*/
	}
}