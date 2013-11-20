# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2006 by Randolf Schultz
# (randolf.schultz@gmail.com) and others.
#
# All rights reserved.
#
# See the file License for details.

# ms.tcl - msgcat "equivalent"

# ms_set:
#  fill language specific text database for language <lang>;
#  the entry for GUI element <name> will get the description <val>
proc ms_set { lang name val } {

    set varname "${lang}(${name})"

    set ms::$varname $val

 return;
}
# ms_set


# ms_init:
#  initialize ms module for language <lang> by creating a dummy entry
proc ms_init { lang } {

    array set ms::$lang { Dummy 1 }

 return;
}
# ms_init


# ms_initmainlabels:
#  initialize main labels that were created before we knew
#  the current locale from ayamrc
proc ms_initmainlabels { } {
    global ay

    catch { balloon_set $ay(plbl) [ms plb_label] }

    catch { balloon_set $ay(olbl) [ms olb_label] }

    catch { balloon_set $ay(treel) [ms tree_label] }

 return;
}
# ms_initmainlabels


# ms:
#  return language specific string for GUI element <name>
proc ms { name } {
    global ayprefs
    # Do we have a balloon text in the current locale?
    if { ![info exists ms::$ayprefs(Locale)($name)] } {
	# no, return english string
	return [subst "Translation missing!\n\$ms::en($name)"]
    } else {
	# yes, return language specific string
	return [subst "\$ms::$ayprefs(Locale)($name)"]
    }
}
# ms

# create namespace ms
namespace eval ms {}

# fill "en"-locale...
ms_init en
ms_set en ayprefse_Shaders "A list of paths where your compiled shaders reside."
ms_set en ayprefse_ScanShaders "Initiates rebuild of internal shader database."
ms_set en ayprefse_Locale "Language to use for balloon help texts.\
\nChanges will take effect after restart of Ayam!"
ms_set en ayprefse_SingleWindow "Switch to single toplevel GUI?\
\nChanges will take effect after restart of Ayam!"
ms_set en ayprefse_AutoResize "Resize main window according to property GUI?"
ms_set en ayprefse_AutoFocus "Move focus to window with mouse cursor?\
\nChanges will take effect after restart of Ayam!"
ms_set en ayprefse_TwmCompat "Is the window manager TWM compatible?"
ms_set en ayprefse_ListTypes "Show object types in the tree/list view?"
ms_set en ayprefse_MarkHidden "Mark hidden objects in the tree view?"
ms_set en ayprefse_AutoSavePrefs "Save preferences on exit?"
ms_set en ayprefse_AddExtensions "Automatically add file name extensions?"
ms_set en ayprefse_BakOnReplace "Make backup copies of loaded scene files?"
ms_set en ayprefse_LoadEnv "Load environment on startup?"
ms_set en ayprefse_NewLoadsEnv "Load environment on File/New?"
ms_set en ayprefse_EnvFile "Path and name of the environment."
ms_set en ayprefse_Scripts "A list of Tcls scripts to be executed on startup."
ms_set en ayprefse_Plugins "A list of paths where plugins reside."
ms_set en ayprefse_Docs "An URL that points to the documentation."
ms_set en ayprefse_TmpDir "A path where temporary files are to be saved."

ms_set en ayprefse_PickEpsilon "Maximum allowed distance from picked point\
to editable point."
ms_set en ayprefse_HandleSize "Size of the handles of editable points."
ms_set en ayprefse_LazyNotify "Notify parent objects about changes just on\
mouse up?"
ms_set en ayprefse_CompleteNotify "When shall a complete notification be\
carried out?"
ms_set en ayprefse_EditSnaps "Snap coordinates of edited points to grid\
coordinates?"
ms_set en ayprefse_Snap3D "Snap coordinate values in all three dimensions?"
ms_set en ayprefse_FlashPoints "Flash editable points in single point\
editing modes?"
ms_set en ayprefse_GlobalMark "Maintain a single, global mark, or many local\
marks (for each view)?"
ms_set en ayprefse_CreateAtMark "Create objects at the mark?"
ms_set en ayprefse_DefaultAction "Modelling action invoked, when <Esc> key\
is pressed."
ms_set en ayprefse_UndoLevels "Number of undoable modelling steps;\
\n-1 means Undo/Redo is disabled."

# Drawing
ms_set en ayprefse_Tolerance "Sampling tolerance used when tesselating\
NURBS curves or surfaces.\nSmaller values lead to slower rendering but higher\
 quality.\nNURBS objects may override this setting locally."
