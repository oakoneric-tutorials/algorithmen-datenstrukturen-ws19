import os
import io

# settings for final titlepage folder
path = input('Type the tutorial you want to compile: ')
#filename = input('Type the final files name: ')
filename = path

path = "./" + path + "/"

# prepare filenames and files
texExt = '.tex'
pdfExt = '.pdf'

slidesFilename = filename
handoutFilename = filename + "_handout"

tempFilename = filename + "_temp"

# =============================================================================
# OPEN AND READ INPUT
with io.open(path + filename + texExt, mode='r', encoding='UTF8') as file:
    content = file.readlines()
file.close()
# =============================================================================

# change working directory
os.chdir(path)

slidesOption  = "\\documentclass{beamer}\n"
handoutOption = "\\documentclass[handout]{beamer}\n"

# =============================================================================
# HANDOUT
with io.open(tempFilename + texExt, mode='a', encoding='UTF8') as tempFile:
    tempFile.write(handoutOption)
    tempFile.writelines(content[1:])
tempFile.close()

# compile .tex file >> .pdf
shellHandout = '> texfot pdflatex -jobname=' + handoutFilename + " " + tempFilename + texExt
os.system(shellHandout)

# remove temporary files (especially .tex-file)
vrbFile = open(handoutFilename + '.vrb',"w+")
vrbFile.close()
os.remove(handoutFilename + '.aux')
os.remove(handoutFilename + '.log')
os.remove(handoutFilename + '.nav')
os.remove(handoutFilename + '.out')
os.remove(handoutFilename + '.snm')
os.remove(handoutFilename + '.toc')
os.remove(handoutFilename + '.vrb')
os.remove(tempFilename + texExt)
# =============================================================================

# =============================================================================
# SLIDES
with io.open(tempFilename + texExt, mode='a', encoding='UTF8') as tempFile:
    tempFile.write(slidesOption)
    tempFile.writelines(content[1:])
    
tempFile.close()

# compile .tex file >> .pdf
shellSlides = '> texfot pdflatex -jobname=' + slidesFilename + " " + tempFilename + texExt
os.system(shellSlides)

# remove temporary files (especially .tex-file)
vrbFile = open(slidesFilename + '.vrb',"w+")
vrbFile.close()
os.remove(slidesFilename + '.aux')
os.remove(slidesFilename + '.log')
os.remove(slidesFilename + '.nav')
os.remove(slidesFilename + '.out')
os.remove(slidesFilename + '.snm')
os.remove(slidesFilename + '.toc')
os.remove(slidesFilename + '.vrb')
os.remove(tempFilename + texExt)
# =============================================================================

os.remove("texfot")
# =============================================================================
# os.replace(handoutFilename, path + handoutFilename + pdfExt)
# os.replace(slidesFilename, path + slidesFilename + pdfExt)
# =============================================================================