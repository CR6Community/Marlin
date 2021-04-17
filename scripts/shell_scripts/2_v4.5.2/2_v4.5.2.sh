#!/bin/bash

rm -r DWIN_SET firmware*.bin
cd  ../../../
rm -r .pio/
cp platformio.ini platformio.ini.org
cp Marlin/Configuration.h Marlin/Configuration.h.org
cp Marlin/Configuration_adv.h Marlin/Configuration_adv.h.org
cp -r config/cr6-se-v4.5.2-mb/Configuration*.h Marlin/
sed -i 's/default_envs\ \=\ mega2560/default_envs\ \=\ STM32F103RET6_creality/' platformio.ini
pio run
rm platformio.ini Marlin/Configuration.h Marlin/Configuration_adv.h
mv platformio.ini.org platformio.ini
mv Marlin/Configuration.h.org Marlin/Configuration.h
mv Marlin/Configuration_adv.h.org Marlin/Configuration_adv.h
cp .pio/build/STM32F103RET6_creality/firmware-*.bin scripts/shell_scripts/2_v4.5.2/
cd ../CR-6-touchscreen-extui/
pwsh build.ps1 -nozip
cp -r build/tmp/DWIN_SET ../Marlin/scripts/shell_scripts/2_v4.5.2/