ms_set en ayprefse_NPDisplayMode "Determine how surfaces should be drawn\
\nSurface objects may override this setting locally."
ms_set en ayprefse_NCDisplayMode "Determine how curves should be drawn\
\nCurve objects may override this setting locally."
ms_set en ayprefse_ToleranceA "Sampling tolerance used for tesselating\
NURBS curves or surfaces\nwhen an action is active."
ms_set en ayprefse_NPDisplayModeA "Determine how surfaces should be drawn\
\nwhen an action is active."
ms_set en ayprefse_NCDisplayModeA "Determine how curves should be drawn\
\nwhen an action is active."
ms_set en ayprefse_UseMatColor "Use color of material for shaded views?"
ms_set en ayprefse_Background "Color to use for the background."
ms_set en ayprefse_Object "Color to use for unselected objects."
ms_set en ayprefse_Selection "Color to use for selected objects."
ms_set en ayprefse_Grid "Color to use for the grids."
ms_set en ayprefse_Tag "Color to use for tagged (selected) points."
ms_set en ayprefse_Shade "Color to use in shaded views when UseMatColor\
\nis not enabled or the object has no material or no material color."
ms_set en ayprefse_Light "Color to use for (unselected) light objects."

# RIB-Export
ms_set en ayprefse_RIBFile "Name of the RIB file to create on export.\
\nScene: Derive name from scene path and filename,\
\nScenefile: Derive name from scene filename (without path),\
\nAsk: Ask for filename on export."
ms_set en ayprefse_Image "Name of the image file that is created\nwhen\
the exported RIB file is rendered.\
\nRIB: Derive image filename from RIB filename."
ms_set en ayprefse_ResInstances "Resolve all instance objects to normal\
\nobjects while exporting to a RIB?"
ms_set en ayprefse_CheckLights "Add a distant headlight to the scene,\
\nif no other (active) lights exist?"
ms_set en ayprefse_DefaultMat "Write a default material statement to the\
\nRIB, that will be used by all objects without material?\
\nnone: no default material,\
\nmatte: write a simple RiMatte without parameters,\
\ndefault: write the material object named \"default\"."
ms_set en ayprefse_RIStandard "Omit all attributes and options that are not\
\ncontained in the RenderMan Interface Standard?"
ms_set en ayprefse_WriteIdent "Write an identificator derived from the\
objects name into the RIB?"
ms_set en ayprefse_ShadowMaps "Should ShadowMaps be used?\nAutomatic: Yes,\
create a RIB that automatically renders ShadowMaps all the time.\
\nManual: Yes, but the ShadowMaps will be rendered on user request only
(Menu: View/Create ShadowMaps)"
ms_set en ayprefse_ExcludeHidden "Omit hidden objects on RIB export?"
ms_set en ayprefse_RenderMode "How should the renderer be forced to render\
to the screen?"
ms_set en ayprefse_QRender "Name and parameters of the renderer to use for\
quick render previews.\n\"%s\" will be replaced by the filename\
of the RIB."
ms_set en ayprefse_QRenderUI "Enable user interface for quick rendering."
ms_set en ayprefse_QRenderPT "A template that helps to pick the progress\
from the output of the renderer.\n\"%d\" denotes the position of\
the progress number in the output."
ms_set en ayprefse_Render "Name and parameters of the renderer to use for\
render previews.\n\"%s\" will be replaced by the filename\
of the RIB."
ms_set en ayprefse_RenderUI "Enable user interface for rendering."
ms_set en ayprefse_RenderPT "A template that helps to pick the progress\
from the output of the renderer.\n\"%d\" denotes the position of\
the progress number in the output."
ms_set en ayprefse_FRender "Name and parameters of the renderer to use for\
rendering to a file.\n\"%s\" will be replaced by the filename\
of the RIB."
ms_set en ayprefse_FRenderUI "Enable user interface for rendering to a file."
ms_set en ayprefse_FRenderPT "A template that helps to pick the progress\
from the output of the renderer.\n\"%d\" denotes the position of\
the progress number in the output."
ms_set en ayprefse_SMRender "Name and parameters of the renderer to use for\
shadow maps.\n\"%s\" will be replaced by the filename\
of the RIB."
ms_set en ayprefse_SMRenderUI "Enable user interface for shadow map rendering."
ms_set en ayprefse_SMRenderPT "A template that helps to pick the progress\
from the output of the shadow map renderer.\n\"%d\" denotes the position\
of the progress number in the output."
ms_set en ayprefse_SMFileFormat "File format of shadow map.\
\nRenderMan: zfile\nGelato: shadow"
ms_set en ayprefse_SMFileType "Type of shadow map.\
\nz: normal shadow map (RenderMan, Gelato)\
\navgz: Woo shadow map (Gelato only!)\
\nshadowvol: volume shadow map (Gelato only!)"
ms_set en ayprefse_SMChangeShaders "Change shader names (prepend\
 \"shadow\")\nwhen rendering with shadow maps?"

