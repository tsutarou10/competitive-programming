#!/bin/sh


readonly SCRIPT_DIR=$(cd $(dirname $0); pwd)
readonly TEMPALTE_FILE_NAME="template.cpp"

readonly CURRENT_DIR=`pwd`

readonly NEW_FILE_NAME="${1}.cpp"

cp "${SCRIPT_DIR}/${TEMPALTE_FILE_NAME}" "${CURRENT_DIR}/${NEW_FILE_NAME}"
