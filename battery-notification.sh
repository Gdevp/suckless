#!/bin/bash

#battery_level=$(acpi | awk '{print $4}' | tr -d '%,')
#charging=$(acpi | grep -c "Charging")
#
#if [ $charging -eq 1 ]; then
#    icon=" Cargando"  # Icono de carga
#else
#    if [ $battery_level -ge 80 ]; then
#        icon="  100%"
#    elif [ $battery_level -ge 60 ]; then
#        icon="  60%"
#    elif [ $battery_level -ge 40 ]; then
#        icon="  40%"
#    elif [ $battery_level -ge 20 ]; then
#        icon="  20%"
#    else
#        icon=" "
#    fi
#fi
#
#echo "$icon"

#!/bin/bash

battery_level=$(acpi | awk '{print $4}' | tr -d '%,')
charging=$(acpi | grep -c "Charging")


if [ $battery_level -ge 100 ]; then
    icon="  $battery_level%"
elif [ $battery_level -ge 60 ]; then
    icon="  $battery_level%"
elif [ $battery_level -ge 40 ]; then
    icon="  $battery_level%"
elif [ $battery_level -ge 20 ]; then
    icon="  $battery_level%"
else
   icon="  $battery_level%"
fi

# if charging code ... 
if [ $charging -eq 1 ]; then
    icon=" Cargando $icon"  # Agregar "Cargando" al icono si está cargando
fi

echo "$icon"

# Verificar si la batería está por debajo del 20%
if [ $battery_level -lt 20 ]; then
    notify-send 'Batería baja' 'Conectar el cargador'
fi