ms_set en ayprefse_PPRender "Renderer to use for the permanent preview feature."

# Misc
ms_set en ayprefse_RedirectTcl "Redirect all Tcl error messages to the\
console?"
ms_set en ayprefse_Logging "Log all messages to a file?"
ms_set en ayprefse_ErrorLevel "Which messages should go to the console?\
\nSilence - None\
\nErrors - Only Errors\
\nWarnings - Warnings and Errors\
\nAll - Warnings, Errors, and Informative Messages"
ms_set en ayprefse_LogFile "Path and name of the file to log all messages to."
ms_set en ayprefse_SaveAddsMRU "Add the name of saved scenes to the\
\nMost-Recently-Used file menu entries?"
ms_set en ayprefse_ToolBoxTrans "Make the toolbox window transient?"
ms_set en ayprefse_ToolBoxShrink "Make the toolbox window shrink wrap around\
its contents,\nwhen the user resizes it?"
ms_set en ayprefse_RGTrans "Make all rendering user interfaces transient?"
ms_set en ayprefse_TclPrecision "Precision of Tcl mathematics.\nHigh values\
lead to exact but hard\nto edit numbers in entry fields."
ms_set en ayprefse_SaveDialogGeom "Save geometry of dialog windows for\
next invocation?"
ms_set en ayprefse_SMethod "Sampling method to be used for NURBS\nto PolyMesh\
conversions."
ms_set en ayprefse_SParam "Parameter of the sampling method for NURBS\nto\
PolyMesh conversions."

ms_set en plb_label "Double click this label\nto deselect property."
ms_set en olb_label "Double click this label\nto switch to the tree."
ms_set en tree_label "Double click this label\nto switch to the listbox."

# Mops-Import
ms_set en mopsi_options_ResetDM "Reset all DisplayMode attributes of\
imported\nobjects to \"Global\"?"
ms_set en mopsi_options_ResetST "Reset all SamplingTolerance attributes of\
imported\nobjects to \"0.0\"?"

# OBJ-Import/Export
ms_set en objio_options_Selected "Export only selected object(s)."
ms_set en objio_options_TessPoMesh "Tesselate all PolyMesh objects to\
triangles."
ms_set en objio_options_WriteCurves "Write NURBS curves to exported file?"

#
# fill "de"-locale
ms_init de

ms_set de ayprefse_Shaders "Eine Liste von Verzeichnissen, in denen sich\
\n�bersetzte Shader befinden."
ms_set de ayprefse_ScanShaders "Baut interne Shader-Datenbank neu auf."
ms_set de ayprefse_SingleWindow "Soll nur ein Hauptfenster benutzt werden?\
\n�nderungen werden erst nach Neustart von Ayam wirksam!"
ms_set de ayprefse_AutoResize "Soll das Hauptfenster sich der Gr��e der\
Eigenschaften anpassen?"
ms_set de ayprefse_AutoFocus "Soll der Fokus automatisch dem Fenster mit\
dem\nMauszeiger zugeordnet werden?\n�nderungen werden erst nach\
Neustart von Ayam wirksam!"
ms_set de ayprefse_TwmCompat "Ist der verwendete Fenster-Manager\
zu TWM kompatibel?"
ms_set de ayprefse_ListTypes "Sollen die Objekttypen in der Listen- bzw.\
\nBaumansicht angezeigt werden?"
ms_set de ayprefse_MarkHidden "Sollen versteckte Objekte in der\
\nBaumansicht markiert werden?"
ms_set de ayprefse_Locale "Sprache f�r Hilfetexte.\
\n�nderungen werden erst nach Neustart von Ayam wirksam!"
ms_set de ayprefse_AutoSavePrefs "Sollen die Voreinstellungen beim Beenden\
von Ayam gespeichert werden?"
ms_set de ayprefse_AddExtensions "Sollen Dateinamenserweiterungen automatisch\
angeh�ngt werden?"
ms_set de ayprefse_BakOnReplace "Sollen Sicherheitskopien von geladenen\
Szenen angefertigt werden?"
ms_set de ayprefse_LoadEnv "Soll die Arbeitsumgebung beim Start geladen\
werden?"
ms_set de ayprefse_NewLoadsEnv "Soll die Arbeitsumgebung beim Erstellen\
einer neuen Szene neu geladen werden?"
ms_set de ayprefse_EnvFile "Vollst�ndiger Dateiname der Arbeitsumgebung."
ms_set de ayprefse_Scripts "Eine Liste von Skripten, die beim Starten\
ausgef�hrt werden sollen."
ms_set de ayprefse_Plugins "Eine Liste von Verzeichnissen, in denen sich\
Plugins befinden."
ms_set de ayprefse_Docs "Eine URL, die auf die Dokumentation verweist."
ms_set de ayprefse_TmpDir "Verzeichnis f�r tempor�re Dateien."

