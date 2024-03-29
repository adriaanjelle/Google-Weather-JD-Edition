[Variables]
WeatherLocation=Amsterdam
; Just enter your city's name or your address here or whatever. Anything should work here.
; NOTE: Check Rainmeter's log to see what location it got.

WeatherUnits=Metric
; The units of the weather info. Valid values are "Metric" and "Imperial".

Language=[&mSystemLocale]
; Set the language of the weather information and names of the days.
; See https://learn.microsoft.com/nl-nl/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c for valid values under the 'language tag' column.
; Not all values may work properly.
; NOTE: use "[&mSystemLocale]" to let it use the currently set system language.

; ================================================

Scale=1.00
; A multiplier for the size of the skin. Please stick to multiples of 0.5.

Font=Roboto Flex Normal
; The font used in the skin.

Color=[&mBackgroundColor]
; The color of the background. Valid values are formatted "RRR, GGG, BBB" with values of 0-255,
; or hexadecimal values formatted "RRGGBB" with values of 00-FF.
; NOTE: use "[&mBackgroundColor]" to use the color of the current background wallpaper.

WeatherCurrentIconStyle=Color
WeatherForecastIconStyle=Color
; The style of the weather icons. Valid values are "Color" and "Mono".
; The Mono icons are embedded in the JDWI.ttf font and the Color icons are found in "@Resources\WeatherIcons".
