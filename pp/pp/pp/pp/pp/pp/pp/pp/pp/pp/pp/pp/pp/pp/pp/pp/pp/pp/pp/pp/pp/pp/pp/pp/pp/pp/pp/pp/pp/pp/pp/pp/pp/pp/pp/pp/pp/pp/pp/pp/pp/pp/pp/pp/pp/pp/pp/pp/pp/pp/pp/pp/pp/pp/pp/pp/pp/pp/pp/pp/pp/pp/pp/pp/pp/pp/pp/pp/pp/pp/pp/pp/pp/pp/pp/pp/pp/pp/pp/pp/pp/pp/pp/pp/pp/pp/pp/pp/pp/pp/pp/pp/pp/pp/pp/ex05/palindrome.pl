#!/usr/bin/perl

print "Enter a string: ";
my $str = <STDIN>;
chomp $str;

$str =~ s/[^a-zA-Z]//g;
$str = lc $str;

if ($str eq reverse $str) {
    print "The string is a palindrome!\n";
} else {
    print "The string is not a palindrome.\n";
}