# Basal Metabolic Rate and TDEE Estimation System

The Basal Metabolic Rate (BMR) Calculator is a command-line application developed in C to provide precise metabolic assessments. Unlike basic caloric calculators, this system incorporates body composition variables including Lean Body Mass (LBM) and Fat Mass (FM) to derive more accurate biological energy requirements.

## Core Computational Logic

The application implements a multi-step physiological assessment to determine the caloric needs of an individual. It first calculates the Lean Body Mass and Fat Mass by processing the total body weight against the user-provided body fat percentage. This distinction is critical as muscle tissue and fat tissue have different metabolic demands.

Following the body composition analysis, the program applies gender-specific metabolic formulas that factor in age and mass to establish the BMR. This value represents the baseline energy expenditure required for vital organ function at rest. The system then integrates Non-Exercise Activity Thermogenesis (NEAT) and Physical Activity (PA) coefficients to estimate the Total Daily Energy Expenditure (TDEE), providing the user with both a minimum caloric floor and a recommended maximum intake for weight maintenance.

## Technical Implementation and Interface

From a software engineering perspective, the project demonstrates proficiency in procedural programming and low-level resource management. The application features a custom-built dynamic terminal interface that utilizes the unistd.h library for time-based visual effects, such as a blinking text notification system. This provides an interactive user experience within a standard command-line environment.

Input handling is managed through robust data validation to ensure that physiological parameters remain within realistic numerical bounds. The use of case-insensitive string comparison functions allows for flexible user input regarding gender classification, reducing common runtime errors associated with strict string matching.

## Engineering Competencies

Development of this tool involved the practical application of several computer science concepts. These include the implementation of complex conditional branching to categorize various activity levels and the use of standard input/output streams to create a cohesive data-driven application. The project highlights the ability to translate complex biological formulas into executable code while maintaining a focus on user interaction and data integrity.

Developed by Aitsara Phetsila, Computer Engineering Student at Ramkhamhaeng University.
