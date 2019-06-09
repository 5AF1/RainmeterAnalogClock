[MyCir]
Meter=Shape
;background
Shape=ellipse #cen#,#cen#,#rad# | Extend background,outdottheme
;lines
shape2=line  (#cen#),(#cen#),(#secx#),(#secy#) | Extend secarmtheme
shape3=line  (#cen#),(#cen#),(#minx#),(#miny#) | Extend minarmtheme
shape4=line  (#cen#),(#cen#),(#hourx#),(#houry#) | Extend hourarmtheme

;min hour 60 12 4 dots
Shape5=ellipse #cen#,#cen#,#dotsr# | Extend emptyback,4bigdotstheme
Shape6=ellipse #cen#,#cen#,#dotsr# | Extend emptyback,12hourdotstheme
Shape7=ellipse #cen#,#cen#,#dotsr# | Extend emptyback,60mindotstheme

;modifiers
emptyback = Fill Color 255,255,255,0
background = Fill Color #backgroundcolor#

outdottheme =     StrokeWidth #outdotwidth#     | StrokeDashes #ond#,#ofd#    | Stroke Color #outdotcolor#      | StrokeDashCap #outdotstyle#
4bigdotstheme =   StrokeWidth #4bigdotswidth#   | StrokeDashes #ond#,#4ofd#   | Stroke Color #4bigdotscolor#    | StrokeDashCap #4bigdotsstyle#
12hourdotstheme = StrokeWidth #12hourdotswidth# | StrokeDashes #ond#,#12ofd#  | Stroke Color #12hourdotscolor#  | StrokeDashCap #12hourdotsstyle#
60mindotstheme =  StrokeWidth #60mindotswidth#  | StrokeDashes #ond#,#60ofd#   | Stroke Color #60mindotscolor#   | StrokeDashCap #60mindotsstyle#

secarmtheme = stroke Color #secarmcolor# | StrokeWidth #secarmwidth#|StrokestartCap Round|StrokeendCap Round
;secdottheme =

minarmtheme = stroke Color #minarmcolor# | StrokeWidth #minarmwidth#|StrokestartCap Round|StrokeendCap Round
;mindottheme =

hourarmtheme =  stroke Color #hourarmcolor# | StrokeWidth #hourarmwidth#|StrokestartCap Round|StrokeendCap Round
;hourdottheme =

DynamicVariables=1
;^To let the shapes change due to update
AntiAlias=1
;^edgwsmothing
