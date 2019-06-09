[variables]
;constants
maxs=768
ond=.000001
;^to set the dashsize of stroke closest to 0
;function
;for every reuse of a [variable] the structure Must be (#varname#) and the new expression should also be in paranthesis
si=((#rat#)*(#maxs#))
cen=((#si#)/2)

outdotwidth=[validoutdotwidth]
4bigdotswidth=((#si#)*(#4bigdotsrat#))
12hourdotswidth=((#si#)*(#12hourdotsrat#))
60mindotswidth=((#si#)*(#60mindotsrat#))
;outdotwidth=((#si#)*(#outdotrat#))

rad=(((#si#)/2)-((#outdotwidth#)/2))

ofd=(((#rad#)*(2*PI))/((#outdotnum#)*(#outdotwidth#)))
4ofd=(((#dotsr#)*(2*PI))/((4)*(#4bigdotswidth#)))
12ofd=(((#dotsr#)*(2*PI))/((12)*(#12hourdotswidth#)))
60ofd=(((#dotsr#)*(2*PI))/((60)*(#60mindotswidth#)))
;ofd=((((#rad#)*(2*PI))/(#outdotnum#))/(#strowid#))

secarmwidth=((#si#)*(#secarmratio#))
minarmwidth=((#si#)*(#minarmratio#))
hourarmwidth=((#si#)*(#hourarmratio#))

;;;;;;;;;;sec min hour
sec=(([MeasureSecSmooth])*60)
min=(([MeasureMinSmooth])*60)
hour=(([MeasureHoursSmooth])*60)

;;;;;;;;;;all points x y r an
secr=((1-(#secarmshort#))*(#rad#))
minr=((1-(#minarmshort#))*(#rad#))
hourr=((1-(#hourarmshort#))*(#rad#))
dotsr=((1-(#indotcirradshort#))*(#rad#))

secan=((((2*PI)/60)*(#sec#))+(0.5*PI))
minan=((((2*PI)/60)*(#min#))+(0.5*PI))
houran=((((2*PI)/12)*(#hour#))+(0.5*PI))

secx=(#cen#-((#secr#*Cos(#secan#))))
secy=(#cen#-((#secr#*Sin(#secan#))))

minx=(#cen#-((#minr#*Cos(#minan#))))
miny=(#cen#-((#minr#*Sin(#minan#))))

hourx=(#cen#-((#hourr#*Cos(#houran#))))
houry=(#cen#-((#hourr#*Sin(#houran#))))
