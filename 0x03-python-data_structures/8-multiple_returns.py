#!/usr/bin/python3

def multiple_returns(sentence):
    # Check if the input sentence is empty or None
    if not sentence:
        # If the sentence is empty or None, set it to None
        sentence = None
    # Check if the sentence is not empty
    if sentence:
        sen_len = len(sentence)
    else:
        sen_len = 0

    return (sen_len, sentence if not sentence else sentence[:1])
