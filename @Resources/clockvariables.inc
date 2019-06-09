[variables]
;constants
maxs=768
ond=.000001
;^to set the dashsize of stroke closest to 0
;function
;for every reuse of a [variable] the structure Must be (#varname#) and the new expression should also be in paranthesis
si=((#rat#)*(#maxs#))
strowid=((#si#)*(#outdotrat#))
cen=((#si#)/2)
rad=(((#si#)/2)-((#strowid#)/2))
ofd=((((#rad#)*(2*PI))/(#outdotnum#))/(#strowid#))
;ofd=((((#rad#)*(2*PI)*(#strowid#))/(#outdotnum#)))
;;;;;;;;;;sec min hourh
sec=(([MeasureSecSmooth])*60)
min=(([MeasureMinSmooth])*60)
hour=(([MeasureHoursSmooth])*60)

;;;;;;;;;;all points x y r an
secr=((1-(#sechshort#))*(#rad#))
minr=((1-(#minhshort#))*(#rad#))
hourr=((1-(#hourhshort#))*(#rad#))


secan=((((2*PI)/60)*(#sec#))+(0.5*PI))
minan=((((2*PI)/60)*(#min#))+(0.5*PI))
houran=((((2*PI)/12)*(#hour#))+(0.5*PI))
