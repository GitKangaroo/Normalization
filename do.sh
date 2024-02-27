nEntryToStop=$1
which mkexe.sh

mkdir -p output
rm -rf Analysis
mkexe.sh Analysis

./Analysis $nEntryToStop;