# Modeling
ms_set de ayprefse_PickEpsilon "Gr��te erlaubte Entfernung zwischen\
\nausgew�hltem und editierbaren Punkt."
ms_set de ayprefse_HandleSize "Gr��e der editierbaren Punkte."
ms_set de ayprefse_LazyNotify "Sollen Elternobjekte �ber �nderungen an den\
\nKindobjekten nur am Ende einer Modellieraktion\nbenachrichtigt werden?"
ms_set de ayprefse_CompleteNotify "Wann sollen alle Objekte �ber �nderungen\
\nan Kindobjekten (inkl. Referenzen) benachrichtigt werden?"
ms_set de ayprefse_EditSnaps "Sollen editierte Punkte zun�chst zu den\
\nGitter-Koordinaten bewegt werden?"
ms_set de ayprefse_Snap3D "Soll das Bewegen von Punkten zu Gitter-Koordinaten\
\nin allen drei Dimensionen erfolgen?"
ms_set de ayprefse_FlashPoints "Sollen editierbare Punkte aufleuchten, wenn\
der\nMauszeiger �ber ihnen steht?"
ms_set de ayprefse_GlobalMark "Soll es nur eine globale Marke geben?"
ms_set de ayprefse_CreateAtMark "Sollen neue Objekte an der Marke erzeugt werden?"
ms_set de ayprefse_DefaultAction "Modellier-Aktion, die beim Dr�cken der\
\n<Esc>-Taste gestartet werden soll."
ms_set de ayprefse_UndoLevels "Anzahl zur�cknehmbarer Modellierschritte;\
\n-1 schaltet das Undo-System aus."

# Drawing
ms_set de ayprefse_Tolerance "Bestimmt die Darstellungsqualit�t von NURBS\
Kurven und Fl�chen.\nKleinere Werte f�hren zu h�herer Qualit�t aber\
langsamerer Darstellung.\nObjekte\
k�nnen diesen Wert lokal anpassen."
ms_set de ayprefse_NPDisplayMode "Darstellungsmodus von Fl�chen.\
\nFl�chen k�nnen den Darstellungsmodus lokal anpassen."
ms_set de ayprefse_NCDisplayMode "Darstellungsmodus von Kurven.\
\nKurven k�nnen den Darstellungsmodus lokal anpassen."
ms_set de ayprefse_ToleranceA "Bestimmt die Darstellungsqualit�t von NURBS\
Kurven und Fl�chen\nw�hrend Modellieraktionen."
ms_set de ayprefse_NPDisplayModeA "Darstellungsmodus von Fl�chen\
\nw�hrend Modellieraktionen."
ms_set de ayprefse_NCDisplayModeA "Darstellungsmodus von Kurven\
\nw�hrend Modellieraktionen."

ms_set de ayprefse_UseMatColor "Soll die Materialfarbe f�r schattierte\
\nObjekte benutzt werden?"
ms_set de ayprefse_Background "Farbe des Hintergrundes."
ms_set de ayprefse_Object "Farbe nicht selektierter Objekte."
ms_set de ayprefse_Selection "Farbe selektierter Objekte."
ms_set de ayprefse_Grid "Farbe des Gitters."
ms_set de ayprefse_Tag "Farbe selektierter Punkte."
ms_set de ayprefse_Shade "Farbe f�r schattierte Objekte,\
wenn UseMatColor nicht aktiviert ist oder\ndas Objekt kein Material oder\
keine Materialfarbe hat."
ms_set de ayprefse_Light "Farbe f�r nicht selektierte Lichtquellen."

