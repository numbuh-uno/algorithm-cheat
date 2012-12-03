#motivation

#operational system choice (linux propaganda)

- how to install
- distros

#programming language choice

- most popular? hard to say
- niches php, javascript == web, fortran == numerical
- all languages the same (theorethical)
- categories:
  - compiled vs interpreted (virtual machine) non compiled languages
      - speed vs multiplataform, quick test, prototyping
  - objects
- lang easy, lib hard

## data languages

- json
- xml

#what makes a good programmer

- know the best way to do tasks in language
- algorithms
- computer inner workings: (how language becomes assembler, how drives are accessed, etc.)
- design patterns
- large scale modeling

#directory structure

- home dir
- case
- typical names: bin, doc, 
- do not start with hyphen
- dot hidden
- symlinks/hardlinks
- magic folders ala Windows library/documents
- /bin, /lib, /src, /include, and the rest of the Linux Filesystem Hierarchy Standard
   <http://www.tuxfiles.org/linuxhelp/linuxdir.html>
- ~ and .bak

#important programs for life

- vim
- latex
- krusader
- version control management git/mercurial/svn
    - <http://try.github.com/>
    - [git-motivation.html]()
- ack (find/grep replacement)
- make (makefile)
    <http://www.jfranken.de/homepages/johannes/vortraege/make_inhalt.en.html>

##terminal/bash

- terminal:

    pro: reproduce commands easily

    con: cannot do graphs

- bash:

    pro: super easy file/pipe/process handling

    con: INSANE, INNEFICIENT

    one liners only. replacements:
    - perl is dead
    - python! yes, also useful for other things, so worth learning

- --help (how to read, [], ..., ), man, version
- languages bash, vs cmd, other more obscure ones
- directory structure, homedir, fake vs real dirs
- options, ls, cd, mkdir, cp, rm, rmdir, control z, bg, find, grep
- stdin/stderr/stdout
*- three holes
*- pipes > to file, | grep, 1>&2
- exit status
- pipe (help grep example)
- interactive vs. non-interactive

#machine/low-level

- representing letters: ascii unicode utf*
- representing integers: signed, 1-complement, 2-complement
- representing floats
- memory: registers vs caches vs RAM vs ROM (BIOS) vs HD
   <http://arstechnica.com/gadgets/2002/07/caching/2/>
   deep explanaition
- hard disk vs RAM vs cache vs registers
- organization of program on memory: address, operational system division
- RAM memory organization
- HD program organiztion: ELF files, including libraries
   - <http://www.thegeekstuff.com/2011/10/gcc-linking/>
- driver programming
    http://www.linuxjournal.com/article/7353
    #5/5
    #control a lamp. contains c code.
    http://www.freesoftwaremagazine.com/articles/drivers_linux

- multithreading
- GPU programming

- busses
    <http://computer.howstuffworks.com/pci1.htm>

# assembler
  - which instruction set: intel x86 vs the rest
  - assembler language: gas (gnu standard gcc) vs nasm vs etc
  - protected vs real mode
  - interfacing with c
  - what operations a processor can do
  - L1, L2 caches
  - system calls, kernel
  - interrupts
  - segments/flat memory model TODO ?

  - motivation
    1. Sometimes code written in assembly can be faster and smaller than
    compiler generated code.
    2. Assembly allows access to direct hardware features of the system that
    might be difficult or impossible to use from a higher level language.
    3. Learning to program in assembly helps one gain a deeper understand-
    ing of how computers work.
    4. Learning to program in assembly helps one understand better how
    compilers and high level languages like C work.

## general sources

  <http://stackoverflow.com/questions/836946/basic-yet-thorough-assembly-tutorial-linux>
  <en.wikibooks.org/wiki/X86_Assembly>

  <http://www.serverwatch.com/hreviews/article.php/3581551/Hardware-Today-x86-Alternatives-Few-but-Strong.htm>
  alternatives to x86

  carter
  <http://www.drpaulcarter.com/pcasm/>
  4/5
  no os specific interrupts system calls, elf files, linking

  http://docs.cs.up.ac.za/programming/asm/derick_tut/
  5/5
  linux system calls
  short and to the point

#math

- binary, hexa
- normal syntax form

#algorithmic complexity

<http://en.wikipedia.org/wiki/Analysis_of_algorithms>

- time and space
- recursive vs non-recursive
- turing machine.
- p vs. np.

#applications

- calculus
- linear algebra
- probability
- discrete

## data structures

- list
    - sorting
- hashmap

## classic

- exponential
- factorial
- fibonacci
- min/max
- sorting
- mcd, mcm
- prime sieve

## numeric

- f(x) = 0
-- divide by two
-- newtons method
- split, newton
- eq difs: ordinary/partial
- integration
- taylor series
- matrices
- foundations, incompleteness, forcing
- FFT

##control theory

##finite elements

- fluids
- solids

## integer programming

#misc

- make cheatsheets!!!!
- how to type: resource arm
  - user four fingers
  - closest one first
  - look at the screen
- use keyboard shortcuts
- regexp
- language normal form

##hacker culture

"Do you pine for the nice days of Minix-1.1, when men were men and wrote their own device drivers?" Linus Torvalds