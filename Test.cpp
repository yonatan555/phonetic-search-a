/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * yonatan cohen && shmouel
 *
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;


TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi Birth day xxx yyy";
            CHECK(find(text, "happi") == string("Happi"));
            CHECK(find(text, "Happi") == string("Happi"));
            CHECK(find(text, "XXX") == string("xxx"));
            CHECK(find(text, "YYY") == string("yyy"));
            CHECK(find(text, "Day") == string("day"));
            CHECK(find(text, "DAy") == string("day"));
            CHECK(find(text, "birth") == string("Birth"));
            CHECK(find(text, "BIRTH") == string("Birth"));
            CHECK(find(text, "BIrTH") == string("Birth"));
            CHECK(find(text, "BIRth") == string("Birth"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy new year ben yyy";
            CHECK(find(text, "habbY") == string("happy"));
            CHECK(find(text, "pen") == string("ben"));
            CHECK(find(text, "habbi") == string("happy"));
            CHECK(find(text, "happy") == string("happy"));
            CHECK(find(text, "HAPPY") == string("happy"));
            CHECK(find(text, "habby") == string("happy"));
            CHECK(find(text, "hapby") == string("happy"));
            CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of p and f") {
    string text = "the ficture is realy beautipull";
            CHECK(find(text, "ficture") == string("ficture"));
            CHECK(find(text, "Ficture") == string("ficture"));
            CHECK(find(text, "beautipull") == string("beautipull"));
            CHECK(find(text, "BeautiPull") == string("beautipull"));
            CHECK(find(text, "BEAUTIFULL") == string("beautipull"));
            CHECK(find(text, "beautipull") == string("beautipull"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of f and b") {
    string text = "Fe kind to your friend";
            CHECK(find(text, "briend") == string("friend"));
            CHECK(find(text, "briend") == string("friend"));
            CHECK(find(text, "brient") == string("friend"));
            CHECK(find(text, "frient") == string("friend"));
            CHECK(find(text, "be") == string("Fe"));
            CHECK(find(text, "Be") == string("Fe"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of w and v") {
    string text = "your vatch is very expensiWe";
            CHECK(find(text, "VatCH") == string("vatch"));
            CHECK(find(text, "waTch") == string("vatch"));
            CHECK(find(text, "EXpensive") == string("expensiWe"));
            CHECK(find(text, "EXpensywe") == string("expensiWe"));
            CHECK(find(text, "EXpensywe") == string("expensiWe"));
            CHECK(find(text, "Exfensywe") == string("expensiWe"));
            CHECK(find(text, "EXFensive") == string("expensiWe"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of G and J") {
    string text = "the jame ys Ober";
            CHECK(find(text, "game") == string("jame"));
            CHECK(find(text, "Game") == string("jame"));
            CHECK(find(text, "Ober") == string("Ober"));
            CHECK(find(text, "over") == string("Ober"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of z and s") {
    string text = "the Sebra iZ eating all the time ";
            CHECK(find(text, "Zebra") == string("Sebra"));
            CHECK(find(text, "zefra") == string("Sebra"));
            CHECK(find(text, "IS") == string("iZ"));
            CHECK(find(text, "is") == string("iZ"));
            CHECK(find(text, "dime") == string("time"));
            CHECK(find(text, "dyme") == string("time"));
    /* Add more checks here */
}
TEST_CASE("Test replacement of o and u") {
    string text = "yd iz not my baold ,u are very bad blair";
            CHECK(find(text, "fault") == string("baold"));
            CHECK(find(text, "faold") == string("baold"));
            CHECK(find(text, "Baold") == string("baold"));
            CHECK(find(text, "bault") == string("baold"));
            CHECK(find(text, "player") == string("blair"));
            CHECK(find(text, "PlAier") == string("blair"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of t and d") {
    string text = "I TiDnt do anydhing turring the day";
            CHECK(find(text, "didnt") == string("TiDnt"));
            CHECK(find(text, "Dytnt") == string("TiDnt"));
            CHECK(find(text, "aniding") == string("anydhing"));
            CHECK(find(text, "anytynj") == string("anydhing"));
            CHECK(find(text, "anything") == string("anydhing"));
            CHECK(find(text, "AnidhYnj") == string("anydhing"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of i and y") {
    string text = "Happi year xxx yyy iayr";
            CHECK(find(text, "happy") == string("Happi"));
            CHECK(find(text, "iii") == string("yyy"));
            CHECK(find(text, "iear") == string("year"));
            CHECK(find(text, "yair") == string("iayr"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of c and k") {
    string text = "tace a risk , there is no udher Khanke";
            CHECK(find(text, "RYSc") == string("risk"));
            CHECK(find(text, "chance") == string("Khanke"));
            CHECK(find(text, "chanKE") == string("Khanke"));
            CHECK(find(text, "take") == string("tace"));
            CHECK(find(text, "other") == string("udher"));
            CHECK(find(text, "UDHER") == string("udher"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of c and q") {
    string text = "command and conquer";
            CHECK(find(text, "Qummant") == string("command"));
            CHECK(find(text, "QommanT") == string("command"));
            CHECK(find(text, "CUncoer") == string("conquer"));
            CHECK(find(text, "conquer") == string("conquer"));
            CHECK(find(text, "QUNcuER") == string("conquer"));
            CHECK(find(text, "conqoer") == string("conquer"));
    /* Add more checks here */
}
TEST_CASE("Test replacement of q and k") {
    string text = "KiLL THe corona virus";
            CHECK(find(text, "qill") == string("KiLL"));
            CHECK(find(text, "QILL") == string("KiLL"));
            CHECK(find(text, "quruna") == string("corona"));
            CHECK(find(text, "Qorona") == string("corona"));
    /* Add more checks here */
}
TEST_CASE(" everything toghter :( ")
{
    string str = "the world is gonna destroyded in soon";
            CHECK( find(str,"dth") == string("the"));
            CHECK( find(str,"suun") == string("soon") );
            CHECK( find(str,"zoon") == string("soon"));
            CHECK( find(str,"iz") == string("is"));
            CHECK( find(str,"yn") == string("in") );
            CHECK( find(str,"jonna") == string("gonna"));
            CHECK( find(str,"gunna") == string("gonna"));
            CHECK( find(str,"junna") == string("gonna") );
            CHECK( find(str,"destroyded") == string("destroyded"));
            CHECK( find(str,"TeztruiteT") == string("destroyded"));
            CHECK( find(str,"TEZTRUIDET") == string("destroyded"));
            CHECK( find(str,"vurlt") == string("world"));
            CHECK( find(str,"WoRLt") == string("world") );
}


TEST_CASE("Test for double words with 2 diffrenet ways of appearance") {
    string text = "ajayn ant again and over Ajain";
            CHECK(find(text, "again") == string("ajayn"));
            CHECK(find(text, "ajain") == string("ajayn"));
            CHECK(find(text, "Ajain") == string("ajayn"));
            CHECK(find(text, "and") == string("ant"));
    /* Add more checks here */
}

TEST_CASE("Test for word that doesnt exist") {
    string text = "it was a long story";
            CHECK(find(text, "want") == string("Happi"));
            CHECK(find(text, "be") == string("Happi"));
            CHECK(find(text, "take") == string("Happi"));
            CHECK(find(text, "frieend") == string("Happi"));
    /* Add more checks here */
}


