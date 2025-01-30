Source Code aplikasi untuk sementara dapat diakses di https://github.com/ciaohanmarker/terawang_v1/tree/Add-storage

Input data secara manual dapat dilakukan melalui serial monitor dengan menghubungkan Bluetooth Classic (HC-05) dengan mikrokontroller.

Setiap array ToF dipisahkan dengan tanda "," dengan data sensor acuan berupa "#" (nilai akan muncul sebagai "0" di aplikasi jika angka lain dimasukkan).

Contoh:
Sensor acuan yang dipilih adalah sensor 6 dan jumlah sensor yang digunakan adalah 8.
> 1,1,1,1,1,#,1,1

Untuk saat ini, aplikasi hanya akan men-filter nilai ToF < 0, sementara nilai ToF yang diteruskan dari mainbard adalah 1-1000.
