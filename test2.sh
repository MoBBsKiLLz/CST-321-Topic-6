#!/bin/sh

cd

mkdir mycode

cd mycode

cp ../Assignments/CST-321-Topic-2/*.c ../Assignments/CST-321-Topic-3/*.c ../CST-321-Topic-4/*.c ../mycode

cd ..

mkdir mycode2

cp ./mycode/* ./mycode2

mv mycode deadcode

rm -r deadcode