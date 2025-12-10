;============================================================
;  NuraShade Skin - Reverse Geocoding
;  Copyright (c) 2025 NuraShade
;
;  Licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
;  You are free to:
;    • Share — copy and redistribute the material in any medium or format
;    • Adapt — remix, transform, and build upon the material
;      for any purpose, even commercially.
;
;  Under the following terms:
;    • Attribution — You must give appropriate credit, provide a link to the license,
;      and indicate if changes were made.
;    • ShareAlike — If you remix, transform, or build upon the material,
;      you must distribute your contributions under the same license as the original.
;
;  License Details: https://creativecommons.org/licenses/by-sa/3.0/
;============================================================
[Measure_ReverseGeo_Parent]
Measure=WebParser
URL=https://api.bigdatacloud.net/data/reverse-geocode-client?latitude=#Latitude#&longitude=#Longitude#&localityLanguage=#LocalityLanguage#
RegExp=(?siU).*"localityLanguageRequested": "([^"]*)".*"continent": "([^"]*)".*"continentCode": "([^"]*)".*"countryName": "([^"]*)".*"countryCode": "([^"]*)".*"principalSubdivision": "([^"]*)".*"principalSubdivisionCode": "([^"]*)".*"city": "([^"]*)".*"locality": "([^"]*)".*"postcode": "([^"]*)".*"plusCode": "([^"]*)"
UpdateRate=#ReverseGeo_Update_Rate#
Debug=#ReverseGeoDebug#
Debug2File=#ReverseGeo_Debug_Path#
FinishAction=[!EnableMeasureGroup ReverseGeo]
DynamicVariables=1

[Measure_LocalityLanguageRequested]
Measure=WebParser
URL=[Measure_ReverseGeo_Parent]
StringIndex=1
Group=ReverseGeo
Disabled=1
DynamicVariables=1

[Measure_Continent]
Measure=WebParser
URL=[Measure_ReverseGeo_Parent]
StringIndex=2
Group=ReverseGeo
Disabled=1
DynamicVariables=1

[Measure_ContinentCode]
Measure=WebParser
URL=[Measure_ReverseGeo_Parent]
StringIndex=3
Group=ReverseGeo
Disabled=1
DynamicVariables=1

[Measure_CountryName]
Measure=WebParser
URL=[Measure_ReverseGeo_Parent]
StringIndex=4
Group=ReverseGeo
Disabled=1
DynamicVariables=1

[Measure_CountryCode]
Measure=WebParser
URL=[Measure_ReverseGeo_Parent]
StringIndex=5
Group=ReverseGeo
Disabled=1
DynamicVariables=1

[Measure_PrincipalSubdivision]
Measure=WebParser
URL=[Measure_ReverseGeo_Parent]
StringIndex=6
Group=ReverseGeo
Disabled=1
DynamicVariables=1

[Measure_PrincipalSubdivisionCode]
Measure=WebParser
URL=[Measure_ReverseGeo_Parent]
StringIndex=7
Group=ReverseGeo
Disabled=1
DynamicVariables=1

[Measure_City]
Measure=WebParser
URL=[Measure_ReverseGeo_Parent]
StringIndex=8
Group=ReverseGeo
Disabled=1
DynamicVariables=1

[Measure_Locality]
Measure=WebParser
URL=[Measure_ReverseGeo_Parent]
StringIndex=9
Group=ReverseGeo
Disabled=1
DynamicVariables=1

[Measure_Postcode]
Measure=WebParser
URL=[Measure_ReverseGeo_Parent]
StringIndex=10
Group=ReverseGeo
Disabled=1
DynamicVariables=1

[Measure_PlusCode]
Measure=WebParser
URL=[Measure_ReverseGeo_Parent]
StringIndex=11
Group=ReverseGeo
Disabled=1
DynamicVariables=1