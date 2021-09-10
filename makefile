all: ijk ikj jki kij kji
	gcc -o hw1_jik mm_jik.c
ijk:
	gcc -o hw1_ijk mm_ijk.c
ikj:
	gcc -o hw1_ikj mm_ikj.c
jki:
	gcc -o hw1_jki mm_jki.c
kij:
	gcc -o hw1_kij mm_kij.c
kji:
	gcc -o hw1_kji mm_kji.c