# RIB-Export
ms_set de ayprefse_RIBFile "Name der RIB-Datei f�r den RIB-Export.\
\nScene: RIB-Dateiname von Pfad und Namen der Szene ableiten,\
\nScenefile: RIB-Dateiname vom Namen der Szene (ohne Pfad) ableiten,\
\nAsk: RIB-Dateinamen beim RIB-Export erfragen."
ms_set de ayprefse_Image "Name der Bilddatei, die beim Rendern der\
exportierten\nRIB-Datei erzeugt wird.\
\nRIB: Bilddatei vom Namen der RIB-Datei ableiten."
ms_set de ayprefse_ResInstances "Sollen alle Instanzen-Objekte w�hrend des\
Exportierens\nin normale Objekte umgewandelt werden?"
ms_set de ayprefse_CheckLights "Soll eine Standardlichtquelle hinzugef�gt\
werden,\nwenn keine andere (aktive) Lichtquelle existiert?"
ms_set de ayprefse_DefaultMat "Standard-Material, das f�r alle Objekte\nohne\
eigenes Material benutzt wird.\nnone: kein Standard-Material verwenden\
\nmatte: RiMatte verwenden\
\ndefault: Material mit Namen \"default\" verwenden"
ms_set de ayprefse_RIStandard "Sollen alle Attribute und Optionen,\ndie nicht\
im RenderMan Standard vorkommen,\nbeim RIB-Export ausgelassen werden?"
ms_set de ayprefse_WriteIdent "Sollen Identifikatoren, basierend auf den\
Objektnamen,\nin die RIB-Datei geschrieben werden?"
ms_set de ayprefse_ShadowMaps "Sollen ShadowMaps verwendet werden?"
ms_set de ayprefse_ExcludeHidden "Sollen alle versteckten Objekte beim
RIB-Export ausgelassen werden?"
ms_set de ayprefse_RenderMode "Wie soll der Renderer zum Rendern auf den\
Bildschirm gezwungen werden?"
ms_set de ayprefse_QRender "Name und Aufrufparameter des Renderers,\
der f�r\n schnelle Vorschaubilder verwendet werden soll.\n\"%s\" wird\
durch den Dateinamen des RIBs ersetzt."
ms_set de ayprefse_QRenderUI "Soll das Render-Fenster f�r die schnelle Vorschau
aktiviert werden?"
ms_set de ayprefse_QRenderPT "Beschreibung der Ausgabe des\
Rendering-Fortschritts durch den Renderer\
\n\"%d\" ist die Position des prozentualen Fortschrittswertes,\
\nder dann im Rendering-Fenster angezeigt wird."
ms_set de ayprefse_Render "Name und Aufrufparameter des Renderers,\
der f�r die Vorschau verwendet werden soll.\n\"%s\" wird\
durch den Dateinamen des RIBs ersetzt."
ms_set de ayprefse_RenderUI "Soll das Render-Fenster f�r die Vorschau\
aktiviert werden?"
ms_set de ayprefse_RenderPT "Beschreibung der Ausgabe des\
Rendering-Fortschritts durch den Renderer\
\n\"%d\" ist die Position des prozentualen Fortschrittswertes,\
\nder dann im Rendering-Fenster angezeigt wird."
ms_set de ayprefse_FRender "Name und Aufrufparameter des Renderers,\
der zum Rendern in eine Datei verwendet werden soll.\n\"%s\" wird\
durch den Dateinamen des RIBs ersetzt."
ms_set de ayprefse_FRenderUI "Soll das Render-Fenster aktiviert werden?"
ms_set de ayprefse_FRenderPT "Beschreibung der Ausgabe des\
Rendering-Fortschritts durch den Renderer\
\n\"%d\" ist die Position des prozentualen Fortschrittswertes,\
\nder dann im Rendering-Fenster angezeigt wird."
ms_set de ayprefse_SMRender "Name und Aufrufparameter des Renderers,\
der f�r ShadowMaps verwendet werden soll.\n\"%s\" wird\
durch den Dateinamen des RIBs ersetzt."
ms_set de ayprefse_SMRenderUI "Soll das Render-Fenster f�r ShadowMaps\
aktiviert werden?"
ms_set de ayprefse_SMRenderPT "Beschreibung der Ausgabe des\
Rendering-Fortschritts durch den ShadowMap-Renderer\
\n\"%d\" ist die Position des prozentualen Fortschrittswertes,\
\nder dann im Rendering-Fenster angezeigt wird."

ms_set de ayprefse_PPRender "Renderer, der f�r die permanente Vorschau\
verwendet werden soll."

ms_set de ayprefse_SMFileFormat "Dateiformat der ShadowMaps.\
\nRenderMan: zfile\nGelato: shadow"
ms_set de ayprefse_SMFileType "Typ der ShadowMaps.\
\nz: normale ShadowMap (RenderMan, Gelato)\
\navgz: Woo ShadowMap (nur Gelato!)\
\nvolz: Volumen ShadowMap (nur Gelato!)"
ms_set de ayprefse_SMChangeShaders "Sollen Shadernamen angepasst werden\
\nwenn ShadowMaps benutzt werden?"

