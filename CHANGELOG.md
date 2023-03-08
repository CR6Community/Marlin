*In compliance with the [GPL-3.0](https://opensource.org/licenses/GPL-3.0) license: I declare that this version of the program contains my modifications, which can be seen through the usual "git" mechanism.*  


2022-10  
Contributor(s):  
Pla5ma  
Sebastiaan Dammann  
>Update README.mdUpdated the 'Development and compile-it-yourself' section. The information regarding the target directory was wrong and the whole process is more detailed now.  
>Merge pull request #328 from Pla5ma/patch-2Update README.md  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-01  
Contributor(s):  
Sebastiaan Dammann  
>Fixup orientation of Creality CR-6 TFT -> should be 3  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-12  
Contributor(s):  
Sebastiaan Dammann  
>Update Vyper configuration after careful review  
>Update README's  
>Update default orientations of the display #284  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-11  
Contributor(s):  
Sebastiaan Dammann  
>Initial Vyper source support port from Anycubic Vyper repo  
>Merge remote-tracking branch 'pr-277/cr-200b' into extui  
>Allow configurable screen orientation in Configuration.h - fixes #284  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-10  
Contributor(s):  
Martijn van Buul  
>Add pin definition for Creality V 4.2.5 board  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-09  
Contributor(s):  
Sebastiaan Dammann  
>Temporarily fix filament load/unload  
>Experimental Sovol SV-01 support  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-08  
Contributor(s):  
Sebastiaan Dammann  
>Update default e-jerk  
>Remove postcondition  
>Merge remote-tracking branch 'upstream/2.0.x' into extui  
>Update configs  
>Restore baseline configs  
>CR-6 MAX: also no maple  
>Don't redefine BAUDRATE  
>Comment out Neopixel warning  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-06  
Contributor(s):  
Sebastiaan Dammann  
>Bump version for release  
>Merge remote-tracking branch 'upstream/2.0.x' into extui  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-05  
Contributor(s):  
Sebastiaan Dammann  
>Merge remote-tracking branch 'upstream/bugfix-2.0.x' into extui-bugfix-2.0.x  
>Fix include paths  
>Bump down version  
>Temporary resolve filament load/unload not operational - until we have upstream concensus and I can submit a patchhttps://github.com/MarlinFirmware/Marlin/issues/21748  
>Only reset auto retract - don't reset other settings. Fixes #258  
>Version bump  
>Fix filament load not raising nozzlehttps://github.com/MarlinFirmware/Marlin/issues/21750  
>Bump version  
>Version  
>Merge remote-tracking branch 'upstream/2.0.x' into extui  
>Version revert  
>Decrease PID_FUNCTIONAL_RANGE a tiny bit  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-04  
Contributor(s):  
David  
Sebastiaan Dammann  
Thinkersbluff  
ellensp  
>Bump  
>Add HAS_PROBE_SETTINGS  
>MARLIN 2.0.8 MERGE - Merge remote-tracking branch 'upstream/2.0.x' into extui  
>Set default LEDs color at start #231(cherry picked from commit 90912561149d12cc22cb63507edb66efd22bf5a5)  
>Fix G29 sequence  
>Add STRING_DISTRIBUTION_DATE  
>Set resume purge length to zero #236(cherry picked from commit 129ccb76b8932459cd2e87aaf0833674ad86f106)  
>Merge remote-tracking branch 'upstream/bugfix-2.0.x' into extui-bugfix-2.0.x  
>Bump(cherry picked from commit aa8795069d2d77494b2dc1783dc8fcd3f3ac20db)  
>Attempt ENDSTOP_INTERRUPTS_FEATURE  
>Merge remote-tracking branch 'upstream/bugfix-2.0.x' into extui  
>Consolidate and update all configurations  
>Bump version  
>Bump version (nightly)  
>Clarify version  
>Improve config example updating  
>Set resume purge length to zero #236  
>Attempt 2 at CI  
>Bump date  
>Update configs(cherry picked from commit 27881358f1096703d27f479b97a3aa964df9ab98)  
>Update README.md  
>Normalize configuration files with upstream  
>Fix Max Temperature not enforced (#21592)(cherry picked from commit 5fb3ee610140c9895be5495d84b6d853514e5e2d)  
>Config cleanup  
>Improve config example updating(cherry picked from commit 7b09787a5347bd2cfd36a3b4f4d72ff09dba5cf4)  
>Bump(cherry picked from commit 0c1d5a3ce4a70bacae32c1057d9a533d08a50e86)  
>Set default LEDs color at start #231  
>Update configs  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-03  
Contributor(s):  
Sebastiaan Dammann  
Thinkersbluff  
>Currently undef postmortem debugging  
>Implement initial M73 remaining support #208  
>G26 prevent bed slipping after drawing pattern  
>Disable S_CURVE_ACCELERATION as we didn't use it on beta 5 and the experimental nature isn't desired at the moment #83  
>Enable CANCEL_OBJECTS  
>Partially resolve #203  
>Enable M73 remaining time support for BTT TFT #208  
>Version bump 4 the next  
>Make firmware tract also in classic MarlinUI tune menu available  
>Fix G29 compilation  
>Small prime  
>G26 hotend/bed parallel heating  
>Change filament load feedrate a bitThis prevents extruder skipping on the load screen. YMMV of course.  
>G26 - fix BTT SKR compilation  
>Fix compilation error until upstream fix is in  
>Set version  
>C100 gcode is only for DWIN displays  
>Decrease stepper drama on G26  
>Paypal being paypal  
>Merge remote-tracking branch 'upstream/bugfix-2.0.x' into extui  
>Back to nightly version  
>Bump version again  
>Bump version  
>Set BLOCK_BUFFER_SIZE to 32 to be more tolerant for Octoprint slowdowns  
>Fix G26 not cancelling #207Remove complexity. Let cancel state resetting up to ExtUI.  
>Tweak G26 speeds a bit  
>Re-initialize v4.5.2 base config  
>Full bed nozzle prime  
>Disable MEATPACK as it is too unstable at the moment - possible fix to #212  
>Merge remote-tracking branch 'upstream/bugfix-2.0.x' into upstream-merge  
>Prime the whole bed, don't hit the pattern on your way out #203  
>Version bump 4 the next(cherry picked from commit be6cc1e6515da88e39d1448312821eef4600665a)  
>Re-enable post mortem debugging #212  
>Update README.mdI have proposed a small edit re: Support for the Creality v1.1.- ERA board, which would update that comment to be consistent with the Release Notes.
I have used the branch/pull request approach to this, so that I can learn how that is done.
Shall I use this same approach when updating the Release Notes for CF 6?  
>Prime nozzle on G26 on the bed  
>Merge pull request #233 from CR6Community/Thinkersbluff-patch-1Update README.md  
>Bump version for final release  
>Bump version for pre6 - last stability tests  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-02  
Contributor(s):  
InsanityAutomation  
Sebastiaan Dammann  
>Fix compilation of G26 for classic BTT SKR6 #196  
>Update probe settings based on user feedback  
>Allow overlapping crosshair #196It overlaps a bit but allows for easier removal of the printed pattern.  
>Don't wait for reheat if leveling from the menu #168  
>Revert "Set nozzle to center, Z to 1 centimeter to facilitate droopy droopy #168"This reverts commit d342165fd2836bb43aa41014f18e42abfd0c03ab.  
>Prepare for upstream mergeCommit ID: https://github.com/MarlinFirmware/Marlin/commit/ee7701c15bc91f7a05f973e03624fb14815f5027  
>H2 leveling reliability  
>Add option not to stabilize temperatures after homing or leveling #106This is useful for users who have the temperature commands after G28 or G29 anyway.Then it has no use to wait up after homing.  
>Fix gcode parsing for C001 #106  
>Back-end support for disclosing mesh validation pattern to ExtUI front-end #196  
>Refactor a horrible nested condition  
>Add option to probe only once (direct drive reliability)This improves reliability for direct drive setups. When the direct drive assembly hangs from the strain gauge the taring function becomes a bit more tricky.  
>Update DETAILED_BUILD_VERSION  
>Implement experimental kinematics changes on separate branch #83  
>Incorporate DGUS DWIN Creality departure #145  
>Merge remote-tracking branch 'upstream/bugfix-2.0.x' into extui  
>Update typo  
>Bump version  
>Fix bad replacement  
>Don't draw the most inner arc #196  
>BTT SKR Neopixel support  
>Allow personal configuration builds  
>Implement firmware side of the screen version check #122What we do:1. Write to serial2. Flash the LED3. BEEP BEEP BEEP BEEP BEEP4. Set M117 message  
>Print experimental full circles for #196  
>Remove ref to global variable #196  
>Allow firmware to hang 8 seconds on SD card access instead of 4 seconds  
>Use build version as machine name #122  
>Double click for baby stepping  
>Fix upstream imported compilation error  
>Set nozzle to center, Z to 1 centimeter to facilitate droopy droopy #168  
>Put the flag back  
>Always show PROBE_ACTIVATION_SWITCH status  
>Prevent extruder skipping due to high load feedrates #162  
>Attempted bed leveling improvements  
>Support cancel while heating for G26 #196  
>Implement development gcode C100 for display reset and page switch  
>Use native Marlin constant for feedrate #196  
>More clearance after aborting G26 #196  
>Refactor probe preheat code to simplify itThis also fixes the bug of the preheat temps being set to zero when starting from an high temperature.  
>Fix compile warning  
>Ensure to include HAS_PROBE_SETTINGS when using PROBING_HEATERS_OFF  
>Bump distribution date  
>Due to #168 can now revert #143 partially because in the display we run a homing sequence from #168 already  
>Don't reheat after homing when coming from the menu leveling sequence  
>Tweak filament change lengths  
>Tweak G26 crosshair and circle size  
>Enable POSTMORTEM_DEBUGGING for stock Creality boards only  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-01  
Contributor(s):  
Sebastiaan Dammann  
>G28: No heat-up after G28XY only  
>Enable MEATPACK  
>Disable fade height  
>Prevent command timeouts from happeningRef: https://github.com/OctoPrint/OctoPrint/issues/3862  
>Add CR-6 SKR note  
>SD sorting updates  
>Fix probe tare state  
>Update issue template for #131  
>Make probe heaters off configurable #106Implement it for MarlinUIImplement EEPROM savingImplement gcode C001  
>MarlinUI and EEPROM: preheat settings configurablehttps://github.com/CR6Community/Marlin/issues/106  
>Tune hot-end idle timeout  
>Increase preheat nozzle temp just a bitThen PLA and PETG both soften up enough.  
>Remove duplicate probe  
>Increase NO_TIMEOUTS to 25s  
>Various improvementsAllow conflict resolvingUpdate HOTEND_IDLE_TIMEOUT to 30 minutes which isn't harmful to PLA eitherUpdate PREHEAT_BEFORE_LEVELING to recommended value as wellAlways probe after turning the heaters off - and ensure to apply changes immediately(cherry picked from commit 56ec0d37bfa1ef112b82271bfe59775e24447ac5)  
>Move probe after leveling. Fixes #143  
>Enable S-curve #83  
>Merge remote-tracking branch 'upstream/bugfix-2.0.x' into extui  
>Implement PROBE_HEATERS_OFF toggle for DWIN touchscreenhttps://github.com/CR6Community/Marlin/issues/106  
>Bump version  
>Enable firmware retraction for those who want to play with it  
>Introduce slight delay to account for residual force when taring  
>Manual retract or extrude: show progress on displayFixes #125Add P parameter to specify purge length for filament change command M701  
>Change probe config  
>Autoretract fixup  
>Z-bed leveling speed improvementsWe don't need to raise the probe *that* high. The original idea was to raise it high enough to untrigger the optical sensor, but we're not doing anything with that signal anyway so we might improve the speed.  
>Probing improvements  
>Move probe buzzer  
>Enable for G21/G22 barbarian units - fixes #149  
>Add part number to the DGUS_LCD_UI_CREALITY_TOUCH flag - fixes #139  
>Implement FWRETRACT_AUTORESET for automatically resetting the firmware retract settings  
>Implement explicit menu item for probe tuning for BTT LCDs  
>Implement buzz on probe taring to aid debugging  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2020-12  
Contributor(s):  
Franklin van Velthuizen  
Shaun Eccles-Smith  
Sebastiaan Dammann  
Romain  
>Temporarily disable watchdog  
>Temporary commit for configuration files  
>Merge pull request #70 from franklinvv/extui-btt-skr-tft3Enable host prompt support  
>Implement DISABLE_INACTIVE_Z - fixes #72  
>Add branches message  
>Hot-end idle: reset to default probe temperatures  
>Park the nozzle when pausing  
>Revert "Disable bed heating for probing to allow for improved homing speed"This reverts commit 9b09da82de27abfa68806209aae1669429c95ca4.  
>Consolidate all branches into a single branch with example configurations; add build scripts  
>Pre-heat probe before ABL  
>Repair LCD serial port  
>Wait before heaters are back up to temperature before finishing leveling #87  
>Increase initial retraction for nozzle park  
>Bump version  
>Improve filament change message  
>Further consolidation of configs  
>Honorable mention for CR-6 MAX  
>Update bug submission template  
>Set ADVANCED_PAUSE_PURGE_LENGTH to 0 for DWIN based displaysPurging on DWIN is mostly manual work anyway, so set it to 0 and as a nice side-effect the purge screen is effective now too.  
>If we're printing, then wait for heat-up before completing G28 - fixes #101  
>Enable custom version file  
>Rebase of extui changes on top of upstream bugfix-2.0.x  
>Completely move away from DWIN driven navigationBecause DWIN is a complete PoS, it isn't always consistent in what it reports on the PIC_NOW command. So, sometimes it says to the firmware "Oh, I'm on the print running screen" but it is actually displaying the "Print tuning screen". So the firmware then receives all kinds of events it doesn't recognize because the display is telling it is on a different screen!  
>Disable EMERGENCY_PARSER until we get upstream bugfix-2.0 merged  
>Further config consolidation  
>Call ExtUI::onMeshLevelStart when we actually start leveling #87  
>Reset detailed build version  
>Enable host prompt support  
>Update configuration for BTT TFT recommendations  
>Update Version.h  
>Prevent hot-end idle timeout settings from interfering with PROBING_HEATERS_OFFPreviously the HOTEND_IDLE_TIMEOUT was (ab)used for disabling the heaters, but HOTEND_IDLE_TIMEOUT doesn't necessarily turn off the heaters. It just may set them to a lower temperature. In addition, some people like to level at a high temperature and we do not want to reset their temperature.Fixes #87 also  
>Temp  
>Enable compilation with filament runout sensor disabled  
>Merge pull request #82 from grobux/grobux-patch-1Update README.md  
>Config consolidation  
>Disable bed heating for probing to allow for improved homing speed  
>Update README.mdAdded my donation link  
>Bump version file  
>Merge pull request #61 from shauneccles/extuiFix Arc Banding  
>Creality v1.0.4.1 source dumpThanks to Naomi Wu for providing this to us!  
>Update issue template  
>Set HYBRID_THRESHOLD by default to high values so it configurable but not enabled by default  
>Revert arc segment to 1 - 0.1 caused issues.  
>Park print head during pausing - when we do so, use proper message. Filament change M600 will also no longer use a modal dialog.  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2020-11  
Contributor(s):  
Sebastiaan Dammann  
Juan Rodriguez  
Mark Dietzer  
Simone Primarosa  
ellensp  
>Enable action commands to tell software to pause/cancel  
>Enable remaining time to be shown on LCD display  
>Uncomment version name  
>Increase SD retries for unstable Creality boards  
>BigTreeTech changes from https://github.com/bigtreetech/BIGTREETECH-SKR-CR6  
>Increase reliability of probing: COM_PIN is used for taring the probeSo, tare the probe before probing a point and while homing.Tare the probe before and after fast move - improving accuracy of the probingThis reduces the influence of a possible bowden tube pulling at the hot-end. Further increase accuracy by also decreasing the Z-speed for probing the bed.  
>Disable probe while moving to X/Y position to prevent early triggering of Z-endstop  
>Fix bold(cherry picked from commit c16e2183af125d68958e6d6bcdf4a8c5de830a8f)  
>Don't preheat on G29 W, nor if there is a temperature set  
>Per Arc Welder documentation, increase Arc resolution to 0.1mm  
>Set 0.01mm babystepping  
>Set CHOPPER_TIMING to CHOPPER_DEFAULT_24VThe stepper motors run at 24V, not at 12V.  
>Enable probe accuracy text  
>Enable CLASSIC_JERK againRef: https://www.reddit.com/r/CR6/comments/k21byh/psa_if_you_run_your_printer_fast_consider_turning/  
>Improve taring of probe by taring before and after leveling to prevent unwanted triggering. Also decrease the speed to move to the bed.  
>Improve octoprint support working natively with existing screensAdd support for these gcodes:- M75 - start print job (switch to print progress display)- M77 - stop print job (switch to print finish display)- M73 - set print progress  
>Allow 0.05mm precision for babystepping  
>Update main readme  
>Merge pull request #31 from Doridian/extuiTwo fixes/enhancements  
>Set "lcd_move_e" index to fix the label (#20263)  
>Experimental BTT-SKR-CR6 pins fileCompile with env STM32F103RC_btt_512K and define BOARD_BTT_SKR_CR6 inOther configuration.h changes possibly needed:https://github.com/CR6Community/Marlin/commit/9f99c4c1381748d32c05d21575818cb65fe98642  
>Set Z-current from 500 to 900mAWe got two motors to power on a single driver. Perhaps 1A would beeven better. But, that might also damage something.For now default to 900mA. This should fix some stottering issuesand also decrease potential Z-banding.  
>Initial upgrade of extui for BTT SKR for TFT v3.0This branch is for the SKR with TFT only.  
>Update legacy readme  
>Fix bold  
>Z-offset from menu fix  
>Always for probe taring  
>Enable Z-probe offset wizard  
>Update main readme(cherry picked from commit 8e297a8a9e6dd5c0f9f0db9652d1c39d336626c4)  
>Fix bad SET_FAST_PWM_FREQ calls (#20227)  
>Clean up some old VPs to enable PRINTCOUNTER  
>Allow filament unload from LCD menu  
>Fix wrong preprocessor instruction  
>Update README here too  
>Set E current to 600mA800mA makes the motor too hot, which is especially an issue for users with all-metal feeders.  
>Experimental neopixel support  
>New source dump from BTT repositoryCopied from commit: https://github.com/bigtreetech/BIGTREETECH-SKR-CR6/commit/f510ef327271ade9504473eb2923e642293484bf  
>Pre-work to fix interactive filament load / unload  
>Enable MONITOR_DRIVER_STATUS to allow Marlin to fully control the drivers  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2020-10  
Contributor(s):  
Serhiy-K  
Sebastiaan Dammann  
Juan Rodriguez  
Keith Bennett  
Jason Smith  
Victor Oliveira  
thinkyhead  
formless63  
qwewer0  
Scott Lahteine  
Earle F. Philhower, III  
InsanityAutomation  
>Simple bool in soft_endstops_t  
>Set default junction deviation to 0.05  
>Bed leveling / z-offset  
>Merge tag '2.0.7.1' into creality-cr6-merge-attempt  
>Restore correct STM32 port-bits code (#19678)  
>With SDCARD_RATHERRECENTFIRST enabled, enable SDCARD_SORT_ALPHA too  
>Re-Enable Arc Support  
>Fix motion compile w/out probe-oriented settings (#19684)  
>M600 reliability improvements  
>Fix homing crashing into the bed,. apparently  
>Marlin 2.0.7.2  
>[cron] Bump distribution date (2020-10-11)  
>Sanity-check mutually-exclusive G34 features (#19706)  
>Merge pull request #13 from formless63/patch-1Switch to G27 in abort print option  
>Fix UTF8 handling for Color UI (#19708)  
>More things straightened out like stepper control and LED control  
>Port back some removed ABL code  
>Fix SAMD Serial name macro (#19765)  
>G34 Mechanical Gantry Calibration (like Prusa M915) (#18972)Co-authored-by: Scott Lahteine <thinkyhead@users.noreply.github.com>  
>M600 support; show specific screens for thermal errors  
>Fix at90usb1286 build (#19687)* Skip check for USBCON during dependency detection
* Ignore incompatible Teensy_ADC library, which requires Teensy >= 3
* Add IS_AT90USB

Co-authored-by: Scott Lahteine <thinkyhead@users.noreply.github.com>  
>Fix SET_SOFT_ENDSTOP_LOOSE w/out soft endstops (#19734)  
>TFT Refactoring (#19192)* split tft folder in two: tft for color ui; tft_io for shared tft code

* after the files got moved, now the code was moved to the right place

* classic ui using TFT IO init lcd codes

* feature to compile tft_io when enabled

* compiling fix

* lvgl spi tft working with tft io init codes

* there is no need for separeted fsmc and spi class in lvgl anymore, as tft io handle everything

* remove debug

* base for TFT rotation and mirroring API, and ILI9488 support

* ST7796S rotate and mirror support

* ST7789V rotate and mirror support

* ST7735 rotate and mirror support

* ILI9341 rotate and mirror support

* ILI9328 rotate and mirror support

* R61505 rotate and mirror support

* MKS TFT definitions

* more configs for mks tfts

* update config

* naming typo

* to configure the user interface

* ANYCUBIC_TFT35

* tft configs

* support for SSD1963

* tft display types

* updated conditionals lcd; first board fully working with the new code - all 3 ui!

* compatiblity

* changed name

* move classic ui file name

* rename TURN -> ROTATE

* GRAPHICAL_TFT_ROTATE_180 deprecated

* first fsmc board fully working - chitu v5

* mks robin nano v1.2 + tft 35 ok!

* right pin name

* anycubic tft tested in a TRIGORILLA_PRO

* chitu v6

* nano 32 tft orientation

* mks tft43

* mks tft43 rotation

* fixed LONGER LK tft setup

* GRAPHICAL_TFT_UPSCALE defined by the display type

* better offsets defaults

* Update Configuration.h

* Update tft_fsmc.cpp

* Update Conditionals_LCD.h

* Tweak comments

* update nano tests

* Revert "update nano tests"

This reverts commit a071ebbfad30e28855a4a5695ec8a726542a1a65.

* default tft

* outdated comments

* to not break non-vscode builds

* upscale tft 35

* support tft 180 rotation for color ui

* Each TFT Driver is responsible for its default color mode.

* use auto detect in mks displays, because some of them could be shipped with diferent drivers

* extra s

* unused code

* wrong -1

* missing mirror options

* Smaller regex pattern

* Comment updates

* Clean up old defines

* Apply pins formatting

* GRAPHICAL_TFT_ROTATE_180 => TFT_ROTATE_180

* MKS_ROBIN_TFT_V1_1R

* merge fix

* correct resolution

* auto is default, dont need be there, and it will allow the user to configure it even for named displays

* to not use rotation with MKS_ROBIN_TFT_V1_1R

* i like () in macros

* avoid sleepy commits

* default for st7789 is rgb

* nano follow up

* to allow ili9328 rotation

* default is rgb

* boards merge follow up

* to match bootloader orientation

* HAS_TOUCH_XPT2046 is not hal specific anymore

* lets not forget LPC

* 180 rotation for ili9328 and R61505

* Clean up whitespace

Co-authored-by: Scott Lahteine <thinkyhead@users.noreply.github.com>
Co-authored-by: Scott Lahteine <github@thinkyhead.com>  
>Enable RESTORE_LEVELING_AFTER_G28  
>Enable G26 Mesh Validation Pattern tool  
>[cron] Bump distribution date (2020-10-13)  
>[cron] Bump distribution date (2020-10-14)  
>[cron] Bump distribution date (2020-10-12)  
>Disable classic jerk  
>Don't define IS_ULTIPANEL empty  
>Fix bilinear_line_to_destination definitionSee #19431  
>TFT followup fixes (#19710)  
>Add NUCLEO-F767ZI dev board (#19373)Co-authored-by: Lorenzo Delana <lorenzo.delana@gmail.com>  
>Switch to G27 in abort print optionThis prevents the printer from it's current abort behavior that can drag the hot nozzle on the bed and dig in and/or catch the print on it's way to the current G28XY command, especially because bed mesh is no longer respected once performing the cancellation.  
>Disable filament runout by default because many people have issues with it #7  
>Digipots refactor / cleanup (#19690)  
>Option to prevent (extra) Watchdog init on STM32 (#19693)  
>Fix build errors after v2.0.7.1 merge  
>Fix various errors, warnings in example config builds (#19686)Co-authored-by: Scott Lahteine <thinkyhead@users.noreply.github.com>  
>Add loose soft endstop state, apply to UBL fine-tune (#19681)Co-authored-by: Scott Lahteine <thinkyhead@users.noreply.github.com>  
>Allow MAX31865 resistance values configuration (#19695)  
>Some changes merged manually from pull requesthttps://github.com/MarlinFirmware/Marlin/pull/19958  
>Add REPORT_TRAMMING_MM option (#19682)Co-authored-by: Scott Lahteine <thinkyhead@users.noreply.github.com>  
>More holes patched  
>ABL and printing, screen stability fixes  
>Remove Creality LCD code so we can do a first test  
>Implement wait_for_user for Color UI (#19694)  
>Fixes for TFTGLCD Panel, FastIO (#19614)  
>Speaker, print finish notification  
>[cron] Bump distribution date (2020-10-15)  
>Fix I2C_ADDRESS sign warning (#19685)  
>Save PLR on resume from pause (#19676)Co-Authored-By: shahab <32130261+SHBnik@users.noreply.github.com>  
>Fix HAL/STM32 FastIO for analog pins (#19735)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2020-09  
Contributor(s):  
Sebastiaan Dammann  
>Revert "Touch screen note w/ serial"This reverts commit aa7f839485a78de9287eea20e8ed959b18333f0f.  
>Increase Z_HOMING_HEIGHT to prevent bed grinding when aborting print  
>Refactor the function names for the touch LCD code  
>Rename RTS_AVAILABLE to DWIN_CREALITY_TOUCHRTS_AVAILABLE is the original Creality constant. I think we can say that one goodbye.  
>Fix issue that DGUS_SERIAL_PORT is not used in STM32F1  
>Revert "Use interruptable endstops (experiment)"This reverts commit 9ce86d58b56ecc9ea08a86aee5a99c4cdf7e632a.  
>Port Creality CR-6 Configuration.h changesI will remove this later from the changeset, but it allows for testing the compilation and porting.Notes:- CR-6 has ARC_SUPPORT disabled- SDIO_SUPPORT was added by Creality- Platformio.ini changes not necessary: those were already here from the Ender 3 V2 implementation- To build, use: platformio run -e STM32F103RET6_crealityNew board for CR-6: BOARD_CREALITY_V452  
>Port endstops.h  
>Port settings.cpp (apparently configuration_store.cpp)Not sure what to make of it. All the preheat temperatures used to be communicated to the LCD, but now they are not?  
>Enable custom version .h  
>Port G28There is much movement code mixed with display update code. Need to think how to refactor this.  
>Touch screen note w/ serial  
>Add CR-6 pins and board fileIt does appear that the CR-6 v2.5.4 board is an entirely different board. I had to split up the old board file from the Creality changes because they used one board file.  
>Port probe.cpp  
>Port queue.cpp  
>Set explicit version for now so we can identify these builds  
>Creality CR-6 source code dump from CR-6 SE -source code V1.0.3.6.rarAs downloadable currently from Creality.com. It appears the source code has been based on 25a7cea.Using a cycle of 'git reset', 'git clean', copying over the files, doing a normalize (because the line endings were messed up), then checking for the origin of the changes, I could not trace it back much farther than this commit.This commit is like e95395ffe03c05e9c7b60233ea67e6ba819d1a3e but with the odd files like the .github files excluded. It is almost like Creality took the latest 1.x source codes files and half plastered their changes over it - or they might have backported specific changes from the latest Marlin sources back to this code?  
>Enable EEPROM_AUTO_INIT  
>Revert "Try to set SD_DETECT_STATE to HIGH to check if that helps with SD card not initializing on startup"This reverts commit 2abfdf69de2fa32dbb0603edd49e98ede0fee5d1.  
>Increase reliability of filament runout #7Temporary stopgap until we get this spaghetti cleaned up.  
>Port gcode.cpp  
>Creality CR-6 source code dump from CR-6 SE -source code V1.0.3.6.rarAs downloadable currently from Creality.com. It appears the source code has been based on 25a7cea.Using a cycle of 'git reset', 'git clean', copying over the files, doing a normalize (because the line endings were messed up), then checking for the origin of the changes, I could not trace it back much farther than this commit.  
>Add todo about menuI don't think this is actually used.  
>Don't set default K value for Linear Advance  
>Enable EMERGENCY_PARSER  
>Add missing auto-home start code  
>Implement pre-heat temperature store and retrievalThere was actually no code to store and retrieve pre-heat temperatures. We now retrieve them in RTS_INIT - by that moment the settings store should already been initialized.I also noticed that there is support for saving/retrieving fan speed, but in the touch UI this was never facilitated.  
>Implement UI support for M0 with M118 resumeAbuse the power loss screen for this.  
>Fix DGUS_SERIAL_GET_TX_BUFFER_FREE missing  
>Use interruptable endstops (experiment)  
>Move Creality display init somewhat down below in an attempt to resolve the issues with feedrate not being reported  
>Enable PLR_ENABLED_DEFAULTPower loss recovery enabled by default  
>Enable LIN_ADVANCE and EXPERIMENTAL_SCURVE  
>Update Conditionals_post.hCreality updated the second constant, I do it proper.  
>Initial code dump to support extUI - this does only compile!Still need to figure out if extUI isn't to opinionated about how the screen should operate.  
>Enable S_CURVE_ACCELERATION  
>Fix whitespace  
>Enable QUICK_HOME  
>Move the DWIN Touch facade to a separate file  
>Fixup SDIO_CLOCK  
>Integrate with Marlin filament runoutWARNING: hot-end stays heated for the moment!  
>Port G29 changesCreality called explicit settings.save() at the end of ABL. Not ported that - not sure what to make of that.  
>Fix auto-homing attempt  
>Fix offset-by-one for auto-bed-leveling  
>Update Version.h  
>Implement initial integration with MarlinCoreI don't dare currently to touch the power loss recovery code.  
>Include the LCD for compilation and fix migration compilation errors  
>Port motion.cpp  
>Enable classic jerk for now  
>Set Z_AFTER_HOMING  
>Port cardreader.cpp  
>Port temperature.cppCreality source had HAL_watchdog_refresh. Not ported. Does it need to be ported?  
>Add TODO about include in abl.hCreality included bedlevel.h - it seems to be no-op to me, but let's confirm.  
>Disable CLASSIC_JERK, enable JUNCTION_DEVIATION_MM  
>Move SDIO_SUPPORT to pins file  
>Add watchdog noteNote CR-6 requires 1250 but the watchdog is disabled anyway?  
>Try to set SD_DETECT_STATE to HIGH to check if that helps with SD card not initializing on startup  
>Fix filament runout #7  
>Replace Creality-sourced EEPROM implementationReplaced with present feature from Marlin/MarlinFirmware/18758  
>Configure steppers as TMC2209_STANDALONEThey might be configured in UART, but it doubt it. First test this one.  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 

