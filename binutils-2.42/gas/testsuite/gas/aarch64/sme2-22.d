#as: -march=armv8-a+sme2
#objdump: -dr

[^:]+:     file format .*


[^:]+:

[^:]+:
[^:]+:	c160c000 	fclamp	{z0\.h-z1\.h}, z0\.h, z0\.h
[^:]+:	c160c01e 	fclamp	{z30\.h-z31\.h}, z0\.h, z0\.h
[^:]+:	c160c3e0 	fclamp	{z0\.h-z1\.h}, z31\.h, z0\.h
[^:]+:	c17fc000 	fclamp	{z0\.h-z1\.h}, z0\.h, z31\.h
[^:]+:	c164c348 	fclamp	{z8\.h-z9\.h}, z26\.h, z4\.h
[^:]+:	c1a0c000 	fclamp	{z0\.s-z1\.s}, z0\.s, z0\.s
[^:]+:	c1a0c01e 	fclamp	{z30\.s-z31\.s}, z0\.s, z0\.s
[^:]+:	c1a0c3e0 	fclamp	{z0\.s-z1\.s}, z31\.s, z0\.s
[^:]+:	c1bfc000 	fclamp	{z0\.s-z1\.s}, z0\.s, z31\.s
[^:]+:	c1aec132 	fclamp	{z18\.s-z19\.s}, z9\.s, z14\.s
[^:]+:	c1e0c000 	fclamp	{z0\.d-z1\.d}, z0\.d, z0\.d
[^:]+:	c1e0c01e 	fclamp	{z30\.d-z31\.d}, z0\.d, z0\.d
[^:]+:	c1e0c3e0 	fclamp	{z0\.d-z1\.d}, z31\.d, z0\.d
[^:]+:	c1ffc000 	fclamp	{z0\.d-z1\.d}, z0\.d, z31\.d
[^:]+:	c1f6c16a 	fclamp	{z10\.d-z11\.d}, z11\.d, z22\.d
[^:]+:	c160c800 	fclamp	{z0\.h-z3\.h}, z0\.h, z0\.h
[^:]+:	c160c81c 	fclamp	{z28\.h-z31\.h}, z0\.h, z0\.h
[^:]+:	c160cbe0 	fclamp	{z0\.h-z3\.h}, z31\.h, z0\.h
[^:]+:	c17fc800 	fclamp	{z0\.h-z3\.h}, z0\.h, z31\.h
[^:]+:	c171c9f4 	fclamp	{z20\.h-z23\.h}, z15\.h, z17\.h
[^:]+:	c1a0c800 	fclamp	{z0\.s-z3\.s}, z0\.s, z0\.s
[^:]+:	c1a0c81c 	fclamp	{z28\.s-z31\.s}, z0\.s, z0\.s
[^:]+:	c1a0cbe0 	fclamp	{z0\.s-z3\.s}, z31\.s, z0\.s
[^:]+:	c1bfc800 	fclamp	{z0\.s-z3\.s}, z0\.s, z31\.s
[^:]+:	c1a6cbb8 	fclamp	{z24\.s-z27\.s}, z29\.s, z6\.s
[^:]+:	c1e0c800 	fclamp	{z0\.d-z3\.d}, z0\.d, z0\.d
[^:]+:	c1e0c81c 	fclamp	{z28\.d-z31\.d}, z0\.d, z0\.d
[^:]+:	c1e0cbe0 	fclamp	{z0\.d-z3\.d}, z31\.d, z0\.d
[^:]+:	c1ffc800 	fclamp	{z0\.d-z3\.d}, z0\.d, z31\.d
[^:]+:	c1fec8e8 	fclamp	{z8\.d-z11\.d}, z7\.d, z30\.d
[^:]+:	c120c400 	sclamp	{z0\.b-z1\.b}, z0\.b, z0\.b
[^:]+:	c120c41e 	sclamp	{z30\.b-z31\.b}, z0\.b, z0\.b
[^:]+:	c120c7e0 	sclamp	{z0\.b-z1\.b}, z31\.b, z0\.b
[^:]+:	c13fc400 	sclamp	{z0\.b-z1\.b}, z0\.b, z31\.b
[^:]+:	c129c6a2 	sclamp	{z2\.b-z3\.b}, z21\.b, z9\.b
[^:]+:	c160c400 	sclamp	{z0\.h-z1\.h}, z0\.h, z0\.h
[^:]+:	c160c41e 	sclamp	{z30\.h-z31\.h}, z0\.h, z0\.h
[^:]+:	c160c7e0 	sclamp	{z0\.h-z1\.h}, z31\.h, z0\.h
[^:]+:	c17fc400 	sclamp	{z0\.h-z1\.h}, z0\.h, z31\.h
[^:]+:	c164c748 	sclamp	{z8\.h-z9\.h}, z26\.h, z4\.h
[^:]+:	c1a0c400 	sclamp	{z0\.s-z1\.s}, z0\.s, z0\.s
[^:]+:	c1a0c41e 	sclamp	{z30\.s-z31\.s}, z0\.s, z0\.s
[^:]+:	c1a0c7e0 	sclamp	{z0\.s-z1\.s}, z31\.s, z0\.s
[^:]+:	c1bfc400 	sclamp	{z0\.s-z1\.s}, z0\.s, z31\.s
[^:]+:	c1aec532 	sclamp	{z18\.s-z19\.s}, z9\.s, z14\.s
[^:]+:	c1e0c400 	sclamp	{z0\.d-z1\.d}, z0\.d, z0\.d
[^:]+:	c1e0c41e 	sclamp	{z30\.d-z31\.d}, z0\.d, z0\.d
[^:]+:	c1e0c7e0 	sclamp	{z0\.d-z1\.d}, z31\.d, z0\.d
[^:]+:	c1ffc400 	sclamp	{z0\.d-z1\.d}, z0\.d, z31\.d
[^:]+:	c1f6c56a 	sclamp	{z10\.d-z11\.d}, z11\.d, z22\.d
[^:]+:	c120cc00 	sclamp	{z0\.b-z3\.b}, z0\.b, z0\.b
[^:]+:	c120cc1c 	sclamp	{z28\.b-z31\.b}, z0\.b, z0\.b
[^:]+:	c120cfe0 	sclamp	{z0\.b-z3\.b}, z31\.b, z0\.b
[^:]+:	c13fcc00 	sclamp	{z0\.b-z3\.b}, z0\.b, z31\.b
[^:]+:	c13ace64 	sclamp	{z4\.b-z7\.b}, z19\.b, z26\.b
[^:]+:	c160cc00 	sclamp	{z0\.h-z3\.h}, z0\.h, z0\.h
[^:]+:	c160cc1c 	sclamp	{z28\.h-z31\.h}, z0\.h, z0\.h
[^:]+:	c160cfe0 	sclamp	{z0\.h-z3\.h}, z31\.h, z0\.h
[^:]+:	c17fcc00 	sclamp	{z0\.h-z3\.h}, z0\.h, z31\.h
[^:]+:	c171cdf4 	sclamp	{z20\.h-z23\.h}, z15\.h, z17\.h
[^:]+:	c1a0cc00 	sclamp	{z0\.s-z3\.s}, z0\.s, z0\.s
[^:]+:	c1a0cc1c 	sclamp	{z28\.s-z31\.s}, z0\.s, z0\.s
[^:]+:	c1a0cfe0 	sclamp	{z0\.s-z3\.s}, z31\.s, z0\.s
[^:]+:	c1bfcc00 	sclamp	{z0\.s-z3\.s}, z0\.s, z31\.s
[^:]+:	c1a6cfb8 	sclamp	{z24\.s-z27\.s}, z29\.s, z6\.s
[^:]+:	c1e0cc00 	sclamp	{z0\.d-z3\.d}, z0\.d, z0\.d
[^:]+:	c1e0cc1c 	sclamp	{z28\.d-z31\.d}, z0\.d, z0\.d
[^:]+:	c1e0cfe0 	sclamp	{z0\.d-z3\.d}, z31\.d, z0\.d
[^:]+:	c1ffcc00 	sclamp	{z0\.d-z3\.d}, z0\.d, z31\.d
[^:]+:	c1fecce8 	sclamp	{z8\.d-z11\.d}, z7\.d, z30\.d
[^:]+:	c120c401 	uclamp	{z0\.b-z1\.b}, z0\.b, z0\.b
[^:]+:	c120c41f 	uclamp	{z30\.b-z31\.b}, z0\.b, z0\.b
[^:]+:	c120c7e1 	uclamp	{z0\.b-z1\.b}, z31\.b, z0\.b
[^:]+:	c13fc401 	uclamp	{z0\.b-z1\.b}, z0\.b, z31\.b
[^:]+:	c129c6a3 	uclamp	{z2\.b-z3\.b}, z21\.b, z9\.b
[^:]+:	c160c401 	uclamp	{z0\.h-z1\.h}, z0\.h, z0\.h
[^:]+:	c160c41f 	uclamp	{z30\.h-z31\.h}, z0\.h, z0\.h
[^:]+:	c160c7e1 	uclamp	{z0\.h-z1\.h}, z31\.h, z0\.h
[^:]+:	c17fc401 	uclamp	{z0\.h-z1\.h}, z0\.h, z31\.h
[^:]+:	c164c749 	uclamp	{z8\.h-z9\.h}, z26\.h, z4\.h
[^:]+:	c1a0c401 	uclamp	{z0\.s-z1\.s}, z0\.s, z0\.s
[^:]+:	c1a0c41f 	uclamp	{z30\.s-z31\.s}, z0\.s, z0\.s
[^:]+:	c1a0c7e1 	uclamp	{z0\.s-z1\.s}, z31\.s, z0\.s
[^:]+:	c1bfc401 	uclamp	{z0\.s-z1\.s}, z0\.s, z31\.s
[^:]+:	c1aec533 	uclamp	{z18\.s-z19\.s}, z9\.s, z14\.s
[^:]+:	c1e0c401 	uclamp	{z0\.d-z1\.d}, z0\.d, z0\.d
[^:]+:	c1e0c41f 	uclamp	{z30\.d-z31\.d}, z0\.d, z0\.d
[^:]+:	c1e0c7e1 	uclamp	{z0\.d-z1\.d}, z31\.d, z0\.d
[^:]+:	c1ffc401 	uclamp	{z0\.d-z1\.d}, z0\.d, z31\.d
[^:]+:	c1f6c56b 	uclamp	{z10\.d-z11\.d}, z11\.d, z22\.d
[^:]+:	c120cc01 	uclamp	{z0\.b-z3\.b}, z0\.b, z0\.b
[^:]+:	c120cc1d 	uclamp	{z28\.b-z31\.b}, z0\.b, z0\.b
[^:]+:	c120cfe1 	uclamp	{z0\.b-z3\.b}, z31\.b, z0\.b
[^:]+:	c13fcc01 	uclamp	{z0\.b-z3\.b}, z0\.b, z31\.b
[^:]+:	c13ace65 	uclamp	{z4\.b-z7\.b}, z19\.b, z26\.b
[^:]+:	c160cc01 	uclamp	{z0\.h-z3\.h}, z0\.h, z0\.h
[^:]+:	c160cc1d 	uclamp	{z28\.h-z31\.h}, z0\.h, z0\.h
[^:]+:	c160cfe1 	uclamp	{z0\.h-z3\.h}, z31\.h, z0\.h
[^:]+:	c17fcc01 	uclamp	{z0\.h-z3\.h}, z0\.h, z31\.h
[^:]+:	c171cdf5 	uclamp	{z20\.h-z23\.h}, z15\.h, z17\.h
[^:]+:	c1a0cc01 	uclamp	{z0\.s-z3\.s}, z0\.s, z0\.s
[^:]+:	c1a0cc1d 	uclamp	{z28\.s-z31\.s}, z0\.s, z0\.s
[^:]+:	c1a0cfe1 	uclamp	{z0\.s-z3\.s}, z31\.s, z0\.s
[^:]+:	c1bfcc01 	uclamp	{z0\.s-z3\.s}, z0\.s, z31\.s
[^:]+:	c1a6cfb9 	uclamp	{z24\.s-z27\.s}, z29\.s, z6\.s
[^:]+:	c1e0cc01 	uclamp	{z0\.d-z3\.d}, z0\.d, z0\.d
[^:]+:	c1e0cc1d 	uclamp	{z28\.d-z31\.d}, z0\.d, z0\.d
[^:]+:	c1e0cfe1 	uclamp	{z0\.d-z3\.d}, z31\.d, z0\.d
[^:]+:	c1ffcc01 	uclamp	{z0\.d-z3\.d}, z0\.d, z31\.d
[^:]+:	c1fecce9 	uclamp	{z8\.d-z11\.d}, z7\.d, z30\.d