# Misc
ms_set de ayprefse_RedirectTcl "Sollen alle Fehlermeldungen von Tcl auf\
die Konsole umgelenkt werden?"
ms_set de ayprefse_Logging "Sollen alle Mitteilungen in einer Logdatei\
mitgeschrieben werden?"
ms_set de ayprefse_ErrorLevel "Welche Mitteilungen sollen in der Konsole\
angezeigt werden?\
\nSilence - Keine\
\nErrors - Nur Fehler\
\nWarnings - Warnungen und Fehler\
\nAll - Warnungen, Fehler und Informationen"
ms_set de ayprefse_LogFile "Pfad und Name der Logdatei."
ms_set de ayprefse_SaveAddsMRU "Sollen die Namen abgespeicherter Szenen\
den\nzuletzt-benutzte-Dateien-Eintr�gen im\nHauptmen� hinzugef�gt werden?"
ms_set de ayprefse_ToolBoxTrans "Soll das Werkzeugfenster als transient\
markiert werden?"
ms_set de ayprefse_ToolBoxShrink "Soll das Werkzeugfenster sich dem\
Inhalt anpassen,\nwenn es in der Gr��e ver�ndert wird?"
ms_set de ayprefse_RGTrans "Sollen alle Rendering Fenster als transient\
markiert werden?"
ms_set de ayprefse_TclPrecision "Genauigkeit der Wandlung von\
Gleitkommazahlen von Tcl.\nHohe Werte f�hren zu exakten aber schwer\
editierbaren\nWerten in Eingabefeldern."
ms_set de ayprefse_SaveDialogGeom "Geometrie von Dialogfenstern\
f�r den n�chsten Aufruf sichern?"
ms_set de ayprefse_SMethod "Sampling-Methode, die f�r NURBS zu\nPolyMesh\
Umwandlungen benutzt wird."
ms_set de ayprefse_SParam "Parameter der Sampling-Methode, die f�r NURBS\
zu\nPolyMesh Umwandlungen benutzt wird."


ms_set de plb_label \
"Diesen Text doppelclicken\num die Eigenschaft zu schlie�en."

ms_set de olb_label "Diesen Text doppelclicken\num zum Baum zu wechseln."

ms_set de tree_label "Diesen Text doppelclicken\num zur Liste zu wechseln."


# Mops-Import
ms_set de mopsi_options_ResetDM "Sollen alle DisplayMode-Attribute von\
importierten Objekten\nauf \"Global\" zur�ckgesetzt werden?"
ms_set de mopsi_options_ResetST "Sollen alle SamplingTolerance-Attribute von\
importierten\nObjekten auf \"0.0\" zur�ckgesetzt werden?"


# OBJ-Import/Export
ms_set de objio_options_Selected "Exportiert nur ausgew�hlte Objekte."
ms_set de objio_options_TessPoMesh "Wandelt alle PolyMesh-Objekte zu\
Dreiecksnetzen."
ms_set de objio_options_WriteCurves "Sollen NURBS Kurven exportiert werden?"



#
# fill "fr"-locale...
ms_init fr
ms_set fr ayprefse_Shaders " Liste de chemins o� r�sident vos shaders\
compil�s."
ms_set fr ayprefse_ScanShaders "Initialise la reconstruction de la base\
interne Shader."
ms_set fr ayprefse_Locale "Langue des bulles d'aide.\
\nLe changement prendra effet apr�s le red�marrage d'Ayam!"

#ms_set fr ayprefse_SingleWindow "Switch to single toplevel GUI?"

ms_set fr ayprefse_AutoResize "Red�finir la taille de la fen�tre principale\
selon les propri�t�s par d�faut."
#ms_set fr ayprefse_AutoFocus "Move focus to window with mouse cursor?"

ms_set fr ayprefse_TwmCompat "Votre gestionnaire de fen�tre est-il\
compatible TWM?"
ms_set fr ayprefse_ListTypes "Montrer les types d'objets dans la vue en\
arbre/liste?"
#ms_set fr ayprefse_MarkHidden "Mark hidden objects in the tree view?"
ms_set fr ayprefse_AutoSavePrefs "Sauvegarder les param�tres en quittant?"
#ms_set fr ayprefse_BakOnReplace "Make backup copies of loaded scene files?"
ms_set fr ayprefse_LoadEnv "Charger l'environnement au d�marrage?"
ms_set fr ayprefse_NewLoadsEnv "Charger l'environnement lors de\
l'ouverture/la cr�ation d'un fichier?"
ms_set fr ayprefse_EnvFile "Chemin et nom de l'environnement."
ms_set fr ayprefse_Scripts "Liste de scripts TCL � ex�cuter au d�marrage."
ms_set fr ayprefse_Plugins "Liste de chemins o� se trouvent les plugins."
ms_set fr ayprefse_Docs "URL poitant vers la documentation."
ms_set fr ayprefse_TmpDir "Chemin vers le dossier de sauvegarde des fichiers\
temporaire."

