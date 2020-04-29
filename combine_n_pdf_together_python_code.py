from PyPDF2 import PdfFileMerger, PdfFileReader
import glob

def filebrowser(ext=""):
    "Returns files with an extension"
    return [f for f in glob.glob(f"*{ext}")]

filenames = filebrowser(".pdf") 
# Call the PdfFileMerger
mergedObject = PdfFileMerger()
 
# I had 116 files in the folder that had to be merged into a single document
# Loop through all of them and append their pages
for names in filenames:
    mergedObject.append(PdfFileReader(names, 'rb'))
    # mergedObject.append(PdfFileReader('6_yuddhakanda_' + str(fileNumber)+ '.pdf', 'rb'))

# Write all the files into a file which is named as shown below
mergedObject.write("mergedfilesoutput.pdf")