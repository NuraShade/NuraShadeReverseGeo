<div align="center">
  <h1>NuraShade Reverse Geo</h1>
  <p>A reverse geocoding solution for Rainmeter skins</p>
  
  <p>
    <img src="https://img.shields.io/badge/Rainmeter-Skin-blue" alt="Rainmeter Skin">
    <img src="https://img.shields.io/badge/License-CC--BY--SA--3.0-green" alt="License: CC-BY-SA-3.0">
    <img src="https://img.shields.io/badge/BigDataCloud-API-orange" alt="BigDataCloud API">
  </p>
</div>

## 🌍 Overview

NuraShade Reverse Geo is a Rainmeter configuration component that provides reverse geocoding capabilities using the BigDataCloud API. Given a latitude and longitude, it retrieves detailed location information including country, city, subdivision, continent, postcode, and more. This package is designed to complement the NuraShade weather suite and enhance location-based displays in Rainmeter skins.

## 📁 File Structure

<table>
  <thead>
    <tr>
      <th>File</th>
      <th>Description</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code>ReverseGeo.inc</code></td>
      <td>Main configuration with WebParser measures for reverse geocoding data</td>
    </tr>
    <tr>
      <td><code>Vars.inc</code></td>
      <td>Configuration variables including coordinates and API settings</td>
    </tr>
  </tbody>
</table>

## ⚙️ Configuration

Before using these reverse geocoding measures, you need to configure your location coordinates and preferences:

```ini
[Variables]
Latitude=29.704813
Longitude=72.560036
LocalityLanguage=en
ReverseGeo_Debug_Path=ReverseGeo.json
; Options  0,1,2
; 0: Does not log DEBUG messages from WebParser.
; 1: Logs DEBUG message to the log. Rainmeter must also be in Debug mode.
; 2: Saves the downloaded webpage to a file.
ReverseGeoDebug=0
; The rate in milliseconds determining how often the webpage is 
; downloaded. This is relative to the config's main Update rate 
; and any UpdateDivider on the measure. 
; So the formula would be 
; Update X UpdateDivider X UpdateRate = "how often the measure connects to the site".
ReverseGeo_Update_Rate=3600
```

## 📍 Reverse Geocoding Features

<table>
  <thead>
    <tr>
      <th>Feature</th>
      <th>Measure</th>
      <th>Description</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Locality Language Requested</td>
      <td><code>Measure_LocalityLanguageRequested</code></td>
      <td>The locality language requested for location data</td>
    </tr>
    <tr>
      <td>Continent</td>
      <td><code>Measure_Continent</code></td>
      <td>Name of the continent for the given coordinates</td>
    </tr>
    <tr>
      <td>Continent Code</td>
      <td><code>Measure_ContinentCode</code></td>
      <td>Two-letter continent code</td>
    </tr>
    <tr>
      <td>Country Name</td>
      <td><code>Measure_CountryName</code></td>
      <td>Full name of the country</td>
    </tr>
    <tr>
      <td>Country Code</td>
      <td><code>Measure_CountryCode</code></td>
      <td>ISO 3166-1 alpha-2 country code</td>
    </tr>
    <tr>
      <td>Principal Subdivision</td>
      <td><code>Measure_PrincipalSubdivision</code></td>
      <td>Name of the principal administrative subdivision (state/province)</td>
    </tr>
    <tr>
      <td>Principal Subdivision Code</td>
      <td><code>Measure_PrincipalSubdivisionCode</code></td>
      <td>ISO 3166-2 code for the principal subdivision</td>
    </tr>
    <tr>
      <td>City</td>
      <td><code>Measure_City</code></td>
      <td>Name of the city</td>
    </tr>
    <tr>
      <td>Locality</td>
      <td><code>Measure_Locality</code></td>
      <td>Specific locality information</td>
    </tr>
    <tr>
      <td>Postcode</td>
      <td><code>Measure_Postcode</code></td>
      <td>Postal code for the location</td>
    </tr>
    <tr>
      <td>Plus Code</td>
      <td><code>Measure_PlusCode</code></td>
      <td>Open Location Code (Plus Code) for precise positioning</td>
    </tr>
  </tbody>
</table>

## 🔧 Usage Instructions

1. **Include the measures in your Rainmeter skin:**
   ```ini
   [Rainmeter]
   @include=#@#Includes\ReverseGeo\ReverseGeo.inc
   ```

2. **Configure your location:**
   Edit the `[Variables]` section in `Vars.inc` to set your latitude and longitude.

3. **Customize language (optional):**
   Adjust the `LocalityLanguage` variable to your preferred language code.

4. **Reference the measures in your skin:**
   ```ini
   [MeterLocation]
   Meter=String
   MeasureName=Measure_City
   MeasureName2=Measure_CountryName
   Text=%1, %2
   ```

## 🌐 Supported Languages

The BigDataCloud API supports multiple languages for locality information. Set the `LocalityLanguage` variable to one of these codes:

- `en` - English (default)
- `es` - Spanish
- `fr` - French
- `de` - German
- `pt` - Portuguese
- `it` - Italian
- `ru` - Russian
- `ja` - Japanese
- `zh` - Chinese
- `ar` - Arabic

## 📜 License

This project is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.

<div align="center">
  <a href="https://creativecommons.org/licenses/by-sa/3.0/">
    <img src="https://licensebuttons.net/l/by-sa/3.0/88x31.png" alt="CC BY-SA 3.0">
  </a>
</div>
<hr>
<div align="center">
  Made with ❤️ by NuraShade
</div>