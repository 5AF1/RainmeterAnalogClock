;;measure;;

[MeasureSec]
measure=time
format=%S
dynamicvariables=1
;UpdateRate=1
[MeasureHours]
Measure=Time
Format=%I
DynamicVariables=1
;UpdateRate=1
[MeasureMin]
Measure=Time
Format=%M
DynamicVariables=1
;UpdateRate=1
[MeasureSmooth]
Measure=Script
ScriptFile=#@#Counter.lua

[MeasureSecSmooth]
Measure=Calc
Formula=(MeasureSec + MeasureSmooth)/60

[MeasureMinSmooth]
Measure=Calc
Formula=(MeasureMin + MeasureSecSmooth)/60

[MeasureHoursSmooth]
Measure=Calc
Formula=(MeasureHours + MeasureMinSmooth)/60
