#!/bin/sh

CONTEST_NAME=${1}
RANKS=(
  "a"
  "b"
  "c"
  "d"
)

mkdir -p "${CONTEST_NAME}"
for RANK in "${RANKS[@]}"; do
  cp "template.py" "${CONTEST_NAME}/${RANK}.py"
done