ms_set fr ayprefse_PickEpsilon "Distance maximale autoris�e du point\
s�lectionn� vers le point �ditable."
ms_set fr ayprefse_HandleSize "Taille des pogn�es des points �ditables."
ms_set fr ayprefse_LazyNotify "Notifier les objets parent � propos des\
changement simplement au survol de souris?"
#ms_set fr ayprefse_CompleteNotify "When shall a complete notification be\
#carried out?"
ms_set fr ayprefse_EditSnaps "Faire correspondre les coordonn�es des points\
�dit�s avec celles de la grille?"
#ms_set fr ayprefse_Snap3D "Snap coordinate values in all three dimensions?"
#ms_set fr ayprefse_FlashPoints "Flash editable points in single point\
#editing modes?"
#ms_set fr ayprefse_GlobalMark "Maintain a single, global mark, or many local\
#marks (for each view)?"
#ms_set fr ayprefse_CreateAtMark "Create objects at the mark?"
#ms_set fr ayprefse_DefaultAction "Modelling action invoked, when <Esc> key\
#is pressed."
ms_set fr ayprefse_UndoLevels "Nombre de pas d'annulation dans l'historique\
de mod�lisation;\n-1 correspond � la d�sactivation de l'historique."

# Drawing
ms_set fr ayprefse_Tolerance "Tol�rance utilis�e pour les courbes NURBS\
ou les surfaces NURBS.\nLes petites valeurs induisent un rendu plus lent\
mais une meilleure qualit�.\nLes objets NURBS peuvent outrepasser\
localement cette configuration."
ms_set fr ayprefse_NPDisplayMode "D�termine comment les surfaces seront\
trac�es\nLes objets Surface objects peuvent outrepasser localement cette\
configuration."
ms_set fr ayprefse_NCDisplayMode "D�termine comment les courbes seront\
trac�es\nLes objets Courbe objects peuvent outrepasser localement\
cette configuration."
#ms_set fr ayprefse_ToleranceA "Sampling tolerance used for tesselating\
#NURBS curves or surfaces\nwhen an action is active."
#ms_set fr ayprefse_NPDisplayModeA "Determine how surfaces should be drawn\
#\nwhen an action is active."
#ms_set fr ayprefse_NCDisplayModeA "Determine how curves should be drawn\
#\nwhen an action is active."

ms_set fr ayprefse_UseMatColor "Utiliser les couleurs du mat�riau pour\
les vue ombr�es?"
ms_set fr ayprefse_Background "Couleur de fond."
ms_set fr ayprefse_Object "Couleur pour les objets non s�lectionn�s."
ms_set fr ayprefse_Selection "Couleur pour les objets s�lectionn�s."
ms_set fr ayprefse_Grid "Couleur pour les grilles"
ms_set fr ayprefse_Tag "Couleur pour les points (�)s�lectionn�s."
ms_set fr ayprefse_Shade "Couleur pour les vues ombr�es lorsque que\
UseMatColor\nn'est as activ� ou que l'objet n'a pas de mat�riau\
affect�\nou pas de coueur de mat�riau."
ms_set fr ayprefse_Light "Couleur pour les objets Lumi�re (s�lectionn�s)."

