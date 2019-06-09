;;measure;;

[MeasureSec]
measure=time
format=%S
dynamicvariables=1

[MeasureHours]
Measure=Time
Format=%I
DynamicVariables=1

[MeasureMin]
Measure=Time
Format=%M
DynamicVariables=1

[MeasureSmooth]
Measure=Script
ScriptFile=#@#Counter.lua
DynamicVariables=1

[MeasureSecSmooth]
Measure=Calc
Formula=([MeasureSec] + MeasureSmooth)/60
DynamicVariables=1

[MeasureMinSmooth]
Measure=Calc
Formula=(MeasureMin + MeasureSecSmooth)/60

[MeasureHoursSmooth]
Measure=Calc
Formula=(MeasureHours + MeasureMinSmooth)/60

[validoutdotwidth]
Measure=Calc
Formula=(#outdotnum#<=0)?0:((#si#)*(#outdotrat#))

;[validofd]
;Measure=Calc
;Formula=(#outdotnum#<=0 || #outdotrat#<=0 || #outdotwidth#<=0)?0:(((#rad#)*(2*PI))/((#outdotnum#)*(#outdotwidth#)))
