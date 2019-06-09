[MyCir]
Meter=Shape
Shape=ellipse #cen#,#cen#,#rad# | Fill Color 255,255,255,50 | StrokeWidth #strowid# |StrokeDashes #ond#,#ofd#| Stroke Color 255,255,255|StrokeDashCap Round
shape2=line  (#cen#),(#cen#),(#cen#-((#secr#*Cos(#secan#)))),(#cen#-((#secr#*Sin((#secan#))))) | stroke Color 255,255,255,250 | StrokeWidth #strowid#|StrokestartCap Round|StrokeendCap Round
shape3=line  (#cen#),(#cen#),(#cen#-((#minr#*Cos(#minan#)))),(#cen#-((#minr#*Sin((#minan#))))) | stroke Color 255,255,255,250 | StrokeWidth #strowid#|StrokestartCap Round|StrokeendCap Round
shape4=line  (#cen#),(#cen#),(#cen#-((#hourr#*Cos(#houran#)))),(#cen#-((#hourr#*Sin((#houran#))))) | stroke Color 255,255,255,250 | StrokeWidth #strowid#|StrokestartCap Round|StrokeendCap Round
Shape5=ellipse #cen#,#cen#,#secr# | Fill Color 255,255,255,50 | StrokeWidth ((#strowid#)*2) |StrokeDashes #ond#,((#ofd#)*((#outdotnum#)/24)*((#secr#)/(#rad#)))| Stroke Color 255,255,255|StrokeDashCap Round

DynamicVariables=1