# RIB-Export
ms_set fr ayprefse_RIBFile "Nom du fichier RIB � cr�er lors de l'Exportation."
ms_set fr ayprefse_Image "Nom du fichier image lors du rendu du fichier\
RIB export�."
ms_set fr ayprefse_ResInstances "R�soudre toutes les instance des objets\
� des objets\nnormaux lors de l'exportation RIB?"
ms_set fr ayprefse_CheckLights "Ajouter une source lumineuse distante,\
\nsi aucune source n'a �t� d�finie?"
ms_set fr ayprefse_DefaultMat "D�finir un mat�riau par d�faut dans le fichier\
\nRIB; il sera utilis� par tous les objets sans mat�riau?"
ms_set fr ayprefse_RIStandard "Omettre tous les attributs et toutes les\
options non d�finis\nen standard dans l'Interface RenderMan?"
ms_set fr ayprefse_WriteIdent "Ecrire un identificateur d�riv�\
du nom des objets dans le fichier RIB?"
ms_set fr ayprefse_ShadowMaps "Utiliser les ShadowMaps?\nAutomatic: Oui,\
Cr�er un RIB activant tout le temps le rendu ShadowMaps.\
\nManual: Oui, mais le rendu des ShadowMaps sera activ� par l'utilisateur\
seulement\n(Menu: View/Create ShadowMaps)"
ms_set fr ayprefse_ExcludeHidden "Omettre les objets cach�s � l'exportation\
RIB?"
ms_set fr ayprefse_RenderMode "Mode de rendu � l'�cran?"
ms_set fr ayprefse_QRender "Nom et param�tres du moteur de rendu � utiliser\
pour les rendus d'aper�u rapides\n\"%s\" sera remplac� par le nom\
du fichier du RIB."
ms_set fr ayprefse_QRenderUI "Activer l'interface utilisateur lors le\
rendu rapide."
ms_set fr ayprefse_QRenderPT "Mod�le pour la progression � partir de la\
sortie du moteur de rendu.\n\"%d\" montre la position du num�ro\
de progression dans la sortie."
ms_set fr ayprefse_Render "Nom et param�tres du moteur de rendu � utiliser\
pour les rendus d'aper�u.\n\"%s\" sera remplac� par le nom du fichier du\
RIB."
ms_set fr ayprefse_RenderUI "Activer l'interface utilisateur lors le rendu."
ms_set fr ayprefse_RenderPT "Mod�le pour la progression � partir de la\
sortie du moteur de rendu.\n\"%d\" montre la position du num�ro de\
progression dans la sortie."
#ms_set fr ayprefse_FRender "Name and parameters of the renderer to use for\
#rendering to a file.\n\"%s\" will be replaced by the filename\
#of the RIB."
#ms_set en ayprefse_FRenderUI "Enable user interface for rendering to a file."
#ms_set fr ayprefse_FRenderPT "A template that helps to pick the progress\
#from the output of the renderer.\n\"%d\" denotes the position of\
#the progress number in the output."
ms_set fr ayprefse_SMRender "Nom et param�tres du moteur de rendu � utiliser\
pour les shadow maps.\n\"%s\" sera remplac� par le nom du fichier du\
RIB."
ms_set fr ayprefse_SMRenderUI "Activer l'interface utilisateur lors le\
rendu shadow maps."
ms_set fr ayprefse_SMRenderPT "Mod�le pour la progression � partir de la\
sortie du moteur de rendu.\n\"%d\" montre la position du num�ro de\
progression dans la sortie."
#ms_set fr ayprefse_SMFileFormat "File format of shadow map.\
#\nRenderMan: zfile\nGelato: shadow"
#ms_set fr ayprefse_SMFileType "Type of shadow map.\
#\nz: normal shadow map (RenderMan, Gelato)\
#\navgz: Woo shadow map (Gelato only!)\
#\nshadowvol: volume shadow map (Gelato only!)"
#ms_set fr ayprefse_SMChangeShaders "Change shader names (prepend\
# \"shadow\")\nwhen rendering with shadow maps?"

ms_set fr ayprefse_PPRender "Moteur de rendu � utiliser pour l'aper�u\
permanent."


# Misc
ms_set fr ayprefse_RedirectTcl "Rediriger tous les messages d'erreur\
TCL vers la console?"
ms_set fr ayprefse_Logging "Sauvegarder tous les message dans un fichier?"
ms_set fr ayprefse_LogFile "Chemin et nom du fichier de sauvegarde des\
messages?"
#ms_set fr ayprefse_ErrorLevel "Which messages should go to the console?\
#\nSilence - None\
#\nErrors - Only Errors\
#\nWarnings - Warnings and Errors\
#\nAll - Warnings, Errors, and Informative Messages"
ms_set fr ayprefse_SaveAddsMRU "Ajouter le nom des sc�ne sauvegard�es �\
l'entr�e de menu\nMost-Recently-Used files?"
ms_set fr ayprefse_ToolBoxTrans "Rendre la fen�tre Bo�te-�-Outils transient?"
ms_set fr ayprefse_ToolBoxShrink "Rendre la fen�tre Bo�te-�-Outils ajustable\
� son contenu,\nlorsque l'utilisateur en modifie la taille?"
ms_set fr ayprefse_RGTrans "Rendre toutes les interface utilisateur transient?"
ms_set fr ayprefse_TclPrecision "Precision des math�matiques Tcl."
#ms_set fr ayprefse_SaveDialogGeom "Save geometry of dialog windows for\
#next invocation?"

#ms_set fr ayprefse_SMethod "Sampling method to be used for NURBS\nto PolyMesh\
#conversions."
#ms_set fr ayprefse_SParam "Sampling method parameter."

ms_set fr mopsi_options_ResetDM "R�initialiser � Global tous les attributs\
DisplayMode de tous\nles objets lors de l'importation depuis une sc�ne Mops?"
ms_set fr mopsi_options_ResetST "R�initialiser � 0.0 tous les attributs\
SamplingTolerance de tous\nles objets lors de l'importation depuis une sc�ne\
Mops?"

#ms_set fr plb_label "Double click this label\nto deselect property."
#ms_set fr olb_label "Double click this label\nto switch to the tree."
#ms_set fr tree_label "Double click this label\nto switch to the listbox."

# OBJ-Import/Export
#ms_set fr objio_options_Selected "Export only selected object(s)."
#ms_set fr objio_options_TessPoMesh "Tesselate all PolyMesh objects to\
#triangles."
#ms_set fr objio_options_WriteCurves "Write NURBS curves to exported file?"
