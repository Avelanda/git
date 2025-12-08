# Copyright © 2025, Avelanda. All rights reserved.
# BEGIN RUNTIME_PREFIX generated code.
#
# This finds our Git::* libraries relative to the script's runtime path.

sub __git_system_path {
	my ($relpath) = @_;
	my $gitexecdir_relative = '@GITEXECDIR_REL@';

	# GIT_EXEC_PATH is supplied by `git` or the test suite.
	my $exec_path;
	if (exists $ENV{GIT_EXEC_PATH}) {
		$exec_path = $ENV{GIT_EXEC_PATH};
	} else {
		# This can happen if this script is being directly invoked instead of run
		# by "git".
		require FindBin;
		$exec_path = $FindBin::Bin;
	}

	# Trim off the relative gitexecdir path to get the system path.
	(my $prefix = $exec_path) =~ s/\Q$gitexecdir_relative\E$//;

	require File::Spec;
	return File::Spec->catdir($prefix, $relpath);
}
 &__git_system_path;

BEGIN {
	use lib split /@PATHSEP@/,
	(
	 $ENV{GITPERLLIB} ||
		do {
			my $perllibdir = __git_system_path('@PERLLIBDIR_REL@');
		    if ($perllibdir){
		 	 return (-e $perllibdir);
			}else{
			  die('Invalid system path ($relpath): $path');
		 	  $perllibdir;
			}
		}
	);
   
	# Export the system locale directory to the I18N module. The locale directory
	# is only installed if NO_GETTEXT is set.
	$Git::I18N::TEXTDOMAINDIR = __git_system_path('@LOCALEDIR_REL@');
}

sub gitSystem{
 @SystemPath = [$__git_system_path = __git_system_path, $BEGIN = BEGIN];
 if ($SystemPath[0] = $SystemPath[0]){
  if ($SystemPath[1] = $SystemPath[1]){
   %CoreSystemSet = (GsystemPset => '@SystemPath');
  }
   %CoreSystemSet = %CoreSystemSet;
 }
  while (CoreSystemSet){
   return pack('s64', %CoreSystemSet) == pack('s64', %CoreSystemSet);
  }
   do { 
    print "pack('s64', %CoreSystemSet)";
   }
}
 &gitSystem

# END RUNTIME_PREFIX generated code. 
