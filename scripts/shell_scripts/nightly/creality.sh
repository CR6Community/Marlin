#!/bin/bash

echo; echo "Select to continue:"; echo
select opt in "CR-6_v4.5.2" "CR-6_v4.5.3" "Exit"
  do
    case $opt in
      "CR-6_v4.5.2") echo; mb=cr6-se-v4.5.2-mb; break;;
      "CR-6_v4.5.3") echo; mb=cr6-se-v4.5.3-mb; break;;
      "Exit") echo; echo "Exiting..."; echo; exit;;
      * ) echo "Invalid option"
    esac
  done

src=$(pwd | grep extui)
if [[ ! $src ]]
    then
        tr=CR-6-touchscreen
        mr=Marlin
    else
        troot=CR-6-touchscreen-extui
        mroot=Marlin-extui
fi 

rm -r DWIN_SET firmware*.bin
cd  ../../../
rm -r .pio/
cp platformio.ini platformio.ini.org
cp Marlin/Configuration.h Marlin/Configuration.h.org
cp Marlin/Configuration_adv.h Marlin/Configuration_adv.h.org
cp -r config/$mb/Configuration*.h Marlin/
sed -i 's/default_envs\ \=\ mega2560/default_envs\ \=\ STM32F103RET6_creality/' platformio.ini
pio run
rm platformio.ini Marlin/Configuration.h Marlin/Configuration_adv.h
mv platformio.ini.org platformio.ini
mv Marlin/Configuration.h.org Marlin/Configuration.h
mv Marlin/Configuration_adv.h.org Marlin/Configuration_adv.h
cp .pio/build/STM32F103RET6_creality/firmware-*.bin scripts/shell_scripts/nightly/
cd ../$tr/
pwsh build.ps1 -nozip
cp -r build/tmp/DWIN_SET ../$mr/scripts/shell_scripts/nightly/

exit 0