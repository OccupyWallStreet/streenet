(function ($) {

  // this 'complete' function is not currently used
  Drupal.behaviors.ows_civi_complete = {
    attach: function (context, settings) {
      $('#civi_email_result > span').html('Thanks for signing up!').css({padding: '5px', backgroundColor: '#2F5', borderRadius: '10px', marginTop: '5px', textAlign: 'center'});
      setTimeout(function() {
        $('#civi_email_result > span').fadeOut('slow');
      }, 5000);
    }
  };

  // send an email address to civi
  Drupal.behaviors.ows_civi_post = {
    attach: function (context, settings) {
      $('div.newsletter-email-submit-button input.form-submit', context).click(function() {
        var email = $('div.newsletter-email input#email-Primary').val();
				
				//validate
				
				var emailpatt = /^[a-z0-9._%-]+@[a-z0-9.-]+\.[a-z]{2,4}$/i;
				if( !emailpatt.test( email ) ){
					alert("Please enter a valid email address.");
					return false;
				}
        
				if (email) {
          // send the data to civi
          var profileId = 26;
          var groupId = 14;
          var url = 'http://contribute.occupywallstreet.net/civicrm/profile/create?gid=' + profileId + '&amp;reset=1';

          var data = {
            'postURL': '',
            'cancelURL': '',
            'add_to_group' : groupId,
            'email-Primary' : email,
            '_qf_default' : '',
            '_qf_Edit_next' : ''
          };
          $.ajax({
            'url': url,
            'data': data, 
            'type': 'POST',            
            //'complete': ows_civi_complete
          });

          $('div.newsletter-email input#email-Primary').val('Thanks for signing up!');

          return false;
        }
      });
    }
  };
})(jQuery);
